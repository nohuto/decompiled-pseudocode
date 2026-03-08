/*
 * XREFs of ?_PnpQueryPnpDeviceState@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0082DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C000927C (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     ?HandleQueryPnpDeviceStateCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z @ 0x1C0077EF8 (-HandleQueryPnpDeviceStateCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z.c)
 */

__int64 __fastcall FxPkgFdo::_PnpQueryPnpDeviceState(FxPkgFdo *This, FxIrp *Irp)
{
  signed int _a1; // eax
  unsigned int v5; // ebx

  _a1 = ((__int64 (__fastcall *)(FxPkgFdo *))This->SendIrpSynchronously)(This);
  v5 = _a1;
  if ( _a1 == -1073741637 )
  {
    v5 = 0;
    Irp->m_Irp->IoStatus.Status = 0;
  }
  else if ( _a1 < 0 )
  {
    WPP_IFR_SF_D(This->m_Globals, 2u, 0xCu, 0xCu, WPP_FxPkgFdoKm_cpp_Traceguids, _a1);
    return FxPkgPnp::CompletePnpRequest(This, Irp, v5);
  }
  FxPkgFdo::HandleQueryPnpDeviceStateCompletion(This, Irp);
  return FxPkgPnp::CompletePnpRequest(This, Irp, v5);
}
