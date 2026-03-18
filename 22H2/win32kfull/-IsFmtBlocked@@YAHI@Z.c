/*
 * XREFs of ?IsFmtBlocked@@YAHI@Z @ 0x1C01FC324
 * Callers:
 *     ?FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z @ 0x1C00131A8 (-FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z.c)
 *     ?CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z @ 0x1C00163E4 (-CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C004F0AC (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     NtUserGetUpdatedClipboardFormats @ 0x1C01D4190 (NtUserGetUpdatedClipboardFormats.c)
 *     _GetPriorityClipboardFormat @ 0x1C01FDB28 (_GetPriorityClipboardFormat.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsFmtBlocked(int a1)
{
  __int64 v1; // rdx

  v1 = 0LL;
  if ( !*((_DWORD *)&WPP_MAIN_CB.Dpc.0 + 1) )
    return 1LL;
  while ( a1 != *(_DWORD *)(gpClipFormatExceptionList + 4 * v1) )
  {
    v1 = (unsigned int)(v1 + 1);
    if ( (unsigned int)v1 >= *((_DWORD *)&WPP_MAIN_CB.Dpc.0 + 1) )
      return 1LL;
  }
  return 0LL;
}
