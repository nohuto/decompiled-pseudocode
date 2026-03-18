/*
 * XREFs of PnpRequestDeviceRemoval @ 0x14086788C
 * Callers:
 *     PipCallDriverAddDevice @ 0x1406C82E4 (PipCallDriverAddDevice.c)
 *     PipProcessStartPhase2 @ 0x1407913A8 (PipProcessStartPhase2.c)
 *     PiUpdateGuestAssignedState @ 0x140792AD8 (PiUpdateGuestAssignedState.c)
 *     PiProcessQueryDeviceState @ 0x14079379C (PiProcessQueryDeviceState.c)
 *     PipEnumerateCompleted @ 0x140795910 (PipEnumerateCompleted.c)
 *     IopQueueDeviceResetEvent @ 0x14095769C (IopQueueDeviceResetEvent.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x140963800 (PiProfileUpdateDeviceTreeCallback.c)
 *     PipDmaGuardBlockAddDevice @ 0x14096B1FC (PipDmaGuardBlockAddDevice.c)
 *     PnpReallocateResources @ 0x14096D5F8 (PnpReallocateResources.c)
 *     PnpRebalance @ 0x14096E968 (PnpRebalance.c)
 *     PipProcessRestartPhase2 @ 0x14096F4B8 (PipProcessRestartPhase2.c)
 *     PiProcessDriversLoadedOnSecureDevice @ 0x14096F5B8 (PiProcessDriversLoadedOnSecureDevice.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     PpDevNodeUnlockTree @ 0x1406C99AC (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406C9A08 (PnpAcquireDependencyRelationsLock.c)
 *     PnpSetTargetDeviceRemove @ 0x140868120 (PnpSetTargetDeviceRemove.c)
 *     PnpRequestDeviceRemovalWorker @ 0x140869470 (PnpRequestDeviceRemovalWorker.c)
 */

__int64 __fastcall PnpRequestDeviceRemoval(__int64 a1, char a2, int a3, int a4)
{
  int v8; // r8d
  int v10; // [rsp+40h] [rbp-38h]
  int v11; // [rsp+48h] [rbp-30h]

  if ( !a1 )
    return 3221225486LL;
  PnpAcquireDependencyRelationsLock(1);
  LOBYTE(v8) = a2;
  PnpRequestDeviceRemovalWorker(a1, a1, v8, 2, 0);
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0);
  return PnpSetTargetDeviceRemove(*(PVOID *)(a1 + 32), 1, a3, a4, 0LL, v10, v11, 0LL, 0LL, 0LL, 0LL);
}
