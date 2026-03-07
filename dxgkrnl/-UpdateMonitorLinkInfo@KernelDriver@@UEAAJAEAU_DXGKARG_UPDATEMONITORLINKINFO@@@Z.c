__int64 __fastcall KernelDriver::UpdateMonitorLinkInfo(
        ADAPTER_DISPLAY **this,
        struct _DXGKARG_UPDATEMONITORLINKINFO *a2)
{
  return ADAPTER_DISPLAY::DdiUpdateMonitorLinkInfo(this[3], a2);
}
