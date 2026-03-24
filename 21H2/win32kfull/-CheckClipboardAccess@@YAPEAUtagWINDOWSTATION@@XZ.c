/*
 * XREFs of ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C00304E8
 * Callers:
 *     NtUserRemoveClipboardFormatListener @ 0x1C000E660 (NtUserRemoveClipboardFormatListener.c)
 *     NtUserGetClipboardData @ 0x1C002CB70 (NtUserGetClipboardData.c)
 *     NtUserGetClipboardOwner @ 0x1C002DC80 (NtUserGetClipboardOwner.c)
 *     _SetClipboardData @ 0x1C002F514 (_SetClipboardData.c)
 *     xxxCloseClipboard @ 0x1C002FE50 (xxxCloseClipboard.c)
 *     _OpenClipboard @ 0x1C002FF98 (_OpenClipboard.c)
 *     NtUserGetClipboardSequenceNumber @ 0x1C00300A0 (NtUserGetClipboardSequenceNumber.c)
 *     NtUserCountClipboardFormats @ 0x1C00300F0 (NtUserCountClipboardFormats.c)
 *     NtUserGetOpenClipboardWindow @ 0x1C0030670 (NtUserGetOpenClipboardWindow.c)
 *     ?xxxDisownClipboard@@YAXPEAUtagWND@@@Z @ 0x1C01238C8 (-xxxDisownClipboard@@YAXPEAUtagWND@@@Z.c)
 *     xxxEmptyClipboard @ 0x1C0123C80 (xxxEmptyClipboard.c)
 *     xxxSetClipboardViewer @ 0x1C012CA20 (xxxSetClipboardViewer.c)
 *     NtUserAddClipboardFormatListener @ 0x1C0133480 (NtUserAddClipboardFormatListener.c)
 *     xxxChangeClipboardChain @ 0x1C015F420 (xxxChangeClipboardChain.c)
 *     _EnumClipboardFormats @ 0x1C015FC90 (_EnumClipboardFormats.c)
 *     NtUserGetClipboardViewer @ 0x1C01F92E0 (NtUserGetClipboardViewer.c)
 *     NtUserGetUpdatedClipboardFormats @ 0x1C01FC350 (NtUserGetUpdatedClipboardFormats.c)
 *     _GetPriorityClipboardFormat @ 0x1C021F828 (_GetPriorityClipboardFormat.c)
 * Callees:
 *     ReferenceWindowStation @ 0x1C0030550 (ReferenceWindowStation.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
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
