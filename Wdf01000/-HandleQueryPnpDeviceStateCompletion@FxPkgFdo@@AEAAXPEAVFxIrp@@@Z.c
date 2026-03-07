void __fastcall FxPkgFdo::HandleQueryPnpDeviceStateCompletion(FxPkgFdo *this, FxIrp *Irp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a3; // rax
  __int64 v6; // rdx
  unsigned int v7; // r8d
  _FX_DRIVER_GLOBALS *v8; // rcx

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0x13u, WPP_fxpkgfdo_cpp_Traceguids);
  Irp->m_Irp->IoStatus.Information = (unsigned int)FxPkgPnp::HandleQueryPnpDeviceState(
                                                     this,
                                                     Irp->m_Irp->IoStatus.Information);
  _a3 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  WPP_IFR_SF_qqdq(
    this->m_Globals,
    v6,
    v7,
    0x14u,
    WPP_fxpkgfdo_cpp_Traceguids,
    _a3,
    *(const void **)(v6 + 144),
    v7,
    Irp->m_Irp);
  v8 = this->m_Globals;
  if ( v8->FxVerboseOn )
    WPP_IFR_SF_(v8, 5u, 0xCu, 0x15u, WPP_fxpkgfdo_cpp_Traceguids);
}
