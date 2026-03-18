/*
 * XREFs of xxxEmptyClipboard @ 0x1C00B935C
 * Callers:
 *     FreeWindowStation @ 0x1C00B91B0 (FreeWindowStation.c)
 *     NtUserEmptyClipboard @ 0x1C01CF2C0 (NtUserEmptyClipboard.c)
 *     xxxSnapWindow @ 0x1C02281E8 (xxxSnapWindow.c)
 * Callees:
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C0018758 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0062180 (PopAndFreeW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00621E0 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1C01FC714 (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C01FD6B0 (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 */

__int64 __fastcall xxxEmptyClipboard(void **Object)
{
  __int64 v2; // rdx
  __int64 ThreadWin32Thread; // rsi
  int v4; // r14d
  struct tagCLIP *v5; // rdi
  struct tagWINDOWSTATION *v7; // rax
  int v8; // ebp
  __int64 v9; // rcx
  struct tagCLIP *v10; // rcx
  _QWORD v11[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v12; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+40h] [rbp-18h]

  v12 = 0LL;
  v13 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( Object )
    goto LABEL_2;
  v7 = CheckClipboardAccess();
  Object = (void **)v7;
  if ( !v7 )
    return 0LL;
  if ( *((_QWORD *)v7 + 10) != ThreadWin32Thread )
  {
    UserSetLastError(1418LL);
    return 0LL;
  }
LABEL_2:
  if ( ((_DWORD)Object[8] & 0x10) != 0 )
  {
    v4 = 1;
  }
  else
  {
    v4 = 0;
    if ( ThreadWin32Thread )
    {
      PushW32ThreadLock((__int64)Object, &v12, UserDereferenceObject);
      ObfReferenceObject(Object);
      xxxSendClipboardMessage((struct tagWINDOWSTATION *)Object, 0x307u);
    }
  }
  v5 = (struct tagCLIP *)Object[16];
  if ( v5 )
  {
    v8 = *((_DWORD *)Object + 34);
    while ( v8 )
    {
      v9 = *(unsigned __int16 *)v5;
      --v8;
      if ( (unsigned __int16)v9 >= 0xC000u )
        UserDeleteAtom(v9, v2);
      v10 = v5;
      v5 = (struct tagCLIP *)((char *)v5 + 32);
      UT_FreeCBFormat(v10);
    }
    Win32FreePool(Object[16]);
    Object[16] = 0LL;
    *((_DWORD *)Object + 34) = 0;
  }
  *((_DWORD *)Object + 16) |= 0x40u;
  v11[0] = Object + 14;
  v11[1] = Object[12];
  HMAssignmentLock(v11, 0LL);
  ++*((_DWORD *)Object + 35);
  ++*((_DWORD *)Object + 36);
  *((_DWORD *)Object + 16) &= ~0x80u;
  if ( !v4 )
  {
    if ( ThreadWin32Thread )
      PopAndFreeW32ThreadLock((__int64)&v12);
  }
  return 1LL;
}
