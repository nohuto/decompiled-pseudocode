/*
 * XREFs of ?InvokeCxCleanupCallback@FxPnpDevicePrepareHardware@@MEAAXPEAVFxCxPnpPowerCallbackContext@@@Z @ 0x1C006D900
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxPnpDevicePrepareHardware::InvokeCxCleanupCallback(
        FxPnpDevicePrepareHardware *this,
        FxCxPnpPowerCallbackContext *Context)
{
  ((void (__fastcall *)(WDFDEVICE__ *, WDFCMRESLIST__ *, WDFCMRESLIST__ *))Context->u.Generic.CleanupCallback)(
    this->m_Device,
    this->m_ResourcesRaw,
    this->m_ResourcesTranslated);
}
