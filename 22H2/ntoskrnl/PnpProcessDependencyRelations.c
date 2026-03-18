/*
 * XREFs of PnpProcessDependencyRelations @ 0x14086931C
 * Callers:
 *     PnpProcessRelation @ 0x140868F28 (PnpProcessRelation.c)
 * Callees:
 *     PipIsDevNodeDNStarted @ 0x14022B1A0 (PipIsDevNodeDNStarted.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     PpDevNodeUnlockTree @ 0x1406C99AC (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406C9A08 (PnpAcquireDependencyRelationsLock.c)
 *     PiGetDependentList @ 0x14079C828 (PiGetDependentList.c)
 *     PiEnumerateDependentListEntry @ 0x140839E64 (PiEnumerateDependentListEntry.c)
 *     PnpProcessRelation @ 0x140868F28 (PnpProcessRelation.c)
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
