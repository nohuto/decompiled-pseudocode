/*
 * XREFs of NtUserSetWindowsHookAW @ 0x1C02036F0
 * Callers:
 *     <none>
 * Callees:
 *     zzzSetWindowsHookEx @ 0x1C001FCE8 (zzzSetWindowsHookEx.c)
 */

__int64 __fastcall NtUserSetWindowsHookAW(int a1, __int64 a2, char a3)
{
  __int64 v4; // rsi
  __int64 v6; // rax
  _BYTE *v7; // rcx
  __int64 v8; // rbx

  v4 = a1;
  EnterCrit(0LL, 1LL);
  v6 = zzzSetWindowsHookEx(0LL, 0LL, gptiCurrent, v4, a2, a3);
  v8 = v6;
  if ( v6 )
  {
    if ( !*(_QWORD *)(v6 + 40) )
    {
      v7 = byte_1C02EB9F9;
      if ( (byte_1C02EB9F9[v4] & 8) == 0 )
        v8 = 0LL;
    }
    if ( v8 != -1 && v8 )
      v8 = *(_QWORD *)v8;
  }
  else
  {
    v8 = -1LL;
  }
  UserSessionSwitchLeaveCrit(v7);
  return v8;
}
