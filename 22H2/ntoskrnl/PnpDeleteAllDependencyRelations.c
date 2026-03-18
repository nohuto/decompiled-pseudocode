/*
 * XREFs of PnpDeleteAllDependencyRelations @ 0x14078E96C
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1403B6A4C (PnpRemoveLockedDeviceNode.c)
 *     IopDeleteDevice @ 0x14078E900 (IopDeleteDevice.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     PpDevNodeUnlockTree @ 0x1406C99AC (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406C9A08 (PnpAcquireDependencyRelationsLock.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x14079C854 (PipProcessRebuildPowerRelationsQueue.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x140839A10 (PipAddDependentsToRebuildPowerRelationsQueue.c)
 *     PipDeleteAllDependencyRelations @ 0x1409544C0 (PipDeleteAllDependencyRelations.c)
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
