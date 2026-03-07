__int64 __fastcall FxPkgPnp::PowerPolTimerExpiredNoWakeCompletePowerDown(FxPkgPnp *This)
{
  FxPkgPnp::PowerProcessEvent(This, 0x1000u, 0);
  return 1472LL;
}
