#pragma once
// Copy this file to secrets.h and configure it locally.
// Never publish secrets.h; it is excluded by .gitignore.
// Only these three settings are consumed by version 0.1.

// Wi-Fi used at boot to obtain the JSON. Disabled again before BLE starts.
// Empty SSID skips network loading. An empty password supports an open network.
static const char* WIFI_SSID = "";
static const char* WIFI_PASSWORD = "";

// Full raw HTTPS URL of one layout, including the filename.
// Empty URL skips remote loading. Failed/invalid downloads fall back to
// /keyboard.json on SD (if present), then the bundled layouts/keyboard.v1.json.
static const char* KEYBOARD_JSON_URL = "https://raw.githubusercontent.com/MarsWalker/CYD_Keyboard/refs/heads/main/layouts/keyboard.v1.json";

// Bluetooth.Name, KeyboardLayout, controls and slider actions belong in the
// layout JSON, not here. No Home Assistant URL/token, proxy, or PC application
// settings are required for this standalone Bluetooth keyboard.
