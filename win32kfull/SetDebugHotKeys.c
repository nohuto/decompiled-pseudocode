/*
 * XREFs of SetDebugHotKeys @ 0x1C0078FDC
 * Callers:
 *     RawInputThread @ 0x1C007A0C0 (RawInputThread.c)
 * Callees:
 *     ?_RegisterHotKey@@YAHPEAUtagWND@@P6AX_K_J@ZHIIPEAUHWND__@@@Z @ 0x1C003AB6C (-_RegisterHotKey@@YAHPEAUtagWND@@P6AX_K_J@ZHIIPEAUHWND__@@@Z.c)
 */

__int64 SetDebugHotKeys()
{
  __int64 v0; // rcx
  __int64 v1; // rcx
  __int64 v2; // rcx
  unsigned int v3; // eax
  __int64 v5; // rcx
  bool v6; // zf
  unsigned int v7; // [rsp+40h] [rbp+8h]

  FastGetProfileDword(0LL, 21LL, L"UserDebuggerHotkey");
  if ( *(_BYTE *)(SGDGetUserSessionState(v0) + 12568) == 2
    || *(_BYTE *)(SGDGetUserSessionState(v1) + 12568) == 4
    || *(_BYTE *)(SGDGetUserSessionState(v2) + 12568) == 7
    || (v6 = *(_BYTE *)(SGDGetUserSessionState(v5) + 12568) == 8, v3 = 109, v6) )
  {
    v3 = 123;
  }
  v7 = v3;
  _RegisterHotKey((struct tagWND *)1, 0LL, 4294967291LL, 0, v3, 0LL);
  return _RegisterHotKey((struct tagWND *)1, 0LL, 4294967290LL, 4, v7, 0LL);
}
