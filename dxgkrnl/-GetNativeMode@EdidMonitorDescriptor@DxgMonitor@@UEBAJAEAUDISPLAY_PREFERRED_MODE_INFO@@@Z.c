__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::GetNativeMode(
        DxgMonitor::EdidMonitorDescriptor *this,
        struct DISPLAY_PREFERRED_MODE_INFO *a2)
{
  return EDID_V1_GetPreferredMode((unsigned __int8 *)(**((_QWORD **)this + 3) + 24LL), a2);
}
