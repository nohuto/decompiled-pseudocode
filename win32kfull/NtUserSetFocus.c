/*
 * XREFs of NtUserSetFocus @ 0x1C009A340
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C009A3E0 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

__int64 __fastcall NtUserSetFocus(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  struct tagWND *v4; // rdi
  struct tagWND *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  v11 = 0LL;
  v10 = 0LL;
  EnterCrit(0LL, 0LL);
  v2 = 0LL;
  if ( a1 )
  {
    v4 = (struct tagWND *)ValidateHwnd(a1);
    if ( !v4 )
      goto LABEL_6;
  }
  else
  {
    v4 = 0LL;
  }
  ThreadLock(v4, &v10);
  v5 = xxxSetFocus(v4);
  if ( v5 )
    v2 = *(_QWORD *)v5;
  ThreadUnlock1(v7, v6, v8);
LABEL_6:
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
