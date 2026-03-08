/*
 * XREFs of ?_DispatchPowerSequence@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0080930
 * Callers:
 *     <none>
 * Callees:
 *     ?CompletePowerRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C0071FB0 (-CompletePowerRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 */

__int64 __fastcall FxPkgPdo::_DispatchPowerSequence(FxPkgPnp *This, FxIrp *Irp)
{
  return FxPkgPnp::CompletePowerRequest(This, Irp, 0xC00000BB);
}
