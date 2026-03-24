/*
 * XREFs of ObSetProcessDeviceMap @ 0x1408DF6DC
 * Callers:
 *     NtSetInformationProcess @ 0x140657B40 (NtSetInformationProcess.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x14025C2E0 (PsGetProcessServerSilo.c)
 *     ObpSetDeviceMap @ 0x1406A04E4 (ObpSetDeviceMap.c)
 */

NTSTATUS __fastcall ObSetProcessDeviceMap(__int64 a1, void *a2, KPROCESSOR_MODE a3)
{
  struct _DMA_ADAPTER *ProcessServerSilo; // rax

  ProcessServerSilo = (struct _DMA_ADAPTER *)PsGetProcessServerSilo(a1);
  return ObpSetDeviceMap(ProcessServerSilo, a1, a2, a3, 2, 0LL);
}
