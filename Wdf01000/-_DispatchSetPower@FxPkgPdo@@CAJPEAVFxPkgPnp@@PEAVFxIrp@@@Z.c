/*
 * XREFs of ?_DispatchSetPower@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C00809B0
 * Callers:
 *     <none>
 * Callees:
 *     ?DispatchDeviceSetPower@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C00803B4 (-DispatchDeviceSetPower@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchSystemSetPower@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C00804B8 (-DispatchSystemSetPower@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 */

__int64 __fastcall FxPkgPdo::_DispatchSetPower(FxPkgPdo *This, FxIrp *Irp)
{
  if ( Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options )
    return FxPkgPdo::DispatchDeviceSetPower(This, Irp);
  else
    return FxPkgPdo::DispatchSystemSetPower(This, Irp);
}
