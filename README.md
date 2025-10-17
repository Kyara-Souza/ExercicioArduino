# 💡 Projeto: LED com Botão
Este projeto demonstra o controle de um LED utilizando um botão físico. É ideal para iniciantes em eletrônica e programação com microcontroladores como Arduino.

# 🔧 Materiais Utilizados
1 × LED (vermelho, verde ou azul)

1 × Resistor de 220Ω

1 × Botão (push button)

1 × Arduino Uno (ou similar)

Jumpers

Protoboard

# ⚙️ Esquema de Ligação
O LED é conectado ao pino digital do Arduino com resistor em série.

O botão é conectado a outro pino digital com resistor pull-down (ou configurado via software).

GND e VCC conectados conforme necessário.

# 🧠 Funcionamento
Quando o botão é pressionado, o LED acende.

Quando o botão é solto, o LED apaga.

# 📚 Aprendizados
Uso de entradas digitais com botão

Controle de saída digital (LED)

Conceitos de pull-up/pull-down

# 🧪 Testes
Verifique se o LED acende apenas quando o botão é pressionado.

Teste diferentes resistores para ajustar o brilho do LED.

# 📌 Observações
Certifique-se de que o botão está corretamente conectado para evitar leituras falsas.

Pode-se usar INPUT_PULLUP no pinMode para simplificar o circuito.
