/*
 * XREFs of ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C00CD268
 * Callers:
 *     xxxEmptyClipboard @ 0x1C00C9B80 (xxxEmptyClipboard.c)
 *     NtUserAddClipboardFormatListener @ 0x1C00C9D10 (NtUserAddClipboardFormatListener.c)
 *     NtUserCountClipboardFormats @ 0x1C00CA370 (NtUserCountClipboardFormats.c)
 *     NtUserGetOpenClipboardWindow @ 0x1C00CA5F0 (NtUserGetOpenClipboardWindow.c)
 *     _OpenClipboard @ 0x1C00CCE18 (_OpenClipboard.c)
 *     xxxCloseClipboard @ 0x1C00CCFD0 (xxxCloseClipboard.c)
 *     NtUserGetClipboardSequenceNumber @ 0x1C00CD120 (NtUserGetClipboardSequenceNumber.c)
 *     NtUserIsClipboardFormatAvailable @ 0x1C00CD160 (NtUserIsClipboardFormatAvailable.c)
 *     NtUserRemoveClipboardFormatListener @ 0x1C00CE410 (NtUserRemoveClipboardFormatListener.c)
 *     ?xxxDisownClipboard@@YAXPEAUtagWND@@@Z @ 0x1C01459BC (-xxxDisownClipboard@@YAXPEAUtagWND@@@Z.c)
 *     _SetClipboardData @ 0x1C014613C (_SetClipboardData.c)
 *     xxxSetClipboardViewer @ 0x1C014655C (xxxSetClipboardViewer.c)
 *     NtUserGetClipboardData @ 0x1C014AAF0 (NtUserGetClipboardData.c)
 *     xxxChangeClipboardChain @ 0x1C014F8A0 (xxxChangeClipboardChain.c)
 *     NtUserGetClipboardOwner @ 0x1C014FCF0 (NtUserGetClipboardOwner.c)
 *     NtUserGetClipboardViewer @ 0x1C016CA90 (NtUserGetClipboardViewer.c)
 *     NtUserGetUpdatedClipboardFormats @ 0x1C01F6C70 (NtUserGetUpdatedClipboardFormats.c)
 *     _EnumClipboardFormats @ 0x1C021A690 (_EnumClipboardFormats.c)
 *     _GetPriorityClipboardFormat @ 0x1C021A730 (_GetPriorityClipboardFormat.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ReferenceWindowStation @ 0x1C00CD2D0 (ReferenceWindowStation.c)
 */

struct tagWINDOWSTATION *CheckClipboardAccess(void)
{
  __int64 ThreadWin32Thread; // rax
  NTSTATUS v1; // eax
  ULONG v3; // eax
  __int64 v4; // rdx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v1 = ReferenceWindowStation(KeGetCurrentThread(), 0LL, 4LL, &v5, (*(_DWORD *)(ThreadWin32Thread + 488) >> 3) & 1);
  if ( v1 >= 0 )
    return (struct tagWINDOWSTATION *)v5;
  v3 = RtlNtStatusToDosError(v1);
  UserSetLastError(v3, v4);
  return 0LL;
}
