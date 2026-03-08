/*
 * XREFs of ??0MonitorModes@DxgMonitor@@QEAA@AEBVIMonitorComponentParent@1@AEBVIMonitorRegistry@1@@Z @ 0x1C01F9838
 * Callers:
 *     ?_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@IPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAUDXGKMON_USB4_HOSTROUTER_INFO@@@Z @ 0x1C01F90BC (-_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV-$unique_ptr@VIMonitorDriverInterface@DxgMoni.c)
 *     ?CopyInstance@MonitorModes@DxgMonitor@@QEBA?AV?$unique_ptr@VMonitorModes@DxgMonitor@@U?$default_delete@VMonitorModes@DxgMonitor@@@wistd@@@wistd@@AEBVIMonitorComponentParent@2@AEBVIMonitorRegistry@2@@Z @ 0x1C03C7D00 (-CopyInstance@MonitorModes@DxgMonitor@@QEBA-AV-$unique_ptr@VMonitorModes@DxgMonitor@@U-$default_.c)
 * Callees:
 *     <none>
 */

DxgMonitor::MonitorModes *__fastcall DxgMonitor::MonitorModes::MonitorModes(
        DxgMonitor::MonitorModes *this,
        const struct DxgMonitor::IMonitorComponentParent *a2,
        const struct DxgMonitor::IMonitorRegistry *a3)
{
  DxgMonitor::MonitorModes *result; // rax

  *((_DWORD *)this + 26) = 1;
  ExInitializeResourceLite((PERESOURCE)this);
  *((_QWORD *)this + 29) = a2;
  *((_DWORD *)this + 52) = -1;
  *((_QWORD *)this + 17) = (char *)this + 128;
  *((_QWORD *)this + 16) = (char *)this + 128;
  *((_QWORD *)this + 20) = (char *)this + 152;
  *((_QWORD *)this + 19) = (char *)this + 152;
  *((_QWORD *)this + 23) = (char *)this + 176;
  *((_QWORD *)this + 22) = (char *)this + 176;
  *((_QWORD *)this + 25) = (char *)this + 192;
  *((_QWORD *)this + 24) = (char *)this + 192;
  result = this;
  *((_QWORD *)this + 30) = a3;
  *((_DWORD *)this + 28) = 3;
  *((_BYTE *)this + 116) = 0;
  *((_DWORD *)this + 30) = 0;
  *((_DWORD *)this + 31) = 1024;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_DWORD *)this + 56) = 0;
  return result;
}
