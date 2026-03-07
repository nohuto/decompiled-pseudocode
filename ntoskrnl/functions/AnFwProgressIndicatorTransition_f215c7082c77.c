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
