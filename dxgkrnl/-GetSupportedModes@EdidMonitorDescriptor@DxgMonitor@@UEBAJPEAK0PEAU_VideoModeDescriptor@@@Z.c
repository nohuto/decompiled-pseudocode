/*
 * XREFs of ?GetSupportedModes@EdidMonitorDescriptor@DxgMonitor@@UEBAJPEAK0PEAU_VideoModeDescriptor@@@Z @ 0x1C01FCB00
 * Callers:
 *     <none>
 * Callees:
 *     ?EDID_V1_GetMonitorModes@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAKPEAU_VideoModeDescriptor@@2@Z @ 0x1C001DBE4 (-EDID_V1_GetMonitorModes@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAKPEAU_VideoModeDesc.c)
 */

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
