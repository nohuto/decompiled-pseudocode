__int64 __fastcall FxPnpDeviceSelfManagedIoRestart::InvokeCxCallback(
        FxPnpDeviceSelfManagedIoRestart *this,
        FxCxPnpPowerCallbackContext *Context,
        FxCxInvokeCallbackSubType PrePost)
{
  int v5; // eax
  unsigned int level; // ebx
  unsigned __int16 v7; // r9
  unsigned int m_DevicePowerState; // ecx
  int v9; // eax
  const char *_a3; // rdx
  const _GUID *v12; // [rsp+20h] [rbp-38h]

  if ( Context->m_CallbackType == FxCxCallbackSmIoRestart )
  {
    if ( PrePost )
      v5 = ((__int64 (__fastcall *)(WDFDEVICE__ *))Context->u.Generic.PostCallback)(this->m_Device);
    else
      v5 = ((__int64 (__fastcall *)(WDFDEVICE__ *))Context->u.Generic.PreCallback)(this->m_Device);
    level = v5;
    if ( v5 >= 0 )
      return level;
    v7 = 26;
  }
  else
  {
    m_DevicePowerState = this->m_PkgPnp->m_DevicePowerState;
    if ( PrePost )
      v9 = ((__int64 (__fastcall *)(WDFDEVICE__ *, _QWORD))Context->u.Generic.PostCallback)(
             this->m_Device,
             m_DevicePowerState);
    else
      v9 = ((__int64 (__fastcall *)(WDFDEVICE__ *, _QWORD))Context->u.Generic.PreCallback)(
             this->m_Device,
             m_DevicePowerState);
    level = v9;
    if ( v9 >= 0 )
      return level;
    v7 = 27;
  }
  _a3 = "Pre";
  if ( PrePost )
    _a3 = "Post";
  WPP_IFR_SF_sqqd(
    this->m_PkgPnp->m_Globals,
    4u,
    (unsigned int)"Post",
    v7,
    v12,
    _a3,
    this->m_Device,
    this->m_PkgPnp->m_DeviceBase->m_DeviceObject.m_DeviceObject,
    level);
  return level;
}
