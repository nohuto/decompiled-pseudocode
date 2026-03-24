/*
 * XREFs of PspGetJobSilo @ 0x140200084
 * Callers:
 *     PsGetJobSilo @ 0x140200050 (PsGetJobSilo.c)
 *     PsIsProcessInSilo @ 0x14025C298 (PsIsProcessInSilo.c)
 *     PsGetProcessSilo @ 0x1405812E0 (PsGetProcessSilo.c)
 *     NtQueryInformationJobObject @ 0x140616CE0 (NtQueryInformationJobObject.c)
 *     PsGetParentSilo @ 0x140905B40 (PsGetParentSilo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetJobSilo(__int64 a1)
{
  while ( a1 && (*(_DWORD *)(a1 + 1320) & 0x40000000) == 0 )
    a1 = *(_QWORD *)(a1 + 1072);
  return a1;
}
