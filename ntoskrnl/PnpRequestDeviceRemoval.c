/*
 * XREFs of PnpRequestDeviceRemoval @ 0x140862294
 * Callers:
 *     PipProcessStartPhase2 @ 0x1406817A0 (PipProcessStartPhase2.c)
 *     PiUpdateGuestAssignedState @ 0x140682FF0 (PiUpdateGuestAssignedState.c)
 *     PiProcessQueryDeviceState @ 0x140683054 (PiProcessQueryDeviceState.c)
 *     PipEnumerateCompleted @ 0x140685510 (PipEnumerateCompleted.c)
 *     PipCallDriverAddDevice @ 0x1406C644C (PipCallDriverAddDevice.c)
 *     IopQueueDeviceResetEvent @ 0x14095467C (IopQueueDeviceResetEvent.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x1409607E0 (PiProfileUpdateDeviceTreeCallback.c)
 *     PipDmaGuardBlockAddDevice @ 0x1409681DC (PipDmaGuardBlockAddDevice.c)
 *     PnpReallocateResources @ 0x14096A5D8 (PnpReallocateResources.c)
 *     PnpRebalance @ 0x14096B948 (PnpRebalance.c)
 *     PipProcessRestartPhase2 @ 0x14096C498 (PipProcessRestartPhase2.c)
 *     PiProcessDriversLoadedOnSecureDevice @ 0x14096C598 (PiProcessDriversLoadedOnSecureDevice.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     PpDevNodeUnlockTree @ 0x1406CB8B0 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406CB90C (PnpAcquireDependencyRelationsLock.c)
 *     PnpRequestDeviceRemovalWorker @ 0x140861CA0 (PnpRequestDeviceRemovalWorker.c)
 *     PnpSetTargetDeviceRemove @ 0x140862DC8 (PnpSetTargetDeviceRemove.c)
 */

__int64 __fastcall PnpRequestDeviceRemoval(__int64 a1, char a2, int a3, int a4)
{
  int v9; // [rsp+40h] [rbp-38h]
  int v10; // [rsp+48h] [rbp-30h]

  if ( !a1 )
    return 3221225486LL;
  PnpAcquireDependencyRelationsLock(1);
  PnpRequestDeviceRemovalWorker(a1, a1, a2, 2, 0);
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0);
  return PnpSetTargetDeviceRemove(*(PVOID *)(a1 + 32), 1, a3, a4, 0LL, v9, v10, 0LL, 0LL, 0LL, 0LL);
}
