/*
 * XREFs of xxxEmptyClipboard @ 0x1C0123900
 * Callers:
 *     NtUserEmptyClipboard @ 0x1C01236A0 (NtUserEmptyClipboard.c)
 *     FreeWindowStation @ 0x1C01236E0 (FreeWindowStation.c)
 *     xxxSnapWindow @ 0x1C016040C (xxxSnapWindow.c)
 * Callees:
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C0030448 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C00BFA20 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00C1530 (PopAndFreeW32ThreadLock.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C0123A94 (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1C015C768 (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 */

__int64 __fastcall xxxEmptyClipboard(struct tagCLIP **Object)
{
  __int64 ThreadWin32Thread; // rsi
  int v3; // r14d
  struct tagCLIP *v4; // rdi
  struct tagWINDOWSTATION *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // ebp
  __int64 v10; // rcx
  _QWORD v11[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v12; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+40h] [rbp-18h]

  v12 = 0LL;
  v13 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( Object )
    goto LABEL_2;
  v6 = CheckClipboardAccess();
  Object = (struct tagCLIP **)v6;
  if ( !v6 )
    return 0LL;
  if ( *((_QWORD *)v6 + 10) != ThreadWin32Thread )
  {
    UserSetLastError(1418LL, v7, v8);
    return 0LL;
  }
LABEL_2:
  if ( ((_DWORD)Object[8] & 0x10) != 0 )
  {
    v3 = 1;
  }
  else
  {
    v3 = 0;
    if ( ThreadWin32Thread )
    {
      PushW32ThreadLock((__int64)Object, &v12, UserDereferenceObject);
      ObfReferenceObject(Object);
      xxxSendClipboardMessage((struct tagWINDOWSTATION *)Object, 0x307u);
    }
  }
  v4 = Object[16];
  if ( v4 )
  {
    v9 = *((_DWORD *)Object + 34);
    if ( v9 )
    {
      do
      {
        v10 = *(unsigned __int16 *)v4;
        --v9;
        if ( (unsigned __int16)v10 >= 0xC000u )
          UserDeleteAtom(v10);
        UT_FreeCBFormat(v4);
        v4 = (struct tagCLIP *)((char *)v4 + 32);
      }
      while ( v9 );
      v4 = Object[16];
    }
    Win32FreePool(v4);
    Object[16] = 0LL;
    *((_DWORD *)Object + 34) = 0;
  }
  *((_DWORD *)Object + 16) |= 0x40u;
  v11[0] = Object + 14;
  v11[1] = Object[12];
  HMAssignmentLock(v11);
  ++*((_DWORD *)Object + 35);
  ++*((_DWORD *)Object + 36);
  *((_DWORD *)Object + 16) &= ~0x80u;
  if ( !v3 )
  {
    if ( ThreadWin32Thread )
      PopAndFreeW32ThreadLock((__int64)&v12);
  }
  return 1LL;
}
