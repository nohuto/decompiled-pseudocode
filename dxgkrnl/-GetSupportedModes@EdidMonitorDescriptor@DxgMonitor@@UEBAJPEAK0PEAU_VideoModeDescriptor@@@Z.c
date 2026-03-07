__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::GetSupportedModes(
        DxgMonitor::EdidMonitorDescriptor *this,
        unsigned __int16 *a2,
        unsigned int *a3,
        struct _VideoModeDescriptor *a4)
{
  return EDID_V1_GetMonitorModes(
           *(unsigned int *)(**((_QWORD **)this + 3) + 8LL),
           *(_DWORD *)(**((_QWORD **)this + 3) + 16LL),
           (unsigned __int8 *)(**((_QWORD **)this + 3) + 24LL),
           a2,
           a4,
           a3);
}
