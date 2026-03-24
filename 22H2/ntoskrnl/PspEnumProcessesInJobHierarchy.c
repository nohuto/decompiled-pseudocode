/*
 * XREFs of PspEnumProcessesInJobHierarchy @ 0x14090E86C
 * Callers:
 *     NtSetInformationJobObject @ 0x140614660 (NtSetInformationJobObject.c)
 * Callees:
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140618450 (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

__int64 __fastcall PspEnumProcessesInJobHierarchy(_QWORD *a1, int a2, __int64 a3, int a4)
{
  return PspEnumJobsAndProcessesInJobHierarchy(a1, 0, 0, a2, a3, a4);
}
