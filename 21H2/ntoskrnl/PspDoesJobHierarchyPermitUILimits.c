/*
 * XREFs of PspDoesJobHierarchyPermitUILimits @ 0x1406E6570
 * Callers:
 *     NtSetInformationJobObject @ 0x140685A20 (NtSetInformationJobObject.c)
 *     PspAssignProcessToJob @ 0x1406879B8 (PspAssignProcessToJob.c)
 * Callees:
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1406FF880 (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

bool __fastcall PspDoesJobHierarchyPermitUILimits(_QWORD *a1, char a2)
{
  __int64 v2; // r8
  char v3; // bl

  v2 = a1[158];
  v3 = 0;
  while ( v2 )
  {
    if ( (*(_DWORD *)(v2 + 1512) & 0x10) != 0 )
      return v3;
    v2 = *(_QWORD *)(v2 + 1264);
  }
  return (a2 & 1) != 0 || (int)PspEnumJobsAndProcessesInJobHierarchy(a1, (__int64)a1, 1) >= 0;
}
