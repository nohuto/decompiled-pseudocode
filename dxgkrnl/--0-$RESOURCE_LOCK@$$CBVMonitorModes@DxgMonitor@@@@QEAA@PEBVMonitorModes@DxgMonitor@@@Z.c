/*
 * XREFs of ??0?$RESOURCE_LOCK@$$CBVMonitorModes@DxgMonitor@@@@QEAA@PEBVMonitorModes@DxgMonitor@@@Z @ 0x1C006BEA0
 * Callers:
 *     ?GetFrequencyRangeSerializationSizeInBytes@MonitorModes@DxgMonitor@@QEBAIXZ @ 0x1C03C7F8C (-GetFrequencyRangeSerializationSizeInBytes@MonitorModes@DxgMonitor@@QEBAIXZ.c)
 *     ?GetModesSerializationSizeInBytes@MonitorModes@DxgMonitor@@QEBAIXZ @ 0x1C03C7FEC (-GetModesSerializationSizeInBytes@MonitorModes@DxgMonitor@@QEBAIXZ.c)
 *     ?SerializeModesToBuffer@MonitorModes@DxgMonitor@@QEBAXPEAU_DMM_MONITORSOURCEMODESET_SERIALIZATION@@I@Z @ 0x1C03C8108 (-SerializeModesToBuffer@MonitorModes@DxgMonitor@@QEBAXPEAU_DMM_MONITORSOURCEMODESET_SERIALIZATIO.c)
 * Callees:
 *     <none>
 */

struct _ERESOURCE **__fastcall RESOURCE_LOCK<DxgMonitor::MonitorModes const>::RESOURCE_LOCK<DxgMonitor::MonitorModes const>(
        struct _ERESOURCE **a1,
        struct _ERESOURCE *a2)
{
  *a1 = a2;
  if ( a2 )
  {
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(a2, 1u);
  }
  return a1;
}
