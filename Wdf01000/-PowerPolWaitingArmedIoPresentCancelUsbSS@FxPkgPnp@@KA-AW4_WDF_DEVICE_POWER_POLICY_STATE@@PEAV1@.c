__int64 __fastcall FxPkgPnp::PowerPolWaitingArmedIoPresentCancelUsbSS(FxPkgPnp *This)
{
  return FxPkgPnp::PowerPolicyCancelUsbSSIfCapable(This) != 0 ? 1472 : 1344;
}
