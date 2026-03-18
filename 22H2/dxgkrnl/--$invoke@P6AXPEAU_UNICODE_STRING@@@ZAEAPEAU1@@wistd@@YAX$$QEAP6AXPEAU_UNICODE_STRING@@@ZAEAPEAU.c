/*
 * XREFs of ??$invoke@P6AXPEAU_UNICODE_STRING@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_UNICODE_STRING@@@ZAEAPEAU1@@Z @ 0x1C0023C94
 * Callers:
 *     ?GetAppOverride@MonitorUsageState@DxgMonitor@@QEBA_NU_GUID@@@Z @ 0x1C0222C14 (-GetAppOverride@MonitorUsageState@DxgMonitor@@QEBA_NU_GUID@@@Z.c)
 *     ??1MonitorUsb4State@DxgMonitor@@QEAA@XZ @ 0x1C03C9D1C (--1MonitorUsb4State@DxgMonitor@@QEAA@XZ.c)
 *     ??1MonitorPnpState@DxgMonitor@@QEAA@XZ @ 0x1C03CB8B4 (--1MonitorPnpState@DxgMonitor@@QEAA@XZ.c)
 *     ?SetAppOverride@MonitorUsageState@DxgMonitor@@QEAAJU_GUID@@0I_K_NPEBU_UNICODE_STRING@@@Z @ 0x1C03CE6C8 (-SetAppOverride@MonitorUsageState@DxgMonitor@@QEAAJU_GUID@@0I_K_NPEBU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::invoke<void (*)(_UNICODE_STRING *),_UNICODE_STRING * &>(
        __int64 (__fastcall **a1)(_QWORD),
        _QWORD *a2)
{
  return (*a1)(*a2);
}
