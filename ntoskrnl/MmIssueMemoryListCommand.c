/*
 * XREFs of MmIssueMemoryListCommand @ 0x14085E358
 * Callers:
 *     NtSetSystemInformation @ 0x1407E1F30 (NtSetSystemInformation.c)
 *     PfpLogEventRequest @ 0x14097ADD8 (PfpLogEventRequest.c)
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 *     MmPerformMemoryListCommand @ 0x140A849F4 (MmPerformMemoryListCommand.c)
 */

__int64 __fastcall MmIssueMemoryListCommand(unsigned int *a1, unsigned int a2, KPROCESSOR_MODE a3)
{
  unsigned int v3; // ebx

  if ( a2 < 4 )
    return 3221225476LL;
  v3 = *a1;
  if ( *a1 > 5 )
    return 3221225485LL;
  if ( v3 == 3 || SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a3) )
    return MmPerformMemoryListCommand(v3);
  return 3221225569LL;
}
