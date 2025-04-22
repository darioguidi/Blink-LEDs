# 🔌 Accensione Simultanea di Tre LED con ATmega328PA

## 🛠 Descrizione del Progetto

Questo progetto dimostra l'utilizzo della libreria **`avr/io.h`** per il controllo diretto dei pin I/O su un microcontrollore **ATmega328P-AU**, comunemente utilizzato in ambienti embedded come Arduino (ma in questo caso senza framework).  
L'obiettivo è semplice ma fondamentale: **accendere tre LED contemporaneamente** utilizzando il basso livello di programmazione in C, sfruttando le potenzialità offerte dai registri del microcontrollore.

## ⚙️ Requisiti Hardware

- Microcontrollore **ATmega328P-AU**
- 3 LED (di qualsiasi colore)
- 3 resistori (220Ω consigliati)
- Breadboard
- Cavi di collegamento
- Programmatore ISP (es. USBasp o Arduino come ISP)
- Alimentazione 5V

## 🧠 Panoramica Tecnica

Il progetto imposta tre pin digitali del microcontrollore come **uscite**, quindi li porta **ad alto livello logico (HIGH)** per accendere simultaneamente i tre LED.

### Pin Utilizzati (esempio):
- **PD2**, **PD3**, **PD4** → corrispondenti ai pin digitali 2, 3 e 4

### Principali Funzioni Usate:
- `DDRD` → imposta la direzione dei pin (input/output)
- `PORTD` → controlla il valore logico dei pin in uscita