__int64 __fastcall FxPkgFdo::PnpQueryDeviceRelations(FxPkgFdo *this, FxIrp *Irp, __int64 a3, unsigned __int16 a4)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  unsigned int Length; // ebx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  signed int DeviceRelations; // eax
  unsigned int v10; // ebx
  _FX_DRIVER_GLOBALS *v11; // rcx
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
    {
LABEL_7:
      v10 = FxPkgFdo::_PnpPassDown(this, Irp);
      goto LABEL_8;
    }
    DeviceRelations = FxPkgPnp::HandleQueryDeviceRelations(this, Irp, this->m_RemovalDeviceList);
  }
  else
  {
    DeviceRelations = FxPkgPnp::HandleQueryBusRelations(this, Irp);
  }
  v10 = DeviceRelations;
  if ( DeviceRelations == -1073741637 || DeviceRelations >= 0 )
    goto LABEL_7;
  FxPkgPnp::CompletePnpRequest(this, Irp, DeviceRelations);
LABEL_8:
  v11 = this->m_Globals;
  if ( v11->FxVerboseOn )
    WPP_IFR_SF_D(v11, 5u, 0xCu, 0xCu, WPP_fxpkgfdo_cpp_Traceguids, v10);
  return v10;
}
