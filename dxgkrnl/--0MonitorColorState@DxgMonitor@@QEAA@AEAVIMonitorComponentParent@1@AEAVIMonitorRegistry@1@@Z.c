/*
 * XREFs of ??0MonitorColorState@DxgMonitor@@QEAA@AEAVIMonitorComponentParent@1@AEAVIMonitorRegistry@1@@Z @ 0x1C01F98FC
 * Callers:
 *     ?_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@IPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAUDXGKMON_USB4_HOSTROUTER_INFO@@@Z @ 0x1C01F90BC (-_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV-$unique_ptr@VIMonitorDriverInterface@DxgMoni.c)
 *     ?CopyInstance@MonitorColorState@DxgMonitor@@QEBA?AV?$unique_ptr@VMonitorColorState@DxgMonitor@@U?$default_delete@VMonitorColorState@DxgMonitor@@@wistd@@@wistd@@AEAVIMonitorComponentParent@2@AEAVIMonitorRegistry@2@@Z @ 0x1C03C9374 (-CopyInstance@MonitorColorState@DxgMonitor@@QEBA-AV-$unique_ptr@VMonitorColorState@DxgMonitor@@U.c)
 * Callees:
 *     <none>
 */

DxgMonitor::MonitorColorState *__fastcall DxgMonitor::MonitorColorState::MonitorColorState(
        DxgMonitor::MonitorColorState *this,
        struct DxgMonitor::IMonitorComponentParent *a2,
        struct DxgMonitor::IMonitorRegistry *a3)
{
  DxgMonitor::MonitorColorState *result; // rax

  *(_QWORD *)this = a2;
  *((_QWORD *)this + 1) = a3;
  *((_OWORD *)this + 1) = 0LL;
  *((_OWORD *)this + 2) = 0LL;
  *((_OWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *((_BYTE *)this + 76) = 0;
  *(_OWORD *)((char *)this + 77) = 0LL;
  *(_OWORD *)((char *)this + 93) = 0LL;
  *(_OWORD *)((char *)this + 109) = 0LL;
  *(_QWORD *)((char *)this + 125) = 0LL;
  *(_QWORD *)((char *)this + 133) = 0LL;
  *(_OWORD *)((char *)this + 141) = 0LL;
  *(_OWORD *)((char *)this + 157) = 0LL;
  *(_OWORD *)((char *)this + 173) = 0LL;
  *(_QWORD *)((char *)this + 189) = 0LL;
  *(_QWORD *)((char *)this + 197) = 0LL;
  *(_OWORD *)((char *)this + 205) = 0LL;
  *(_OWORD *)((char *)this + 221) = 0LL;
  *(_OWORD *)((char *)this + 237) = 0LL;
  *(_QWORD *)((char *)this + 253) = 0LL;
  *(_DWORD *)((char *)this + 261) = 0;
  *(_WORD *)((char *)this + 265) = 0;
  *(_DWORD *)((char *)this + 267) = 0;
  *((_BYTE *)this + 271) = 0;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_DWORD *)this + 84) = 0;
  *((_WORD *)this + 170) = 0;
  *(_OWORD *)((char *)this + 344) = 0LL;
  *(_OWORD *)((char *)this + 360) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_WORD *)this + 192) = 0;
  *((_DWORD *)this + 97) = 0;
  *((_QWORD *)this + 49) = 1000LL;
  *((_OWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_DWORD *)this + 106) = 0;
  result = this;
  *((_WORD *)this + 214) = 0;
  return result;
}
