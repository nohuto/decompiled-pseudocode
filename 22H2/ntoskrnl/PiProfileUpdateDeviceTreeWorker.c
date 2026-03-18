/*
 * XREFs of PiProfileUpdateDeviceTreeWorker @ 0x1409638C0
 * Callers:
 *     <none>
 * Callees:
 *     PpDevNodeUnlockTree @ 0x1406C99AC (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1406C9A40 (PpDevNodeLockTree.c)
 *     PipForDeviceNodeSubtree @ 0x1407CD688 (PipForDeviceNodeSubtree.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall PiProfileUpdateDeviceTreeWorker(PVOID P)
{
  PpDevNodeLockTree(1);
  PipForDeviceNodeSubtree((__int64)IopRootDeviceNode, (__int64)PiProfileUpdateDeviceTreeCallback, 0LL);
  PpDevNodeUnlockTree(1);
  ExFreePoolWithTag(P, 0);
}
