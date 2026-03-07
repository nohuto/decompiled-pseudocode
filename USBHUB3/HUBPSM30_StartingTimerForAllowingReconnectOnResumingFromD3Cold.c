__int64 __fastcall HUBPSM30_StartingTimerForAllowingReconnectOnResumingFromD3Cold(__int64 a1)
{
  HUBMISC_StartD3ColdReconnectTimer(*(_QWORD *)(a1 + 960));
  return 3013LL;
}
