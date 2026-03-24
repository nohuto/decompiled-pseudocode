/*
 * XREFs of PnpStartedDeviceNodeDependencyCheck @ 0x1407477A0
 * Callers:
 *     PipProcessStartPhase3 @ 0x140747010 (PipProcessStartPhase3.c)
 *     PnpDeleteLockedDeviceNode @ 0x14074B3F8 (PnpDeleteLockedDeviceNode.c)
 *     PipProcessRestartPhase2 @ 0x1408B5380 (PipProcessRestartPhase2.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402CBB00 (ExReleaseResourceLite.c)
 *     PpDevNodeUnlockTree @ 0x1406B29A0 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406B29FC (PnpAcquireDependencyRelationsLock.c)
 *     PipAttemptDependentsStart @ 0x1407477D8 (PipAttemptDependentsStart.c)
 */

void __fastcall PnpStartedDeviceNodeDependencyCheck(__int64 a1)
{
  PnpAcquireDependencyRelationsLock(0);
  PipAttemptDependentsStart(a1);
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0);
}
