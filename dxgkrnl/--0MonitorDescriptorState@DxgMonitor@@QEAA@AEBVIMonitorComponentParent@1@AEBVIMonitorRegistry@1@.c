/*
 * XREFs of ??0MonitorDescriptorState@DxgMonitor@@QEAA@AEBVIMonitorComponentParent@1@AEBVIMonitorRegistry@1@@Z @ 0x1C01F97B8
 * Callers:
 *     ?_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@IPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAUDXGKMON_USB4_HOSTROUTER_INFO@@@Z @ 0x1C01F90BC (-_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV-$unique_ptr@VIMonitorDriverInterface@DxgMoni.c)
 *     ?CopyInstance@MonitorDescriptorState@DxgMonitor@@QEBA?AV?$unique_ptr@VMonitorDescriptorState@DxgMonitor@@U?$default_delete@VMonitorDescriptorState@DxgMonitor@@@wistd@@@wistd@@AEBVIMonitorComponentParent@2@AEBVIMonitorRegistry@2@@Z @ 0x1C03C7304 (-CopyInstance@MonitorDescriptorState@DxgMonitor@@QEBA-AV-$unique_ptr@VMonitorDescriptorState@Dxg.c)
 * Callees:
 *     <none>
 */

DxgMonitor::MonitorDescriptorState *__fastcall DxgMonitor::MonitorDescriptorState::MonitorDescriptorState(
        DxgMonitor::MonitorDescriptorState *this,
        const struct DxgMonitor::IMonitorComponentParent *a2,
        const struct DxgMonitor::IMonitorRegistry *a3)
{
  DxgMonitor::MonitorDescriptorState *result; // rax

  *((_DWORD *)this + 26) = 1;
  ExInitializeResourceLite((PERESOURCE)this);
  *((_QWORD *)this + 14) = a2;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_BYTE *)this + 152) = 0;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 22) = (char *)this + 168;
  *((_QWORD *)this + 21) = (char *)this + 168;
  result = this;
  *((_QWORD *)this + 15) = a3;
  return result;
}
