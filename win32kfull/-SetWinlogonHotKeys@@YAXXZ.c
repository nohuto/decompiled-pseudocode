/*
 * XREFs of ?SetWinlogonHotKeys@@YAXXZ @ 0x1C0078988
 * Callers:
 *     RawInputThread @ 0x1C007A0C0 (RawInputThread.c)
 * Callees:
 *     ?_RegisterHotKey@@YAHPEAUtagWND@@P6AX_K_J@ZHIIPEAUHWND__@@@Z @ 0x1C003AB6C (-_RegisterHotKey@@YAHPEAUtagWND@@P6AX_K_J@ZHIIPEAUHWND__@@@Z.c)
 */

void SetWinlogonHotKeys(void)
{
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))WinlogonHotkeyCallback, 0LL, 32771, 0x2Eu, 0LL);
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))WinlogonHotkeyCallback, 4LL, 6, 0x1Bu, 0LL);
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))WinlogonHotkeyCallback, 5LL, 32776, 0x4Cu, 0LL);
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))WinlogonHotkeyCallback, 6LL, 8200, 0x55u, 0LL);
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))WinlogonHotkeyCallback, 13LL, 24586, 0xDu, 0LL);
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))WinlogonHotkeyCallback, 14LL, 24584, 0xDu, 0LL);
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))WinlogonHotkeyCallback, 12LL, 24584, 0xBBu, 0LL);
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))WinlogonHotkeyCallback, 12LL, 24584, 0x6Bu, 0LL);
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))WinlogonHotkeyCallback, 15LL, 8206, 0x4Cu, 0LL);
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))WinlogonHotkeyCallback, 10LL, 24586, 0x7Du, 0LL);
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))WinlogonHotkeyCallback, 7LL, 8200, 0x50u, 0LL);
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))WinlogonHotkeyCallback, 8LL, 8202, 0x50u, 0LL);
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))WinlogonHotkeyCallback, 9LL, 8204, 0x50u, 0LL);
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))RotationLockCallback, 4294967284LL, 8200, 0x4Fu, 0LL);
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))WinlogonWinSpaceCallback, 4294967288LL, 8200, 0x20u, 0LL);
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))WinlogonWinSpaceCallback, 4294967287LL, 8202, 0x20u, 0LL);
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))WinlogonWinSpaceCallback, 4294967286LL, 8204, 0x20u, 0LL);
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))WinlogonWinSpaceCallback, 4294967285LL, 8206, 0x20u, 0LL);
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))WinlogonHotkeyCallback, 7LL, 8200, 0x85u, 0LL);
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))WinlogonHotkeyCallback, 8LL, 8202, 0x85u, 0LL);
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))WinlogonHotkeyCallback, 9LL, 8204, 0x85u, 0LL);
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))RotationLockCallback, 4294967283LL, 24584, 0x7Du, 0LL);
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))WinlogonHotkeyCallback, 11LL, 26632, 0x7Fu, 0LL);
  _RegisterHotKey(0LL, PTPEnableHotkeyCallback, 4294967282LL, 18442, 0x87u, 0LL);
}
