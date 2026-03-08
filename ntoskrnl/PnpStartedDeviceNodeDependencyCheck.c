/*
 * XREFs of PnpStartedDeviceNodeDependencyCheck @ 0x140681C08
 * Callers:
 *     PipProcessStartPhase3 @ 0x14068203C (PipProcessStartPhase3.c)
 *     PnpCancelRemoveLockedDeviceNode @ 0x140955FCC (PnpCancelRemoveLockedDeviceNode.c)
 *     PipProcessRestartPhase2 @ 0x14096C498 (PipProcessRestartPhase2.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     PipAttemptDependentsStart @ 0x14068185C (PipAttemptDependentsStart.c)
 *     PpDevNodeUnlockTree @ 0x1406CB8B0 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406CB90C (PnpAcquireDependencyRelationsLock.c)
 */

__int64 __fastcall PnpStartedDeviceNodeDependencyCheck(__int64 a1)
{
  PnpAcquireDependencyRelationsLock(0LL);
  PipAttemptDependentsStart(a1);
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  return PpDevNodeUnlockTree(0LL);
}
