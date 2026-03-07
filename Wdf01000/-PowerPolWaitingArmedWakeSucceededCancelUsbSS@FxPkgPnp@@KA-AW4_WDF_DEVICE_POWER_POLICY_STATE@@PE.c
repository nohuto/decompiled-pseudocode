__int64 __fastcall FxPkgPnp::PowerPolWaitingArmedWakeSucceededCancelUsbSS(FxPkgPnp *This)
{
  return FxPkgPnp::PowerPolicyCancelUsbSSIfCapable(This) != 0 ? 1472 : 1361;
}
