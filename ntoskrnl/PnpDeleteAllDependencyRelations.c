/*
 * XREFs of PnpDeleteAllDependencyRelations @ 0x140782F5C
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1403B1D8C (PnpRemoveLockedDeviceNode.c)
 *     IopDeleteDevice @ 0x140782EF0 (IopDeleteDevice.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1406819F4 (PipProcessRebuildPowerRelationsQueue.c)
 *     PpDevNodeUnlockTree @ 0x1406CB8B0 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406CB90C (PnpAcquireDependencyRelationsLock.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x140838960 (PipAddDependentsToRebuildPowerRelationsQueue.c)
 *     PipDeleteAllDependencyRelations @ 0x1409514A0 (PipDeleteAllDependencyRelations.c)
 */

__int64 __fastcall PnpDeleteAllDependencyRelations(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rsi

  v1 = 0;
  if ( a1 )
  {
    PnpAcquireDependencyRelationsLock(1);
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 80LL);
    if ( v3 )
    {
      PipAddDependentsToRebuildPowerRelationsQueue(a1);
      PipDeleteAllDependencyRelations(a1);
    }
    ExReleaseResourceLite(&PiDependencyRelationsLock);
    PpDevNodeUnlockTree(0);
    if ( v3 )
      PipProcessRebuildPowerRelationsQueue();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
