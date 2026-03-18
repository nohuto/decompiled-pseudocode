/*
 * XREFs of PnpReleaseDependencyRelationsLock @ 0x1408399EC
 * Callers:
 *     IoResolveDependency @ 0x1403965C0 (IoResolveDependency.c)
 *     PiDeviceDependencyInit @ 0x140B43154 (PiDeviceDependencyInit.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     PpDevNodeUnlockTree @ 0x1406C99AC (PpDevNodeUnlockTree.c)
 */

void PnpReleaseDependencyRelationsLock()
{
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0);
}
