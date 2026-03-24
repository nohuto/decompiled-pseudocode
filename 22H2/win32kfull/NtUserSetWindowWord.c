/*
 * XREFs of NtUserSetWindowWord @ 0x1C015B8C0
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxSetWindowWord@@YAGPEAUtagWND@@HG@Z @ 0x1C015B99C (-xxxSetWindowWord@@YAGPEAUtagWND@@HG@Z.c)
 */

__int64 __fastcall NtUserSetWindowWord(__int64 a1, int a2, unsigned __int16 a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int16 v8; // bx
  struct tagWND *v9; // rdi
  __int64 v10; // rcx
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]

  v12 = 0LL;
  v13 = 0LL;
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwndEx(a1, 1LL, 1LL);
  v8 = 0;
  v9 = (struct tagWND *)v6;
  if ( v6 )
  {
    *(_QWORD *)&v12 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v12;
    *((_QWORD *)&v12 + 1) = v6;
    HMLockObject(v6);
    v8 = xxxSetWindowWord(v9, a2, a3);
    ThreadUnlock1(v10);
  }
  UserSessionSwitchLeaveCrit(v7);
  return v8;
}
