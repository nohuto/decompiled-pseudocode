/*
 * XREFs of AnFwProgressIndicatorTransition @ 0x140AEF174
 * Callers:
 *     BgpFwLibraryInitialize @ 0x140AEAC78 (BgpFwLibraryInitialize.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x140237DB0 (KeInitializeTimerEx.c)
 *     KeSetCoalescableTimer @ 0x140250440 (KeSetCoalescableTimer.c)
 *     KeInitializeDpc @ 0x140305660 (KeInitializeDpc.c)
 */

BOOLEAN AnFwProgressIndicatorTransition()
{
  BOOLEAN result; // al

  if ( byte_140CF7768 )
  {
    KeInitializeTimerEx(&stru_140D16680, NotificationTimer);
    KeInitializeDpc(&stru_140D16600, (PKDEFERRED_ROUTINE)AnFwpProgressIndicatorTimer, 0LL);
    return KeSetCoalescableTimer(&stru_140D16680, 0LL, 0x1Eu, 0, &stru_140D16600);
  }
  return result;
}
