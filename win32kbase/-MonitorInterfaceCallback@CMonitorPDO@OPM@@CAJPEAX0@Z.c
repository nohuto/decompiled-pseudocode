/*
 * XREFs of ?MonitorInterfaceCallback@CMonitorPDO@OPM@@CAJPEAX0@Z @ 0x1C017ECC0
 * Callers:
 *     <none>
 * Callees:
 *     ?MonitorInterfaceCallbackInternal@CMonitorPDO@OPM@@AEAAJPEBU_DEVICE_INTERFACE_CHANGE_NOTIFICATION@@@Z @ 0x1C017ECE0 (-MonitorInterfaceCallbackInternal@CMonitorPDO@OPM@@AEAAJPEBU_DEVICE_INTERFACE_CHANGE_NOTIFICATIO.c)
 */

__int64 __fastcall OPM::CMonitorPDO::MonitorInterfaceCallback(
        const struct _DEVICE_INTERFACE_CHANGE_NOTIFICATION *NotificationStructure,
        OPM::CMonitorPDO *Context)
{
  return OPM::CMonitorPDO::MonitorInterfaceCallbackInternal(Context, NotificationStructure);
}
