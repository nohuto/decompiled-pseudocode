/*
 * XREFs of ?CheckClipboardAccessForIntegrityLevel@@YAHUtagUIPI_INFO@@0@Z @ 0x1C015644C
 * Callers:
 *     ?FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z @ 0x1C00131A8 (-FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z.c)
 *     ?CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z @ 0x1C00163E4 (-CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z.c)
 *     NtUserGetUpdatedClipboardFormats @ 0x1C01D4190 (NtUserGetUpdatedClipboardFormats.c)
 *     _GetPriorityClipboardFormat @ 0x1C01FDB28 (_GetPriorityClipboardFormat.c)
 * Callees:
 *     ?GetClipboardIL@@YAXUtagUIPI_INFO@@PEAU1@@Z @ 0x1C015648A (-GetClipboardIL@@YAXUtagUIPI_INFO@@PEAU1@@Z.c)
 */

__int64 __fastcall CheckClipboardAccessForIntegrityLevel(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v3 = a2;
  v4 = 0LL;
  GetClipboardIL(a1, &v4);
  return (unsigned __int8)CheckAccess(&v4, &v3);
}
