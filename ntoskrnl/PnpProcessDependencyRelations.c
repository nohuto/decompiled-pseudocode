/*
 * XREFs of PnpProcessDependencyRelations @ 0x14086220C
 * Callers:
 *     PnpProcessRelation @ 0x140861E18 (PnpProcessRelation.c)
 * Callees:
 *     PipIsDevNodeDNStarted @ 0x140245658 (PipIsDevNodeDNStarted.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     PiGetDependentList @ 0x1406819C8 (PiGetDependentList.c)
 *     PpDevNodeUnlockTree @ 0x1406CB8B0 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406CB90C (PnpAcquireDependencyRelationsLock.c)
 *     PiEnumerateDependentListEntry @ 0x140838DB4 (PiEnumerateDependentListEntry.c)
 *     PnpProcessRelation @ 0x140861E18 (PnpProcessRelation.c)
 */

__int64 __fastcall PnpProcessDependencyRelations(__int64 a1)
{
  __int64 v1; // rbx
  __int64 *DependentList; // rsi
  __int64 *i; // rbx

  v1 = *(_QWORD *)(a1 + 32);
  PnpAcquireDependencyRelationsLock(0);
  DependentList = PiGetDependentList(v1);
  for ( i = (__int64 *)*DependentList; i != DependentList; i = (__int64 *)*i )
    PiEnumerateDependentListEntry((__int64)i);
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0);
  return 0LL;
}
