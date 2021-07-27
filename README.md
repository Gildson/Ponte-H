# Ponte-H
Modelo funcional de acionamento de motores utilizando uma ponte H L293D
OBS: todos os códigos utilizados aqui são de baixo nível

Aqui não iremos descrever a ponte H, pois suponho que cada um já sabe como ela funciona, mas para quem ainda não tem esse conhecimento ou quer saber mais, indico que acesse
 pt.wikipedia.org/wiki/Ponte_H

Ponte H contém 16 pinos
1 e 9 São pinos de Enable, isso que dizer que quando colocamos 1 nesses pinos estaremos ativando o funcionamento dos motores ou caso contrário colocando o 0 estaremos desativando;
2, 7, 10 e 15 São pinos de entrada, para funcionar a ponte H precisa de dois bits, são esses bits que serão responsáveis pelo sentido de rotação do motor,
assim como para parar e para desligar, abaixo tem os bits de como deve ser feito para cada função:
00 - desliga
10 ou 01 indicam os sentidos
11 freia
3, 6, 11 e 14 São pinos de saída, cada terminal dos motores deve ser ligado a um pino desses;
4, 5, 12 e 13 São pinos GND, todos eles devem está conectados;
8 É o pino Vs nele é ligado a tensão que irá alimentar os motores;
16 É o pino Vss nele é ligado os 5v do arduino, ele irá alimentar a ponte H.
