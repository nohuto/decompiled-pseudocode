/*
 * XREFs of xxxEmptyClipboard @ 0x1C00C9B80
 * Callers:
 *     FreeWindowStation @ 0x1C011E7C0 (FreeWindowStation.c)
 *     NtUserEmptyClipboard @ 0x1C0151510 (NtUserEmptyClipboard.c)
 *     xxxSnapWindow @ 0x1C023F848 (xxxSnapWindow.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C005BDE0 (PopAndFreeW32ThreadLock.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C00CD268 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C0145B10 (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1C014AA2C (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 */

__int64 __fastcall xxxEmptyClipboard(struct tagWINDOWSTATION *Object)
{
  __int64 ThreadWin32Thread; // rsi
  struct tagWINDOWSTATION *v3; // rax
  __int64 v4; // rdx
  int v5; // r14d
  struct tagCLIP *v6; // rdi
  int v8; // ebp
  __int64 v9; // rcx
  struct tagCLIP *v10; // rcx
  _QWORD v11[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v12; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+40h] [rbp-18h]

  v12 = 0LL;
  v13 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( Object )
    goto LABEL_4;
  v3 = CheckClipboardAccess();
  Object = v3;
  if ( !v3 )
    return 0LL;
  if ( *((_QWORD *)v3 + 10) != ThreadWin32Thread )
  {
    UserSetLastError(1418LL, v4);
    return 0LL;
  }
LABEL_4:
  if ( (*((_DWORD *)Object + 16) & 0x10) != 0 )
  {
    v5 = 1;
  }
  else
  {
    v5 = 0;
    if ( ThreadWin32Thread )
    {
      PushW32ThreadLock((__int64)Object, &v12, UserDereferenceObject);
      ObfReferenceObject(Object);
      xxxSendClipboardMessage(Object, 0x307u);
    }
  }
  v6 = (struct tagCLIP *)*((_QWORD *)Object + 16);
  if ( v6 )
  {
    v8 = *((_DWORD *)Object + 34);
    if ( v8 )
    {
      do
      {
        v9 = *(unsigned __int16 *)v6;
        --v8;
        if ( (unsigned __int16)v9 >= 0xC000u )
          UserDeleteAtom(v9);
        v10 = v6;
        v6 = (struct tagCLIP *)((char *)v6 + 32);
        UT_FreeCBFormat(v10);
      }
      while ( v8 );
      v6 = (struct tagCLIP *)*((_QWORD *)Object + 16);
    }
    Win32FreePool(v6);
    *((_QWORD *)Object + 16) = 0LL;
    *((_DWORD *)Object + 34) = 0;
  }
  *((_DWORD *)Object + 16) |= 0x40u;
  v11[0] = (char *)Object + 112;
  v11[1] = *((_QWORD *)Object + 12);
  HMAssignmentLock(v11, 0LL);
  ++*((_DWORD *)Object + 35);
  ++*((_DWORD *)Object + 36);
  *((_DWORD *)Object + 16) &= ~0x80u;
  if ( !v5 )
  {
    if ( ThreadWin32Thread )
      PopAndFreeW32ThreadLock((__int64)&v12);
  }
  return 1LL;
}
