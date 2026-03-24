/*
 * XREFs of PsGetProcessSilo @ 0x1405813A0
 * Callers:
 *     NtSetInformationThread @ 0x1406FCE80 (NtSetInformationThread.c)
 *     PsIsProcessInAppSilo @ 0x140905B40 (PsIsProcessInAppSilo.c)
 * Callees:
 *     PspGetJobSilo @ 0x140200084 (PspGetJobSilo.c)
 */

__int64 __fastcall PsGetProcessSilo(__int64 a1)
{
  return PspGetJobSilo(*(_QWORD *)(a1 + 1296));
}
