──────────────────────────────────────────────────────────────────────  
# PROJETO - Temporização 1 - Semáforo
(SUB GRUPO 6)  
**Aluno: Lucas Ricardo de Lima Figueiredo** 

──────────────────────────────────────────────────────────────────────  
## OBJETIVO DO PROJETO  
──────────────────────────────────────────────────────────────────────  

O objetivo deste projeto é criar um semáforo que alterne entre os LEDs por meio de rotinas de temporização.

──────────────────────────────────────────────────────────────────────  
## FUNCIONALIDADES DO PROJETO  
──────────────────────────────────────────────────────────────────────  

A cada 3 segundos, o LED que está aceso é alterado de acordo com as especificações abaixo:

**LED Vermelho:** O programa inicia no LED vermelho, sempre que estiver no vermelho, o próximo LED aceso será o Amarelo;

**LED Amarelo:** sempre que estiver no Amarelo, o próximo LED aceso será o Verde;

**LED Verde:** sempre que estiver no Verde, o próximo LED aceso será o Vermelho;

──────────────────────────────────────────────────────────────────────  
## TECNOLOGIAS UTILIZADAS  
──────────────────────────────────────────────────────────────────────  
- Linguagem: C;
- Microcontrolador: Raspberry Pi Pico (RP2040);
- Plataforma de simulação Wokwi.

──────────────────────────────────────────────────────────────────────  
## COMO EXECUTAR O PROJETO
──────────────────────────────────────────────────────────────────────  
- **Clone o Repositório:**
  git clone [https://github.com/LucasrFig/Raspberry-Pi-Pico-temporizacao-1.git](https://github.com/LucasrFig/Raspberry-Pi-Pico-temporizacao-1.git)
  
- **Compile o Código:**
  Utilize o ambiente de desenvolvimento VS Code. 
  Instalar extensão: Raspberry Pi Pico.

- **Carregue na Raspberry Pi Pico:**
  Conecte a Raspberry Pi Pico em modo de boot.
  Copie o arquivo .uf2 gerado para a unidade de armazenamento da Pico.
