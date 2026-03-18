/*
 * XREFs of PspSetEnergyTrackingStateJobTree @ 0x1406954C8
 * Callers:
 *     NtSetInformationJobObject @ 0x140685A20 (NtSetInformationJobObject.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     PspIsContextAdmin @ 0x1406950FC (PspIsContextAdmin.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1406FF880 (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

__int64 __fastcall PspSetEnergyTrackingStateJobTree(char *Object, _DWORD *a2)
{
  if ( (*a2 & 0xFFFFFFF3) != 0 || (~*a2 & a2[1]) != 0 )
    return 3221225485LL;
  if ( !PspIsContextAdmin() )
    return 3221225506LL;
  ExAcquireResourceExclusiveLite((PERESOURCE)(Object + 56), 1u);
  *((_QWORD *)Object + 221) = *(_QWORD *)a2;
  PspEnumJobsAndProcessesInJobHierarchy(Object, (__int64)a2, 5);
  ExReleaseResourceLite((PERESOURCE)(Object + 56));
  return 0LL;
}
