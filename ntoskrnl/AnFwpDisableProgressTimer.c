/*
 * XREFs of AnFwpDisableProgressTimer @ 0x140AEC610
 * Callers:
 *     AnFwDisplayFade @ 0x140AE99E8 (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x140AEA598 (AnFwDisplayProgressIndicator.c)
 *     AnFwpBackgroundUpdateTimer @ 0x140AEF1E0 (AnFwpBackgroundUpdateTimer.c)
 * Callees:
 *     KeCancelTimer @ 0x140250B60 (KeCancelTimer.c)
 *     BgpFwFreeMemory @ 0x140382650 (BgpFwFreeMemory.c)
 *     RaspClearCache @ 0x140AEA540 (RaspClearCache.c)
 *     BgpGxRectangleDestroy @ 0x140AEAA70 (BgpGxRectangleDestroy.c)
 */

void AnFwpDisableProgressTimer()
{
  bool v0; // cl
  _UNKNOWN **v1; // rbx
  __int64 v2; // rax

  if ( byte_140CF7768 )
  {
    v0 = 0;
    if ( (dword_140C0E3B0 & 0x100000) != 0 )
      v0 = (dword_140C0E3B0 & 0x1000) != 0;
    byte_140CF7768 = 0;
    if ( (dword_140C0E3B0 & 0xC00) != 0xC00 && !v0 )
      KeCancelTimer(&stru_140D16680);
    v1 = (_UNKNOWN **)TxtpTextCache;
    v2 = *(_QWORD *)TxtpTextCache;
    if ( *((_UNKNOWN ***)TxtpTextCache + 1) != &TxtpTextCache )
LABEL_8:
      __fastfail(3u);
    while ( 1 )
    {
      if ( *(_UNKNOWN ***)(v2 + 8) != v1 )
        goto LABEL_8;
      TxtpTextCache = (_UNKNOWN *)v2;
      *(_QWORD *)(v2 + 8) = &TxtpTextCache;
      if ( v1 == &TxtpTextCache )
        break;
      BgpGxRectangleDestroy((__int64)v1[6]);
      BgpFwFreeMemory((__int64)v1);
      v1 = (_UNKNOWN **)TxtpTextCache;
      if ( *((_UNKNOWN ***)TxtpTextCache + 1) != &TxtpTextCache )
        goto LABEL_8;
      v2 = *(_QWORD *)TxtpTextCache;
    }
    dword_140C04370 = 0;
    if ( RasterizerInitialized )
      RaspClearCache();
  }
}
