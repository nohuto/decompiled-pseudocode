/*
 * XREFs of ?GetSupportedMonitorFrequencyRanges@EdidMonitorDescriptor@DxgMonitor@@UEBAJPEAGPEAU_FrequencyRangeDescriptor@@@Z @ 0x1C01FC9C0
 * Callers:
 *     <none>
 * Callees:
 *     ?EDID_V1_GetSupportedMonitorFrequencyRanges@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAGPEAU_FrequencyRangeDescriptor@@@Z @ 0x1C001DB1C (-EDID_V1_GetSupportedMonitorFrequencyRanges@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEA.c)
 */

__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::GetSupportedMonitorFrequencyRanges(
        DxgMonitor::EdidMonitorDescriptor *this,
        unsigned __int16 *a2,
        struct _FrequencyRangeDescriptor *a3)
{
  return EDID_V1_GetSupportedMonitorFrequencyRanges(
           *(_DWORD *)(**((_QWORD **)this + 3) + 8LL),
           *(_DWORD *)(**((_QWORD **)this + 3) + 16LL),
           (unsigned __int8 *)(**((_QWORD **)this + 3) + 24LL),
           (__int64)a2,
           a3);
}
