/*
 * XREFs of PsGetProcessSilo @ 0x1405A3DE0
 * Callers:
 *     NtSetInformationThread @ 0x140733AB0 (NtSetInformationThread.c)
 *     PsIsProcessInAppSilo @ 0x1409AC720 (PsIsProcessInAppSilo.c)
 * Callees:
 *     PspGetJobSilo @ 0x14031C634 (PspGetJobSilo.c)
 */

__int64 __fastcall PsGetProcessSilo(__int64 a1)
{
  return PspGetJobSilo(*(_QWORD *)(a1 + 1296));
}
