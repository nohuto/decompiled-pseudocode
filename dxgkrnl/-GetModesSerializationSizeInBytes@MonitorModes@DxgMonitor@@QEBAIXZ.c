/*
 * XREFs of ?GetModesSerializationSizeInBytes@MonitorModes@DxgMonitor@@QEBAIXZ @ 0x1C03C7FEC
 * Callers:
 *     ?_SerializeMonitor@DXGMONITOR@@QEBAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z @ 0x1C03C520C (-_SerializeMonitor@DXGMONITOR@@QEBAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z.c)
 *     ?SerializeModesToBuffer@MonitorModes@DxgMonitor@@QEBAXPEAU_DMM_MONITORSOURCEMODESET_SERIALIZATION@@I@Z @ 0x1C03C8108 (-SerializeModesToBuffer@MonitorModes@DxgMonitor@@QEBAXPEAU_DMM_MONITORSOURCEMODESET_SERIALIZATIO.c)
 * Callees:
 *     ??0?$RESOURCE_LOCK@$$CBVMonitorModes@DxgMonitor@@@@QEAA@PEBVMonitorModes@DxgMonitor@@@Z @ 0x1C006BEA0 (--0-$RESOURCE_LOCK@$$CBVMonitorModes@DxgMonitor@@@@QEAA@PEBVMonitorModes@DxgMonitor@@@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::GetModesSerializationSizeInBytes(struct _ERESOURCE *this)
{
  int OwnerTable; // eax
  unsigned int v3; // ebx
  PERESOURCE Resource; // [rsp+30h] [rbp+8h] BYREF

  RESOURCE_LOCK<DxgMonitor::MonitorModes const>::RESOURCE_LOCK<DxgMonitor::MonitorModes const>(&Resource, this);
  OwnerTable = (int)this[1].OwnerTable;
  if ( OwnerTable )
    v3 = 104 * OwnerTable + 8;
  else
    v3 = 112;
  if ( Resource )
  {
    ExReleaseResourceLite(Resource);
    KeLeaveCriticalRegion();
  }
  return v3;
}
