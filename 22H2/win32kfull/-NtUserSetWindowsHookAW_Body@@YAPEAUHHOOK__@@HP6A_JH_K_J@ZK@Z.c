/*
 * XREFs of ?NtUserSetWindowsHookAW_Body@@YAPEAUHHOOK__@@HP6A_JH_K_J@ZK@Z @ 0x1C01CC11C
 * Callers:
 *     NtUserSetWindowsHookAW @ 0x1C01DD940 (NtUserSetWindowsHookAW.c)
 * Callees:
 *     zzzSetWindowsHookEx @ 0x1C006F810 (zzzSetWindowsHookEx.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall NtUserSetWindowsHookAW_Body(
        __int64 a1,
        __int64 (*a2)(int, unsigned __int64, __int64),
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rsi
  __int64 v5; // rbp
  char v6; // bl
  struct tagTHREADINFO *v8; // rax
  __int64 v9; // rax
  int v11; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0LL;
  v5 = (int)a1;
  v11 = 0;
  v6 = a3;
  v8 = PtiCurrentShared(a1, (__int64)a2, a3, a4);
  v9 = zzzSetWindowsHookEx(0LL, 0LL, (__int64)v8, v5, (__int64)a2, v6, &v11);
  if ( !v9 )
    return -1LL;
  if ( !v11 || (byte_1C0317021[v5] & 8) != 0 )
  {
    v4 = v9;
    if ( v9 != -1 )
      return *(_QWORD *)v9;
  }
  return v4;
}
