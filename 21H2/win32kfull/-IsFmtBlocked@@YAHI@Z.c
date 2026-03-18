/*
 * XREFs of ?IsFmtBlocked@@YAHI@Z @ 0x1C0219760
 * Callers:
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C00546A8 (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     ?CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z @ 0x1C00CA3D4 (-CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z.c)
 *     ?FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z @ 0x1C00CD1F0 (-FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z.c)
 *     NtUserGetUpdatedClipboardFormats @ 0x1C01F6C70 (NtUserGetUpdatedClipboardFormats.c)
 *     _GetPriorityClipboardFormat @ 0x1C021A730 (_GetPriorityClipboardFormat.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsFmtBlocked(int a1)
{
  __int64 v1; // rdx

  v1 = 0LL;
  if ( !HIDWORD(WPP_MAIN_CB.DeviceQueue.Lock) )
    return 1LL;
  while ( a1 != *(_DWORD *)(gpClipFormatExceptionList + 4 * v1) )
  {
    v1 = (unsigned int)(v1 + 1);
    if ( (unsigned int)v1 >= HIDWORD(WPP_MAIN_CB.DeviceQueue.Lock) )
      return 1LL;
  }
  return 0LL;
}
