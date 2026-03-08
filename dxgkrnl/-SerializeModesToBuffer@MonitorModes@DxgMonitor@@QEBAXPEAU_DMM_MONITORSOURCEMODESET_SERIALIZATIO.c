/*
 * XREFs of ?SerializeModesToBuffer@MonitorModes@DxgMonitor@@QEBAXPEAU_DMM_MONITORSOURCEMODESET_SERIALIZATION@@I@Z @ 0x1C03C8108
 * Callers:
 *     ?_SerializeMonitor@DXGMONITOR@@QEBAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z @ 0x1C03C520C (-_SerializeMonitor@DXGMONITOR@@QEBAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z.c)
 * Callees:
 *     ??0?$RESOURCE_LOCK@$$CBVMonitorModes@DxgMonitor@@@@QEAA@PEBVMonitorModes@DxgMonitor@@@Z @ 0x1C006BEA0 (--0-$RESOURCE_LOCK@$$CBVMonitorModes@DxgMonitor@@@@QEAA@PEBVMonitorModes@DxgMonitor@@@Z.c)
 *     ?GetModesSerializationSizeInBytes@MonitorModes@DxgMonitor@@QEBAIXZ @ 0x1C03C7FEC (-GetModesSerializationSizeInBytes@MonitorModes@DxgMonitor@@QEBAIXZ.c)
 */

void __fastcall DxgMonitor::MonitorModes::SerializeModesToBuffer(
        struct _ERESOURCE *this,
        struct _DMM_MONITORSOURCEMODESET_SERIALIZATION *a2,
        unsigned int a3)
{
  DxgMonitor::MonitorModes *v6; // rax
  char *v7; // rdx
  unsigned int v8; // r8d
  __int64 v9; // rcx
  DxgMonitor::MonitorModes *v10; // rax
  PERESOURCE Resource; // [rsp+48h] [rbp+20h] BYREF

  RESOURCE_LOCK<DxgMonitor::MonitorModes const>::RESOURCE_LOCK<DxgMonitor::MonitorModes const>(&Resource, this);
  if ( (unsigned int)DxgMonitor::MonitorModes::GetModesSerializationSizeInBytes(this) <= a3 )
  {
    *(_DWORD *)a2 = this[1].OwnerTable;
    v6 = *(DxgMonitor::MonitorModes **)&this[1].ActiveCount;
    if ( v6 != (DxgMonitor::MonitorModes *)&this[1].ActiveCount )
    {
      v7 = (char *)v6 - 96;
      v8 = 0;
      if ( !v6 )
        v7 = 0LL;
      while ( v7 )
      {
        if ( v8 >= LODWORD(this[1].OwnerTable) )
          break;
        v9 = 104LL * v8;
        *(_DWORD *)((char *)a2 + v9 + 104) = *((_DWORD *)v7 + 28);
        *(_OWORD *)((char *)a2 + v9 + 8) = *(_OWORD *)v7;
        *(_OWORD *)((char *)a2 + v9 + 24) = *((_OWORD *)v7 + 1);
        *(_OWORD *)((char *)a2 + v9 + 40) = *((_OWORD *)v7 + 2);
        *(_OWORD *)((char *)a2 + v9 + 56) = *((_OWORD *)v7 + 3);
        *(_OWORD *)((char *)a2 + v9 + 72) = *((_OWORD *)v7 + 4);
        *(_OWORD *)((char *)a2 + v9 + 88) = *((_OWORD *)v7 + 5);
        v10 = (DxgMonitor::MonitorModes *)*((_QWORD *)v7 + 12);
        if ( v10 == (DxgMonitor::MonitorModes *)&this[1].ActiveCount )
          break;
        v7 = (char *)v10 - 96;
        if ( !v10 )
          v7 = 0LL;
        ++v8;
      }
    }
  }
  else
  {
    WdLogSingleEntry0(1LL);
  }
  if ( Resource )
  {
    ExReleaseResourceLite(Resource);
    KeLeaveCriticalRegion();
  }
}
