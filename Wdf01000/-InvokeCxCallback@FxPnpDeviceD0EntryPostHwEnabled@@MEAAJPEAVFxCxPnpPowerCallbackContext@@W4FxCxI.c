__int64 __fastcall FxPnpDeviceD0EntryPostHwEnabled::InvokeCxCallback(
        FxPnpDeviceD0EntryPostHwEnabled *this,
        FxCxPnpPowerCallbackContext *Context,
        FxCxInvokeCallbackSubType PrePost)
{
  int flags; // eax
  unsigned int v6; // edi
  const char *_a4; // r8
  const _GUID *v9; // [rsp+20h] [rbp-38h]

  if ( PrePost )
    flags = ((__int64 (__fastcall *)(WDFDEVICE__ *, _QWORD))Context->u.Generic.PostCallback)(
              this->m_Device,
              (unsigned int)this->m_PreviousState);
  else
    flags = ((__int64 (__fastcall *)(WDFDEVICE__ *, _QWORD))Context->u.Generic.PreCallback)(
              this->m_Device,
              (unsigned int)this->m_PreviousState);
  v6 = flags;
  if ( flags < 0 )
  {
    _a4 = "Pre";
    if ( PrePost )
      _a4 = "Post";
    WPP_IFR_SF_sqqLd(
      this->m_PkgPnp->m_Globals,
      this->m_PreviousState,
      (unsigned int)_a4,
      0xCu,
      v9,
      _a4,
      this->m_Device,
      this->m_PkgPnp->m_DeviceBase->m_DeviceObject.m_DeviceObject,
      this->m_PreviousState,
      flags);
  }
  return v6;
}
