/*
 * XREFs of PspGetJobSilo @ 0x1402B60F4
 * Callers:
 *     PsIsProcessInSilo @ 0x1402484DC (PsIsProcessInSilo.c)
 *     PsGetJobSilo @ 0x1402B60C0 (PsGetJobSilo.c)
 *     PsGetProcessSilo @ 0x1405A18F0 (PsGetProcessSilo.c)
 *     PsGetParentSilo @ 0x14067FE00 (PsGetParentSilo.c)
 *     NtQueryInformationJobObject @ 0x1406F9480 (NtQueryInformationJobObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetJobSilo(__int64 a1)
{
  while ( a1 && (*(_DWORD *)(a1 + 1536) & 0x40000000) == 0 )
    a1 = *(_QWORD *)(a1 + 1288);
  return a1;
}
