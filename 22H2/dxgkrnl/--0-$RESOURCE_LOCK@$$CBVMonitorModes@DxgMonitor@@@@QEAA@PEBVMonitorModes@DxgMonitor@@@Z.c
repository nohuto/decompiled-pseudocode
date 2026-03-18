/*
 * XREFs of ??0?$RESOURCE_LOCK@$$CBVMonitorModes@DxgMonitor@@@@QEAA@PEBVMonitorModes@DxgMonitor@@@Z @ 0x1C006CAD0
 * Callers:
 *     ?GetFrequencyRangeSerializationSizeInBytes@MonitorModes@DxgMonitor@@QEBAIXZ @ 0x1C03CC7EC (-GetFrequencyRangeSerializationSizeInBytes@MonitorModes@DxgMonitor@@QEBAIXZ.c)
 *     ?GetModesSerializationSizeInBytes@MonitorModes@DxgMonitor@@QEBAIXZ @ 0x1C03CC84C (-GetModesSerializationSizeInBytes@MonitorModes@DxgMonitor@@QEBAIXZ.c)
 *     ?SerializeModesToBuffer@MonitorModes@DxgMonitor@@QEBAXPEAU_DMM_MONITORSOURCEMODESET_SERIALIZATION@@I@Z @ 0x1C03CC968 (-SerializeModesToBuffer@MonitorModes@DxgMonitor@@QEBAXPEAU_DMM_MONITORSOURCEMODESET_SERIALIZATIO.c)
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
