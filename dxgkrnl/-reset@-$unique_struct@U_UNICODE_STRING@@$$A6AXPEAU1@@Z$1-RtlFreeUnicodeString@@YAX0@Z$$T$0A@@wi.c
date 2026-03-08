/*
 * XREFs of ?reset@?$unique_struct@U_UNICODE_STRING@@$$A6AXPEAU1@@Z$1?RtlFreeUnicodeString@@YAX0@Z$$T$0A@@wil@@QEAAXXZ @ 0x1C006BE78
 * Callers:
 *     ?RegisterPnPTargetDeviceNotification@MonitorPnpState@DxgMonitor@@QEAAJPEBU_UNICODE_STRING@@P6AJPEAX1@Z@Z @ 0x1C01FA460 (-RegisterPnPTargetDeviceNotification@MonitorPnpState@DxgMonitor@@QEAAJPEBU_UNICODE_STRING@@P6AJP.c)
 *     ?UnregisterPnPTargetDeviceNotification@MonitorPnpState@DxgMonitor@@QEAAJXZ @ 0x1C03C7160 (-UnregisterPnPTargetDeviceNotification@MonitorPnpState@DxgMonitor@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_struct<_UNICODE_STRING,void (_UNICODE_STRING *),&void RtlFreeUnicodeString(_UNICODE_STRING *),std::nullptr_t,0>::reset(
        struct _UNICODE_STRING *a1)
{
  RtlFreeUnicodeString(a1);
  *a1 = 0LL;
}
