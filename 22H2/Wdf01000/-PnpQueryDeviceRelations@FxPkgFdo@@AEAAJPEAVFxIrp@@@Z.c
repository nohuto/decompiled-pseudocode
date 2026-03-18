/*
 * XREFs of ?PnpQueryDeviceRelations@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0004568
 * Callers:
 *     ?_PnpQueryDeviceRelations@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0004550 (-_PnpQueryDeviceRelations@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?_PnpPassDown@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0004610 (-_PnpPassDown@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C0004B54 (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     ?HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C000F7E0 (-HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z @ 0x1C0080654 (-HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z.c)
 *     WPP_IFR_SF_L @ 0x1C0084C38 (WPP_IFR_SF_L.c)
 */

__int64 __fastcall FxPkgFdo::PnpQueryDeviceRelations(FxPkgFdo *this, FxIrp *Irp, __int64 a3, unsigned __int16 a4)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  unsigned int Length; // ebx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  int DeviceRelations; // ebx
  _FX_DRIVER_GLOBALS *v10; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-18h]

  CurrentStackLocation = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
  Length = CurrentStackLocation->Parameters.Read.Length;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_L(
      m_Globals,
      (unsigned __int8)Irp,
      (unsigned int)CurrentStackLocation,
      a4,
      traceGuid,
      CurrentStackLocation->Parameters.Read.Length);
  if ( Length )
  {
    if ( Length != 3 )
      goto LABEL_7;
    DeviceRelations = FxPkgPnp::HandleQueryDeviceRelations(this, Irp, this->m_RemovalDeviceList);
    if ( DeviceRelations == -1073741637 )
      goto LABEL_7;
  }
  else
  {
    DeviceRelations = FxPkgPnp::HandleQueryBusRelations(this, Irp);
    if ( DeviceRelations == -1073741637 )
      DeviceRelations = 0;
  }
  if ( DeviceRelations >= 0 )
  {
LABEL_7:
    DeviceRelations = FxPkgFdo::_PnpPassDown(this, Irp);
    goto LABEL_8;
  }
  FxPkgPnp::CompletePnpRequest(this, Irp, DeviceRelations);
LABEL_8:
  v10 = this->m_Globals;
  if ( v10->FxVerboseOn )
    WPP_IFR_SF_d(v10, 5u, 0xCu, 0xCu, WPP_fxpkgfdo_cpp_Traceguids, DeviceRelations);
  return (unsigned int)DeviceRelations;
}
