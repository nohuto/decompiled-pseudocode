/*
 * XREFs of ??_GMonitorDataStore@DxgMonitor@@UEAAPEAXI@Z @ 0x1C006BAF0
 * Callers:
 *     ?_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@IPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAUDXGKMON_USB4_HOSTROUTER_INFO@@@Z @ 0x1C01F90BC (-_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV-$unique_ptr@VIMonitorDriverInterface@DxgMoni.c)
 *     ??1DXGMONITOR@@UEAA@XZ @ 0x1C03C45DC (--1DXGMONITOR@@UEAA@XZ.c)
 * Callees:
 *     ??1MonitorDataStore@DxgMonitor@@UEAA@XZ @ 0x1C03CA500 (--1MonitorDataStore@DxgMonitor@@UEAA@XZ.c)
 */

DxgMonitor::MonitorDataStore *__fastcall DxgMonitor::MonitorDataStore::`scalar deleting destructor'(
        DxgMonitor::MonitorDataStore *P,
        char a2)
{
  DxgMonitor::MonitorDataStore::~MonitorDataStore(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
