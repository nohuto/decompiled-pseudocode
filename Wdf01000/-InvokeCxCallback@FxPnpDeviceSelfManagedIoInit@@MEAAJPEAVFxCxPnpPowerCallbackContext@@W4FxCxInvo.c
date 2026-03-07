__int64 __fastcall FxPnpDeviceSelfManagedIoInit::InvokeCxCallback(
        FxPnpDeviceSelfManagedIoInit *this,
        FxCxPnpPowerCallbackContext *Context,
        FxCxInvokeCallbackSubType PrePost)
{
  int level; // eax
  unsigned int v6; // ebx
  const char *_a3; // r8
  const _GUID *v9; // [rsp+20h] [rbp-38h]

  if ( PrePost )
    level = ((__int64 (__fastcall *)(WDFDEVICE__ *))Context->u.Generic.PostCallback)(this->m_Device);
  else
    level = ((__int64 (__fastcall *)(WDFDEVICE__ *))Context->u.Generic.PreCallback)(this->m_Device);
  v6 = level;
  if ( level < 0 )
  {
    _a3 = "Pre";
    if ( PrePost )
      _a3 = "Post";
    WPP_IFR_SF_sqqd(
      this->m_PkgPnp->m_Globals,
      4u,
      (unsigned int)_a3,
      0x15u,
      v9,
      _a3,
      this->m_Device,
      this->m_PkgPnp->m_DeviceBase->m_DeviceObject.m_DeviceObject,
      level);
  }
  return v6;
}
