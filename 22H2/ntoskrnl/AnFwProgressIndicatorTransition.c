/*
 * XREFs of AnFwProgressIndicatorTransition @ 0x140AF3174
 * Callers:
 *     BgpFwLibraryInitialize @ 0x140AEEC38 (BgpFwLibraryInitialize.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x140252440 (KeSetCoalescableTimer.c)
 *     KeInitializeTimerEx @ 0x1402BE630 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1402BF970 (KeInitializeDpc.c)
 */

BOOLEAN AnFwProgressIndicatorTransition()
{
  BOOLEAN result; // al

  if ( byte_140CF7BA8 )
  {
    KeInitializeTimerEx(&stru_140D16A40, NotificationTimer);
    KeInitializeDpc(&stru_140D169C0, (PKDEFERRED_ROUTINE)AnFwpProgressIndicatorTimer, 0LL);
    return KeSetCoalescableTimer(&stru_140D16A40, 0LL, 0x1Eu, 0, &stru_140D169C0);
  }
  return result;
}
