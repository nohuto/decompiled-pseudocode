/*
 * XREFs of NtUserDrawAnimatedRects @ 0x1C01F79F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     xxxDrawAnimatedRects @ 0x1C023EA44 (xxxDrawAnimatedRects.c)
 */

__int64 __fastcall NtUserDrawAnimatedRects(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rcx
  struct tagWND *v4; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rcx
  __int128 v8; // [rsp+58h] [rbp-20h] BYREF
  __int64 v9; // [rsp+68h] [rbp-10h]

  v8 = 0LL;
  v9 = 0LL;
  EnterCrit(0LL, 1LL);
  v2 = 0;
  if ( a1 )
  {
    v4 = (struct tagWND *)ValidateHwnd(a1);
    if ( !v4 )
      goto LABEL_8;
  }
  else
  {
    v4 = 0LL;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v8 = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = &v8;
  *((_QWORD *)&v8 + 1) = v4;
  if ( v4 )
    HMLockObject(v4);
  v2 = xxxDrawAnimatedRects(v4);
  ThreadUnlock1(v6);
LABEL_8:
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
