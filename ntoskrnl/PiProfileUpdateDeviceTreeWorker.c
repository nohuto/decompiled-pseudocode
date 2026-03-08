/*
 * XREFs of PiProfileUpdateDeviceTreeWorker @ 0x1409608A0
 * Callers:
 *     <none>
 * Callees:
 *     PpDevNodeUnlockTree @ 0x1406CB8B0 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1406CB944 (PpDevNodeLockTree.c)
 *     PipForDeviceNodeSubtree @ 0x1407855F8 (PipForDeviceNodeSubtree.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PiProfileUpdateDeviceTreeWorker(PVOID P)
{
  PpDevNodeLockTree(1);
  PipForDeviceNodeSubtree((__int64)IopRootDeviceNode, (__int64)PiProfileUpdateDeviceTreeCallback, 0LL);
  PpDevNodeUnlockTree(1);
  ExFreePoolWithTag(P, 0);
}
