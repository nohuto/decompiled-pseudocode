__int64 __fastcall FxPkgPnp::_PnpStartDevice(FxPkgPnp *This, FxIrp *Irp)
{
  unsigned __int8 v3; // r8

  FxPkgPnp::SetPendingPnpIrp(This, Irp, 1u);
  FxPkgPnp::PnpProcessEvent(This, PnpEventStartDevice, v3);
  return 259LL;
}
