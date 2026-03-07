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
