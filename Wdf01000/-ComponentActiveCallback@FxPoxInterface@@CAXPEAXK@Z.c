void __fastcall FxPoxInterface::ComponentActiveCallback(FxPoxInterface *Context, unsigned int Component)
{
  FxPkgPnp *m_PkgPnp; // rdx
  const void *_a1; // rax
  __int64 v6; // rdx
  _FX_DRIVER_GLOBALS *v7; // r10
  _POX_SETTINGS *PowerFrameworkSettings; // rax
  _POX_SETTINGS *v9; // rbx
  FxPkgPnp *v10; // r10
  const void *ObjectHandleUnchecked; // rax
  __int64 v12; // r10
  _FX_DRIVER_GLOBALS *v13; // r11

  m_PkgPnp = Context->m_PkgPnp;
  if ( m_PkgPnp->m_Globals->FxVerboseOn )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(m_PkgPnp->m_DeviceBase);
    WPP_IFR_SF_qq(v7, 5u, 0xCu, 0xCu, WPP_PoxInterfaceKm_cpp_Traceguids, _a1, *(const void **)(v6 + 144));
  }
  PowerFrameworkSettings = FxPoxInterface::GetPowerFrameworkSettings(Context);
  v9 = PowerFrameworkSettings;
  if ( PowerFrameworkSettings && PowerFrameworkSettings->ComponentActiveConditionCallback )
  {
    v10 = Context->m_PkgPnp;
    if ( v10->m_Globals->FxVerboseOn )
    {
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(v10->m_DeviceBase);
      WPP_IFR_SF_qq(
        v13,
        5u,
        0xCu,
        0xDu,
        WPP_PoxInterfaceKm_cpp_Traceguids,
        ObjectHandleUnchecked,
        *(const void **)(v12 + 144));
    }
    v9->ComponentActiveConditionCallback(v9->PoFxDeviceContext, Component);
  }
}
