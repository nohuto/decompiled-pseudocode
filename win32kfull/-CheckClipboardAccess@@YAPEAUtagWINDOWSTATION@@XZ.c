/*
 * XREFs of ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C00BD7B8
 * Callers:
 *     xxxCloseClipboard @ 0x1C0010580 (xxxCloseClipboard.c)
 *     _OpenClipboard @ 0x1C001062C (_OpenClipboard.c)
 *     NtUserIsClipboardFormatAvailable @ 0x1C00123E0 (NtUserIsClipboardFormatAvailable.c)
 *     NtUserCountClipboardFormats @ 0x1C00155C0 (NtUserCountClipboardFormats.c)
 *     NtUserGetOpenClipboardWindow @ 0x1C00169F0 (NtUserGetOpenClipboardWindow.c)
 *     NtUserGetClipboardSequenceNumber @ 0x1C0016D00 (NtUserGetClipboardSequenceNumber.c)
 *     NtUserRemoveClipboardFormatListener @ 0x1C00BD5E0 (NtUserRemoveClipboardFormatListener.c)
 *     NtUserAddClipboardFormatListener @ 0x1C00BD690 (NtUserAddClipboardFormatListener.c)
 *     xxxEmptyClipboard @ 0x1C00F130C (xxxEmptyClipboard.c)
 *     NtUserGetClipboardOwner @ 0x1C00F5E00 (NtUserGetClipboardOwner.c)
 *     NtUserGetClipboardViewer @ 0x1C01475E0 (NtUserGetClipboardViewer.c)
 *     NtUserGetClipboardData @ 0x1C01D13A0 (NtUserGetClipboardData.c)
 *     NtUserGetUpdatedClipboardFormats @ 0x1C01D51C0 (NtUserGetUpdatedClipboardFormats.c)
 *     ?xxxDisownClipboard@@YAXPEAUtagWND@@@Z @ 0x1C01FF7D8 (-xxxDisownClipboard@@YAXPEAUtagWND@@@Z.c)
 *     InternalGetClipboardMetadata @ 0x1C02004BC (InternalGetClipboardMetadata.c)
 *     _EnumClipboardFormats @ 0x1C0200608 (_EnumClipboardFormats.c)
 *     _GetPriorityClipboardFormat @ 0x1C02006A8 (_GetPriorityClipboardFormat.c)
 *     _SetClipboardData @ 0x1C02007CC (_SetClipboardData.c)
 *     xxxChangeClipboardChain @ 0x1C0200878 (xxxChangeClipboardChain.c)
 *     xxxSetClipboardViewer @ 0x1C0200B44 (xxxSetClipboardViewer.c)
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ReferenceWindowStation @ 0x1C00BD810 (ReferenceWindowStation.c)
 */

struct tagWINDOWSTATION *__fastcall CheckClipboardAccess(__int64 a1)
{
  struct tagTHREADINFO *v1; // rax
  NTSTATUS v2; // eax
  ULONG v4; // eax
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0LL;
  v1 = PtiCurrentShared(a1);
  v2 = ReferenceWindowStation(KeGetCurrentThread(), 0LL, 4LL, &v5, (*((_DWORD *)v1 + 122) >> 3) & 1);
  if ( v2 >= 0 )
    return (struct tagWINDOWSTATION *)v5;
  v4 = RtlNtStatusToDosError(v2);
  UserSetLastError(v4);
  return 0LL;
}
