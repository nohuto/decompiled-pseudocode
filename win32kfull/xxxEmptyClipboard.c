/*
 * XREFs of xxxEmptyClipboard @ 0x1C00F130C
 * Callers:
 *     FreeWindowStation @ 0x1C00F1160 (FreeWindowStation.c)
 *     NtUserEmptyClipboard @ 0x1C01D0310 (NtUserEmptyClipboard.c)
 *     xxxSnapWindow @ 0x1C022AF08 (xxxSnapWindow.c)
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C00A1C30 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00A1CA0 (PopAndFreeW32ThreadLock.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C00BD7B8 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1C01FF294 (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C0200230 (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 */

__int64 __fastcall xxxEmptyClipboard(void **Object)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 ThreadWin32Thread; // rsi
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // r14d
  struct tagCLIP *v8; // rdi
  struct tagWINDOWSTATION *v10; // rax
  int v11; // ebp
  __int64 v12; // rcx
  struct tagCLIP *v13; // rcx
  _QWORD v14[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v15; // [rsp+30h] [rbp-28h] BYREF
  __int64 v16; // [rsp+40h] [rbp-18h]

  v15 = 0LL;
  v16 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( Object )
    goto LABEL_2;
  v10 = CheckClipboardAccess(v3);
  Object = (void **)v10;
  if ( !v10 )
    return 0LL;
  if ( *((_QWORD *)v10 + 10) != ThreadWin32Thread )
  {
    UserSetLastError(1418);
    return 0LL;
  }
LABEL_2:
  if ( ((_DWORD)Object[8] & 0x10) != 0 )
  {
    v7 = 1;
  }
  else
  {
    v7 = 0;
    if ( ThreadWin32Thread )
    {
      PushW32ThreadLock((__int64)Object, &v15, UserDereferenceObject);
      ObfReferenceObject(Object);
      xxxSendClipboardMessage((struct tagWINDOWSTATION *)Object, 0x307u);
    }
  }
  v8 = (struct tagCLIP *)Object[16];
  if ( v8 )
  {
    v11 = *((_DWORD *)Object + 34);
    while ( v11 )
    {
      v12 = *(unsigned __int16 *)v8;
      --v11;
      if ( (unsigned __int16)v12 >= 0xC000u )
        UserDeleteAtom(v12, v2, v5, v6);
      v13 = v8;
      v8 = (struct tagCLIP *)((char *)v8 + 32);
      UT_FreeCBFormat(v13);
    }
    Win32FreePool(Object[16]);
    Object[16] = 0LL;
    *((_DWORD *)Object + 34) = 0;
  }
  *((_DWORD *)Object + 16) |= 0x40u;
  v14[0] = Object + 14;
  v14[1] = Object[12];
  HMAssignmentLock(v14, 0LL);
  ++*((_DWORD *)Object + 35);
  ++*((_DWORD *)Object + 36);
  *((_DWORD *)Object + 16) &= ~0x80u;
  if ( !v7 )
  {
    if ( ThreadWin32Thread )
      PopAndFreeW32ThreadLock((__int64)&v15);
  }
  return 1LL;
}
