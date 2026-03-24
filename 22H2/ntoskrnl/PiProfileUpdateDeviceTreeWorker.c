/*
 * XREFs of PiProfileUpdateDeviceTreeWorker @ 0x1408AB180
 * Callers:
 *     <none>
 * Callees:
 *     PipForDeviceNodeSubtree @ 0x14069B540 (PipForDeviceNodeSubtree.c)
 *     PpDevNodeUnlockTree @ 0x1406B29A0 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1406B2A34 (PpDevNodeLockTree.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall PiProfileUpdateDeviceTreeWorker(PVOID P)
{
  PpDevNodeLockTree(1);
  PipForDeviceNodeSubtree((__int64)IopRootDeviceNode, (__int64)PiProfileUpdateDeviceTreeCallback, 0LL);
  PpDevNodeUnlockTree(1);
  ExFreePoolWithTag(P, 0);
}
