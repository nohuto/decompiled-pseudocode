NTSTATUS __fastcall DxgMonitor::MonitorPnpState::SetPnpDeviceProperty(
        PDEVICE_OBJECT *this,
        const struct _DEVPROPKEY *a2,
        DEVPROPTYPE Type,
        ULONG Size,
        PVOID Data)
{
  if ( *((_BYTE *)this + 16) )
    return IoSetDevicePropertyData(this[1], a2, 0, 0, Type, Size, Data);
  else
    return -1073741275;
}
