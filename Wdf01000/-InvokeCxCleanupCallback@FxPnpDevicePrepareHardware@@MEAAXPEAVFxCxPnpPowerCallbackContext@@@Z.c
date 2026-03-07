void __fastcall FxPnpDevicePrepareHardware::InvokeCxCleanupCallback(
        FxPnpDevicePrepareHardware *this,
        FxCxPnpPowerCallbackContext *Context)
{
  ((void (__fastcall *)(WDFDEVICE__ *, WDFCMRESLIST__ *, WDFCMRESLIST__ *))Context->u.Generic.CleanupCallback)(
    this->m_Device,
    this->m_ResourcesRaw,
    this->m_ResourcesTranslated);
}
