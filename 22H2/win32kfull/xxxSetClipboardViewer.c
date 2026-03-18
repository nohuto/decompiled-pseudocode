/*
 * XREFs of xxxSetClipboardViewer @ 0x1C01FDFC4
 * Callers:
 *     NtUserSetClipboardViewer @ 0x1C01DB2B0 (NtUserSetClipboardViewer.c)
 * Callees:
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C0018758 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0062180 (PopAndFreeW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00621E0 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     HMValidateHandleNoSecure @ 0x1C00F212C (HMValidateHandleNoSecure.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C01FCDAC (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 */

__int64 __fastcall xxxSetClipboardViewer(__int64 a1)
{
  struct tagWINDOWSTATION *v2; // rax
  struct tagWINDOWSTATION *v3; // rdi
  _QWORD *v5; // rsi
  _QWORD v6[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h]

  v8 = 0LL;
  v7 = 0LL;
  if ( a1 && *(char *)(*(_QWORD *)(a1 + 40) + 19LL) < 0 )
    goto LABEL_6;
  v2 = CheckClipboardAccess();
  v3 = v2;
  if ( !v2 )
    return 0LL;
  if ( a1 && *(struct tagWINDOWSTATION **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) + 656LL) != v2 )
  {
LABEL_6:
    UserSetLastError(87);
    return 0LL;
  }
  PushW32ThreadLock((__int64)v2, &v7, UserDereferenceObject);
  ObfReferenceObject(v3);
  v5 = (_QWORD *)*((_QWORD *)v3 + 13);
  if ( v5 )
    v5 = (_QWORD *)*v5;
  v6[0] = (char *)v3 + 104;
  v6[1] = a1;
  HMAssignmentLock(v6, 0LL);
  xxxDrawClipboard(v3);
  PopAndFreeW32ThreadLock((__int64)&v7);
  if ( !v5 )
    return 0LL;
  return HMValidateHandleNoSecure((int)v5, 1);
}
