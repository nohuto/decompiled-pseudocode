/*
 * XREFs of PspGetJobSilo @ 0x140212034
 * Callers:
 *     PsGetJobSilo @ 0x140212000 (PsGetJobSilo.c)
 *     PsIsProcessInSilo @ 0x140300B74 (PsIsProcessInSilo.c)
 *     PsGetProcessSilo @ 0x1405E0470 (PsGetProcessSilo.c)
 *     NtQueryInformationJobObject @ 0x140684450 (NtQueryInformationJobObject.c)
 *     PsGetParentSilo @ 0x1407FC3C0 (PsGetParentSilo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetJobSilo(__int64 a1)
{
  while ( a1 && (*(_DWORD *)(a1 + 1512) & 0x40000000) == 0 )
    a1 = *(_QWORD *)(a1 + 1264);
  return a1;
}
