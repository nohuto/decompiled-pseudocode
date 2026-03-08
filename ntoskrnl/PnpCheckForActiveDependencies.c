/*
 * XREFs of PnpCheckForActiveDependencies @ 0x1406CD3AC
 * Callers:
 *     PiProcessQueryDeviceState @ 0x140683054 (PiProcessQueryDeviceState.c)
 *     PipProcessDevNodeTree @ 0x1406CCD80 (PipProcessDevNodeTree.c)
 * Callees:
 *     PipIsDevNodeDNStarted @ 0x140245658 (PipIsDevNodeDNStarted.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     PipCheckForUnsatisfiedDependencies @ 0x1406CB7E0 (PipCheckForUnsatisfiedDependencies.c)
 *     PpDevNodeUnlockTree @ 0x1406CB8B0 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406CB90C (PnpAcquireDependencyRelationsLock.c)
 */

char __fastcall PnpCheckForActiveDependencies(__int64 a1, unsigned __int8 a2)
{
  char v5; // bl

  if ( (unsigned int)PipIsDevNodeDNStarted(a1) )
    return 0;
  PnpAcquireDependencyRelationsLock(0);
  v5 = PipCheckForUnsatisfiedDependencies(a1, a2);
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0);
  return v5;
}
