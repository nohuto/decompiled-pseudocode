/*
 * XREFs of ?_PnpSurpriseRemoval@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0069D90
 * Callers:
 *     <none>
 * Callees:
 *     ?DeviceSurpriseRemoved@FxDeviceDescriptionEntry@@QEAAXXZ @ 0x1C0024144 (-DeviceSurpriseRemoved@FxDeviceDescriptionEntry@@QEAAXXZ.c)
 *     ?PnpSurpriseRemoval@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C00741A4 (-PnpSurpriseRemoval@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 */

int __fastcall FxPkgPdo::_PnpSurpriseRemoval(FxPkgPnp *This, FxIrp *Irp)
{
  FxDeviceDescriptionEntry::DeviceSurpriseRemoved((FxDeviceDescriptionEntry *)This[1].m_Globals);
  return FxPkgPnp::PnpSurpriseRemoval(This, Irp);
}
