/*
 * XREFs of IoLockUnlockPnpDeviceTree @ 0x140951CA0
 * Callers:
 *     PopFxBuildDripsBlockingDeviceList @ 0x140586854 (PopFxBuildDripsBlockingDeviceList.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x140981B94 (PopFxDestroyDripsBlockingDeviceList.c)
 *     PopDirectedDripsUmMarkTestDevices @ 0x14099C874 (PopDirectedDripsUmMarkTestDevices.c)
 * Callees:
 *     PpDevNodeUnlockTree @ 0x1406CB8B0 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1406CB944 (PpDevNodeLockTree.c)
 */

void __fastcall IoLockUnlockPnpDeviceTree(char a1)
{
  if ( a1 )
    PpDevNodeLockTree(0);
  else
    PpDevNodeUnlockTree(0);
}
