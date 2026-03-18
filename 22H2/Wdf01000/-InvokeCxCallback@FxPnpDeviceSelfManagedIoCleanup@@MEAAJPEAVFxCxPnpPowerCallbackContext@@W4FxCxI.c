/*
 * XREFs of ?InvokeCxCallback@FxPnpDeviceSelfManagedIoCleanup@@MEAAJPEAVFxCxPnpPowerCallbackContext@@W4FxCxInvokeCallbackSubType@@@Z @ 0x1C001BFA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxPnpDeviceSelfManagedIoCleanup::InvokeCxCallback(
        FxPowerDeviceWakeFromSxTriggered *this,
        FxCxPnpPowerCallbackContext *Context,
        FxCxInvokeCallbackSubType PrePost)
{
  if ( PrePost )
    ((void (__fastcall *)(WDFDEVICE__ *))Context->u.Generic.PostCallback)(this->m_Device);
  else
    ((void (__fastcall *)(WDFDEVICE__ *))Context->u.Generic.PreCallback)(this->m_Device);
  return 0LL;
}
