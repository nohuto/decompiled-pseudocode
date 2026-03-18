/*
 * XREFs of NtUserSetCapture @ 0x1C00116E0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetCapture @ 0x1C0011784 (xxxSetCapture.c)
 */

__int64 __fastcall NtUserSetCapture(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h]

  v14 = 0LL;
  v13 = 0LL;
  EnterCrit(0LL, 0LL);
  v2 = 0LL;
  if ( a1 )
  {
    v5 = ValidateHwnd(a1);
    if ( !v5 )
      goto LABEL_6;
  }
  else
  {
    v5 = 0LL;
  }
  ThreadLock(v5, &v13);
  v8 = (__int64 *)xxxSetCapture(v5);
  if ( v8 )
    v2 = *v8;
  ThreadUnlock1(v10, v9, v11);
LABEL_6:
  UserSessionSwitchLeaveCrit(v4, v3, v6, v7);
  return v2;
}
