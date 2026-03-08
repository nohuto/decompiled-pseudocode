/*
 * XREFs of DrvUnattachMirrorDriversInSession @ 0x1C00D8898
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x1C001FAC0 (DrvUpdateGraphicsDeviceList.c)
 * Callees:
 *     <none>
 */

__int64 DrvUnattachMirrorDriversInSession()
{
  __int64 i; // rdx

  WdLogSingleEntry0(4LL);
  if ( (unsigned __int16)(gProtocolType - 1) > 0xFFFDu )
    return 0LL;
  for ( i = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(65533LL) + 24) + 1264LL); i; i = *(_QWORD *)(i + 128) )
  {
    if ( (*(_DWORD *)(i + 160) & 8) != 0 )
      *(_DWORD *)(i + 252) = 0;
  }
  return 1LL;
}
