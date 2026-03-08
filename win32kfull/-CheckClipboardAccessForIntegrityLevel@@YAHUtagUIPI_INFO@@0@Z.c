/*
 * XREFs of ?CheckClipboardAccessForIntegrityLevel@@YAHUtagUIPI_INFO@@0@Z @ 0x1C014972C
 * Callers:
 *     ?FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z @ 0x1C0012468 (-FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z.c)
 *     ?CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z @ 0x1C0015634 (-CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z.c)
 *     NtUserGetUpdatedClipboardFormats @ 0x1C01D51C0 (NtUserGetUpdatedClipboardFormats.c)
 *     _GetPriorityClipboardFormat @ 0x1C02006A8 (_GetPriorityClipboardFormat.c)
 * Callees:
 *     ?GetClipboardIL@@YAXUtagUIPI_INFO@@PEAU1@@Z @ 0x1C014976A (-GetClipboardIL@@YAXUtagUIPI_INFO@@PEAU1@@Z.c)
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
