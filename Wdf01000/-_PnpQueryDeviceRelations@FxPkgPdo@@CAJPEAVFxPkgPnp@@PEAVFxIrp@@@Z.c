/*
 * XREFs of ?_PnpQueryDeviceRelations@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0009190
 * Callers:
 *     <none>
 * Callees:
 *     ?PnpQueryDeviceRelations@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C00091A8 (-PnpQueryDeviceRelations@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 */

int __fastcall FxPkgPdo::_PnpQueryDeviceRelations(FxPkgPdo *This, FxIrp *Irp)
{
  return FxPkgPdo::PnpQueryDeviceRelations(This, Irp);
}
