/*
 * XREFs of AnFwProgressIndicatorTransition @ 0x1409F7148
 * Callers:
 *     BgpFwLibraryInitialize @ 0x1409F29E8 (BgpFwLibraryInitialize.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x14025F4D0 (KeSetCoalescableTimer.c)
 *     KeInitializeTimerEx @ 0x140341AF0 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1403446C0 (KeInitializeDpc.c)
 */

BOOLEAN AnFwProgressIndicatorTransition()
{
  BOOLEAN result; // al

  if ( byte_140CDB160 )
  {
    KeInitializeTimerEx(&stru_140CF3280, NotificationTimer);
    KeInitializeDpc(&stru_140CF3200, (PKDEFERRED_ROUTINE)AnFwpProgressIndicatorTimer, 0LL);
    return KeSetCoalescableTimer(&stru_140CF3280, 0LL, 0x1Eu, 0, &stru_140CF3200);
  }
  return result;
}
