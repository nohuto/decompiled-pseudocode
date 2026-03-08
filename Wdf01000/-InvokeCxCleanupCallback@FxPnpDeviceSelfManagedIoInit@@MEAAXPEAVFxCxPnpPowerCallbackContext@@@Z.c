/*
 * XREFs of ?InvokeCxCleanupCallback@FxPnpDeviceSelfManagedIoInit@@MEAAXPEAVFxCxPnpPowerCallbackContext@@@Z @ 0x1C006D930
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxPnpDeviceSelfManagedIoInit::InvokeCxCleanupCallback(
        FxPowerDeviceArmWakeFromS0 *this,
        FxCxPnpPowerCallbackContext *Context)
{
  ((void (__fastcall *)(WDFDEVICE__ *))Context->u.Generic.CleanupCallback)(this->m_Device);
}
