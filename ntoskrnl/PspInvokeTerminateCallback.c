/*
 * XREFs of PspInvokeTerminateCallback @ 0x1409B1268
 * Callers:
 *     PsStartSiloMonitor @ 0x140848CF0 (PsStartSiloMonitor.c)
 *     PspNotifyServerSiloTermination @ 0x1409B147C (PspNotifyServerSiloTermination.c)
 * Callees:
 *     EtwTraceJobServerSiloMonitorCallback @ 0x1403A01E0 (EtwTraceJobServerSiloMonitorCallback.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

BOOLEAN __fastcall PspInvokeTerminateCallback(__int64 a1, __int64 a2)
{
  EtwTraceJobServerSiloMonitorCallback(2, a1, (unsigned __int16 *)(a2 + 40), 0);
  (*(void (__fastcall **)(__int64))(a2 + 32))(a1);
  return EtwTraceJobServerSiloMonitorCallback(3, a1, (unsigned __int16 *)(a2 + 40), 0);
}
