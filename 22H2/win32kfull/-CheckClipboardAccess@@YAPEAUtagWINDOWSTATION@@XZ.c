/*
 * XREFs of ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C0030448
 * Callers:
 *     NtUserRemoveClipboardFormatListener @ 0x1C000E660 (NtUserRemoveClipboardFormatListener.c)
 *     NtUserGetClipboardData @ 0x1C002CAD0 (NtUserGetClipboardData.c)
 *     NtUserGetClipboardOwner @ 0x1C002DBE0 (NtUserGetClipboardOwner.c)
 *     _SetClipboardData @ 0x1C002F474 (_SetClipboardData.c)
 *     xxxCloseClipboard @ 0x1C002FDB0 (xxxCloseClipboard.c)
 *     _OpenClipboard @ 0x1C002FEF8 (_OpenClipboard.c)
 *     NtUserGetClipboardSequenceNumber @ 0x1C0030000 (NtUserGetClipboardSequenceNumber.c)
 *     NtUserCountClipboardFormats @ 0x1C0030050 (NtUserCountClipboardFormats.c)
 *     NtUserGetOpenClipboardWindow @ 0x1C00305D0 (NtUserGetOpenClipboardWindow.c)
 *     ?xxxDisownClipboard@@YAXPEAUtagWND@@@Z @ 0x1C0123548 (-xxxDisownClipboard@@YAXPEAUtagWND@@@Z.c)
 *     xxxEmptyClipboard @ 0x1C0123900 (xxxEmptyClipboard.c)
 *     xxxSetClipboardViewer @ 0x1C012C670 (xxxSetClipboardViewer.c)
 *     NtUserAddClipboardFormatListener @ 0x1C01330D0 (NtUserAddClipboardFormatListener.c)
 *     xxxChangeClipboardChain @ 0x1C015EC70 (xxxChangeClipboardChain.c)
 *     _EnumClipboardFormats @ 0x1C015F4E0 (_EnumClipboardFormats.c)
 *     NtUserGetClipboardViewer @ 0x1C01F8D20 (NtUserGetClipboardViewer.c)
 *     NtUserGetUpdatedClipboardFormats @ 0x1C01FBD90 (NtUserGetUpdatedClipboardFormats.c)
 *     _GetPriorityClipboardFormat @ 0x1C021F268 (_GetPriorityClipboardFormat.c)
 * Callees:
 *     ReferenceWindowStation @ 0x1C00304B0 (ReferenceWindowStation.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 */

struct tagWINDOWSTATION *CheckClipboardAccess(void)
{
  __int64 ThreadWin32Thread; // rax
  NTSTATUS v1; // eax
  ULONG v3; // eax
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v1 = ReferenceWindowStation(KeGetCurrentThread(), 0LL, 4LL, &v4, (*(_DWORD *)(ThreadWin32Thread + 488) >> 3) & 1);
  if ( v1 >= 0 )
    return (struct tagWINDOWSTATION *)v4;
  v3 = RtlNtStatusToDosError(v1);
  UserSetLastError(v3);
  return 0LL;
}
