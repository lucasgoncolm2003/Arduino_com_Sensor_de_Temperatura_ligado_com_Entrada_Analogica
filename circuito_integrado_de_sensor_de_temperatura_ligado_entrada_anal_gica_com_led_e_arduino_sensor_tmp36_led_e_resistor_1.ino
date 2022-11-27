// C++ code
//
int value; // Recebe Valor lido por Entrada Analógica
float signal; // Recebe Valor convertido do Sinal em Tensão Elétrica
float temp; // Recebe o Valor da Tensão convertido em Temperatura (ºC)
void setup()
{
  Serial.begin(9600);
  /* Serial.begin():
  - Envia valor da Variável temp em Comunicação Serial
  - Monitoramento Constante no Monitor do Tinkercad
  */
  pinMode(13, OUTPUT);
}

void loop()
{
	value = analogRead(A0); // Leitura de Sinal da Entrada Analógica A0;
  	signal = value*5000.0/1024.0;
    /*
    Conversor Analógico-Digital (AD):
    - gera Resultado variante de 0 a 1023;
    - proporcional ao Sinal Analógico;
    - 0 é a Ausência de Sinal, e 1023 é o Sinal Máximo;
    - 1023 é a Tensão de Alimentação;
    - signal é Conversão em Valor de Tensão Elétrica;
    - 5000/1024: Relação entre Tensão em Milivolts pelos Valores Possívels (5V por 1024 Partes);
    */
    temp = signal/10;
    /* Fator de Escala de Sensor TMP36: 10mV/ºC.
    - Temperatura Base do TMP36: 750mV em 25ºC.
    - temp = signal/10 resultaria em 75ºC.
    - Deve-se reduzir 50ºC para adaptar o Cálculo.
    */
    temp = temp - 50;
  	Serial.println(temp); // Envia Temperatura ao Monitoramento.
  	if(temp > 40){ // Se Temperatura for maior que 40ºC, acende LED; senão, não acende.
      digitalWrite(13, HIGH);
    } else {
      digitalWrite(13, LOW);
    } 
  	delay(500);
}

/*
	Sensor de Temperatura TMP36
    - Possui Três Terminais de Ligação:
    - 1: de Alimentação Positiva
    - 2: de Alimentação Negativa
    - 3: Saída Analógica A0
*/