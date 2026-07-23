/*
 * XREFs of PsGetProcessSilo @ 0x1405815E0
 * Callers:
 *     NtSetInformationThread @ 0x140714260 (NtSetInformationThread.c)
 *     PsIsProcessInAppSilo @ 0x140905CA0 (PsIsProcessInAppSilo.c)
 * Callees:
 *     PspGetJobSilo @ 0x140200084 (PspGetJobSilo.c)
 */

__int64 __fastcall PsGetProcessSilo(__int64 a1)
{
  return PspGetJobSilo(*(_QWORD *)(a1 + 1296));
}
