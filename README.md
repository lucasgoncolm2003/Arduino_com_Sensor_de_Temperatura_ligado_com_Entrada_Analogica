# Circuito de Sensor de Temperatura ligado à Entrada Analógica com LED e Arduino - [Sensor TMP36, LED e Resistor]
O Projeto foi realizado com Arduino, Resistor, LED e Sensor de Temperatura TMP36 que aciona um LED no momento em que a Temperatura Ambiente ultrapassa um certo Valor, podendo ser usado como recurso de Segurança e Automação. Aqui está um anexo que mostra o circuito montado com todos os seus componentes, com desenho projetado em Tinkercad.
<br>
<div style="display: inline_block" align="center">
<img src="https://user-images.githubusercontent.com/112359793/204156465-9597912d-1e1e-4b9e-a4a4-c180e7f4fc77.png">
</img>
</div>
<h2>Funcionamento do Circuito</h2>
O projeto é feito com Arduino em Linguagem C++, um Resistor que limita a Passagem de Corrente Elétrica, seguido por um LED - Diodo Emissor de Luz (que avisa ao usuário que a Temperatura foi ultrapassada) - e um Sensor de Temperatura TMP36 ligado em um Terminal Positivo, um Negativo, e em uma Saída Analógica A0 ligada ao Arduino, que possui uma Escala de Medição de 10mV/ºC na Saída, tendo em vista que o Sinal do Arduino é de 5V e o outro Sinal é um GND (0V ou Aterramento).
