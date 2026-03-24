/*
 * XREFs of ACPIPendingInvalidate @ 0x1C002E6BC
 * Callers:
 *     ACPIBuildIssueInvalidateRelationsWorker @ 0x1C002AA94 (ACPIBuildIssueInvalidateRelationsWorker.c)
 *     ACPIBuildIssueNotifyInvalidateRelations @ 0x1C002E630 (ACPIBuildIssueNotifyInvalidateRelations.c)
 * Callees:
 *     <none>
 */

bool __fastcall ACPIPendingInvalidate(__int64 a1)
{
  __int64 v1; // rdx

  v1 = a1;
  if ( (*(_DWORD *)(a1 + 960) & 0x200LL) != 0 )
    return 1;
  do
    a1 = *(_QWORD *)(a1 + 752);
  while ( a1 && (*(_DWORD *)(a1 + 960) & 0x200LL) == 0 );
  _InterlockedOr64((volatile signed __int64 *)(v1 + 960), 0x200uLL);
  return a1 != 0;
}
