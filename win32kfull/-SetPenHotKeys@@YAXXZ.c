void SetPenHotKeys(void)
{
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))PenHotkeyCallback, 25LL, 16904, 0x83u, 0LL);
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))PenHotkeyCallback, 26LL, 16904, 0x82u, 0LL);
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))PenHotkeyCallback, 27LL, 16904, 0x81u, 0LL);
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))PenHotkeyCallback, 28LL, 16906, 0x83u, 0LL);
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))PenHotkeyCallback, 29LL, 16906, 0x82u, 0LL);
}
