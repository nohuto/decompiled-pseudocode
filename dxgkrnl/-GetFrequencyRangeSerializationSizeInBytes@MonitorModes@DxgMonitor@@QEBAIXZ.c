/*
 * XREFs of ?GetFrequencyRangeSerializationSizeInBytes@MonitorModes@DxgMonitor@@QEBAIXZ @ 0x1C03C7F8C
 * Callers:
 *     ?_SerializeMonitor@DXGMONITOR@@QEBAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z @ 0x1C03C520C (-_SerializeMonitor@DXGMONITOR@@QEBAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z.c)
 *     ?SerializeFrequencyRangesToBuffer@MonitorModes@DxgMonitor@@QEBAXPEAU_DMM_MONITORFREQUENCYRANGESET_SERIALIZATION@@I@Z @ 0x1C03C8048 (-SerializeFrequencyRangesToBuffer@MonitorModes@DxgMonitor@@QEBAXPEAU_DMM_MONITORFREQUENCYRANGESE.c)
 * Callees:
 *     ??0?$RESOURCE_LOCK@$$CBVMonitorModes@DxgMonitor@@@@QEAA@PEBVMonitorModes@DxgMonitor@@@Z @ 0x1C006BEA0 (--0-$RESOURCE_LOCK@$$CBVMonitorModes@DxgMonitor@@@@QEAA@PEBVMonitorModes@DxgMonitor@@@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::GetFrequencyRangeSerializationSizeInBytes(struct _ERESOURCE *this)
{
  ULONG ActiveEntries; // eax
  unsigned int v3; // ebx
  PERESOURCE Resource; // [rsp+30h] [rbp+8h] BYREF

  RESOURCE_LOCK<DxgMonitor::MonitorModes const>::RESOURCE_LOCK<DxgMonitor::MonitorModes const>(&Resource, this);
  ActiveEntries = this[1].ActiveEntries;
  if ( ActiveEntries )
    v3 = 48 * ActiveEntries + 8;
  else
    v3 = 56;
  if ( Resource )
  {
    ExReleaseResourceLite(Resource);
    KeLeaveCriticalRegion();
  }
  return v3;
}
