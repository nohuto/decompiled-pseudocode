__int64 __fastcall FxPkgPdo::_PnpQueryPnpDeviceState(FxPkgPnp *This, FxIrp *Irp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  const void *_a3; // rax
  __int64 v6; // rdx
  unsigned int globals; // r8d

  m_Globals = This->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0x16u, (const _GUID *)&WPP_FxPkgPdo_cpp_Traceguids);
  Irp->m_Irp->IoStatus.Information = FxPkgPnp::HandleQueryPnpDeviceState(This, Irp->m_Irp->IoStatus.Information);
  _a3 = (const void *)FxObject::GetObjectHandleUnchecked(This->m_DeviceBase);
  WPP_IFR_SF_qqdq(
    m_Globals,
    v6,
    globals,
    0x17u,
    (const _GUID *)&WPP_FxPkgPdo_cpp_Traceguids,
    _a3,
    *(const void **)(v6 + 144),
    globals,
    Irp->m_Irp);
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0x18u, (const _GUID *)&WPP_FxPkgPdo_cpp_Traceguids);
  return FxPkgPnp::CompletePnpRequest(This, Irp, 0);
}
