/*
 * XREFs of PsGetProcessSilo @ 0x1405A18F0
 * Callers:
 *     NtSetInformationThread @ 0x1406D8E90 (NtSetInformationThread.c)
 *     PsIsProcessInAppSilo @ 0x1409A96A0 (PsIsProcessInAppSilo.c)
 * Callees:
 *     PspGetJobSilo @ 0x1402B60F4 (PspGetJobSilo.c)
 */

__int64 __fastcall PsGetProcessSilo(__int64 a1)
{
  return PspGetJobSilo(*(_QWORD *)(a1 + 1296));
}
