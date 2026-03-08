/*
 * XREFs of ??_EMONITOR_MGR@@UEAAPEAXI@Z @ 0x1C006AEB0
 * Callers:
 *     MonitorCreateMonitorManager @ 0x1C02162DC (MonitorCreateMonitorManager.c)
 *     ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C02B6F10 (-Destroy@ADAPTER_DISPLAY@@QEAAXXZ.c)
 * Callees:
 *     ??1MONITOR_MGR@@UEAA@XZ @ 0x1C03C2954 (--1MONITOR_MGR@@UEAA@XZ.c)
 */

MONITOR_MGR *__fastcall MONITOR_MGR::`vector deleting destructor'(MONITOR_MGR *P, char a2)
{
  MONITOR_MGR::~MONITOR_MGR(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
