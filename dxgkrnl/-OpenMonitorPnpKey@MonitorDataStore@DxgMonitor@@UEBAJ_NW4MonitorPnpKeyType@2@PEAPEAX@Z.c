/*
 * XREFs of ?OpenMonitorPnpKey@MonitorDataStore@DxgMonitor@@UEBAJ_NW4MonitorPnpKeyType@2@PEAPEAX@Z @ 0x1C021A590
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgMonitor::MonitorDataStore::OpenMonitorPnpKey(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 16LL))(*(_QWORD *)(a1 + 16));
}
