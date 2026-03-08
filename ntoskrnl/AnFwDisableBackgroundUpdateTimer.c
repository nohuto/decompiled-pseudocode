/*
 * XREFs of AnFwDisableBackgroundUpdateTimer @ 0x140AEC6DC
 * Callers:
 *     AnFwDisplayBackgroundUpdate @ 0x140AE90B8 (AnFwDisplayBackgroundUpdate.c)
 *     BgpFwLibraryDisable @ 0x140AE91EC (BgpFwLibraryDisable.c)
 *     AnFwDisplayFade @ 0x140AE99E8 (AnFwDisplayFade.c)
 *     ResFwFreeContext @ 0x140AEEED4 (ResFwFreeContext.c)
 *     AnFwpBackgroundUpdateTimer @ 0x140AEF1E0 (AnFwpBackgroundUpdateTimer.c)
 * Callees:
 *     KeCancelTimer @ 0x140250B60 (KeCancelTimer.c)
 */

BOOLEAN AnFwDisableBackgroundUpdateTimer()
{
  BOOLEAN result; // al

  if ( byte_140D17DA8 )
  {
    result = KeCancelTimer(&stru_140D1AE60);
    byte_140D17DA8 = 0;
  }
  return result;
}
