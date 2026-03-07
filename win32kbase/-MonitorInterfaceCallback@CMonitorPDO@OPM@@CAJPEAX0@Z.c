__int64 __fastcall OPM::CMonitorPDO::MonitorInterfaceCallback(
        const struct _DEVICE_INTERFACE_CHANGE_NOTIFICATION *NotificationStructure,
        OPM::CMonitorPDO *Context)
{
  return OPM::CMonitorPDO::MonitorInterfaceCallbackInternal(Context, NotificationStructure);
}
