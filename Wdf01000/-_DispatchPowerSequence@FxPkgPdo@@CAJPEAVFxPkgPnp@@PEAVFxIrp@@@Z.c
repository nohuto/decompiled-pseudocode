__int64 __fastcall FxPkgPdo::_DispatchPowerSequence(FxPkgPnp *This, FxIrp *Irp)
{
  return FxPkgPnp::CompletePowerRequest(This, Irp, 0xC00000BB);
}
