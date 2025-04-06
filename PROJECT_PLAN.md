# 🚀 AviTab Enhanced — Project Plan

**Ziel:**  
Fork von AviTab zur Integration von:
- 🧩 SimBrief Flugplanung direkt im Cockpit
- 🌍 Online-ATC Übersicht für VATSIM und IVAO
- ✅ VR-tauglich, effizient, übersichtlich

---

## 🗂️ Projekt Setup

- [ ] Repository forken (`fpw/avitab`)
- [ ] Lokale Umgebung einrichten (CMake, Compiler, SDL2, X-Plane SDK)
- [ ] Build-Prozess prüfen (Plugin wird in X-Plane erkannt)
- [ ] Debug-Build aktivieren

---

## 🧩 SimBrief Integration

- [ ] SimBrief API Key / UserID Integration ins Plugin-Setting
- [ ] HTTP-Request an SimBrief API (XML)
- [ ] XML-Parser einbinden (tinyxml2)
- [ ] Datenextraktion:
  - [ ] Flugnummer, Departure, Arrival
  - [ ] Route
  - [ ] Fuel Planning
  - [ ] Wetterdaten (optional)

- [ ] UI im neuen Tab „SimBrief“ erstellen:
  - [ ] Grundlayout mit Flight Info
  - [ ] Scrollbare Ansicht für Route und Fuel
  - [ ] Refresh-Button für neue Pläne

- [ ] Testing & Validierung (XML mit echten Plänen testen)

---

## 🌍 Online-ATC Tab (VATSIM / IVAO)

- [ ] VATSIM JSON Feed integrieren
- [ ] IVAO JSON Feed integrieren
- [ ] JSON Parsing: ATC Stations
- [ ] X-Plane Datarefs abfragen (Flugzeugposition)
- [ ] Entfernung berechnen (Haversine-Formel)
- [ ] UI im neuen Tab „Online-ATC“ erstellen:
  - [ ] Tabelle mit Station / Frequenz / Typ / Entfernung / Netzwerk
  - [ ] Refresh-Button
  - [ ] Optional: Filter nach Typ

- [ ] Testing: Reichweite & Anzeige prüfen (Events / Echtzeit)

---

## 🎨 Feinschliff / Komfortfunktionen

- [ ] UI-Design verbessern (Padding, Fonts, Scrollbars)
- [ ] Statusanzeigen (z.B. „Daten werden geladen…“)
- [ ] Fehlerbehandlung (wenn API offline)
- [ ] Frequenz klickbar machen (optional: Funkgerät in X-Plane einstellen)
- [ ] Performance-Check: Plugin darf keine Lags verursachen
- [ ] Optional: Auto-Refresh für ATC-Tab

---

## 📦 Build & Release

- [ ] AppImage / .deb Paketierung für Linux
- [ ] Plugin Binary für Windows & macOS (optional)
- [ ] GitHub Release anlegen
- [ ] README aktualisieren mit Screenshots & Installationsanleitung

---

## 📖 Dokumentation

- [ ] Installationsanleitung
- [ ] FAQ (z.B. „Wie finde ich meine SimBrief ID?“)
- [ ] Contribution Guide (falls Open Source)
- [ ] Changelog

---

## 💡 Bonus-Ideen (Optional für später)

- [ ] Integration von VATSIM/IVAO Event-Daten
- [ ] METAR/TAF Anzeige pro Airport im SimBrief Tab
- [ ] Direct-to-Funktion aus ATC-Tab für Avionik
- [ ] Anzeige von benachbarten Piloten
- [ ] Favoriten-System für bevorzugte Airports / ATC

---

## 🎉 Ziel

Ein vollintegriertes AviTab mit:
- 🧩 SimBrief Flugplanung direkt im Cockpit
- 🌍 Online-ATC Übersicht für VATSIM und IVAO
- 🚀 VR-taugliche Darstellung
- 🛠️ Einfach zu installieren und zu benutzen

---

**Status:**  
🟢 Projektstart ✅  
🟡 Entwicklungsumgebung wird vorbereitet  
🔵 Fork bereit, Build folgt

---


