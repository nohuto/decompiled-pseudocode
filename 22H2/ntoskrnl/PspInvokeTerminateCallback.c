/*
 * XREFs of PspInvokeTerminateCallback @ 0x1409B42B8
 * Callers:
 *     PsStartSiloMonitor @ 0x14084B360 (PsStartSiloMonitor.c)
 *     PspNotifyServerSiloTermination @ 0x1409B44CC (PspNotifyServerSiloTermination.c)
 * Callees:
 *     EtwTraceJobServerSiloMonitorCallback @ 0x1403A5700 (EtwTraceJobServerSiloMonitorCallback.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

BOOLEAN __fastcall PspInvokeTerminateCallback(__int64 a1, __int64 a2)
{
  EtwTraceJobServerSiloMonitorCallback(2, a1, (unsigned __int16 *)(a2 + 40), 0);
  (*(void (__fastcall **)(__int64))(a2 + 32))(a1);
  return EtwTraceJobServerSiloMonitorCallback(3, a1, (unsigned __int16 *)(a2 + 40), 0);
}
