void __fastcall FxPnpDeviceSelfManagedIoRestart::InvokeCxCleanupCallback(
        FxPnpDeviceSelfManagedIoRestart *this,
        FxCxPnpPowerCallbackContext *Context)
{
  if ( Context->m_CallbackType == FxCxCallbackSmIoRestart )
    ((void (__fastcall *)(WDFDEVICE__ *, FxCxPnpPowerCallbackContext *, FxCxPnpPowerCallbackContext *))Context->u.Generic.CleanupCallback)(
      this->m_Device,
      Context,
      Context);
  else
    ((void (__fastcall *)(WDFDEVICE__ *, _QWORD))Context->u.Generic.CleanupCallback)(
      this->m_Device,
      this->m_PkgPnp->m_DevicePowerState);
}
