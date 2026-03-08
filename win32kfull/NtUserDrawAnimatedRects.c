/*
 * XREFs of NtUserDrawAnimatedRects @ 0x1C01CFB30
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     xxxDrawAnimatedRects @ 0x1C0227740 (xxxDrawAnimatedRects.c)
 */

__int64 __fastcall NtUserDrawAnimatedRects(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rcx
  struct tagWND *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int128 v9; // [rsp+58h] [rbp-20h] BYREF
  __int64 v10; // [rsp+68h] [rbp-10h]

  v9 = 0LL;
  v10 = 0LL;
  EnterCrit(0LL, 0LL);
  v2 = 0;
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
  ThreadLock(v4, &v9);
  v2 = xxxDrawAnimatedRects(v4);
  ThreadUnlock1(v6, v5, v7);
LABEL_6:
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
