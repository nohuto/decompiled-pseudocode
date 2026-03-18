/*
 * XREFs of PspInvokeTerminateCallback @ 0x1409B1D40
 * Callers:
 *     PsStartSiloMonitor @ 0x140852D60 (PsStartSiloMonitor.c)
 *     PspNotifyServerSiloTermination @ 0x1409B1F54 (PspNotifyServerSiloTermination.c)
 * Callees:
 *     EtwTraceJobServerSiloMonitorCallback @ 0x1403D683C (EtwTraceJobServerSiloMonitorCallback.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

BOOLEAN __fastcall PspInvokeTerminateCallback(__int64 a1, __int64 a2)
{
  EtwTraceJobServerSiloMonitorCallback(2, a1, (unsigned __int16 *)(a2 + 40), 0);
  (*(void (__fastcall **)(__int64))(a2 + 32))(a1);
  return EtwTraceJobServerSiloMonitorCallback(3, a1, (unsigned __int16 *)(a2 + 40), 0);
}
