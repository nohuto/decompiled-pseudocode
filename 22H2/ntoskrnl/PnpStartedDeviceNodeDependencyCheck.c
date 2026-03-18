/*
 * XREFs of PnpStartedDeviceNodeDependencyCheck @ 0x14079C684
 * Callers:
 *     PipProcessStartPhase3 @ 0x14079BED4 (PipProcessStartPhase3.c)
 *     PnpCancelRemoveLockedDeviceNode @ 0x140958FEC (PnpCancelRemoveLockedDeviceNode.c)
 *     PipProcessRestartPhase2 @ 0x14096F4B8 (PipProcessRestartPhase2.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     PpDevNodeUnlockTree @ 0x1406C99AC (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406C9A08 (PnpAcquireDependencyRelationsLock.c)
 *     PipAttemptDependentsStart @ 0x14079C6BC (PipAttemptDependentsStart.c)
 */

void __fastcall PnpStartedDeviceNodeDependencyCheck(__int64 a1)
{
  PnpAcquireDependencyRelationsLock(0);
  PipAttemptDependentsStart(a1);
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0);
}
