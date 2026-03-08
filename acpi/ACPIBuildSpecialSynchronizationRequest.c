/*
 * XREFs of ACPIBuildSpecialSynchronizationRequest @ 0x1C00137D8
 * Callers:
 *     ACPIFlushQueuesUnload @ 0x1C0014558 (ACPIFlushQueuesUnload.c)
 *     ACPITableLoad @ 0x1C003F170 (ACPITableLoad.c)
 *     ACPITableLoadNotifyPnp @ 0x1C003F500 (ACPITableLoadNotifyPnp.c)
 *     ACPITableUnload @ 0x1C003F7F0 (ACPITableUnload.c)
 *     ACPIBuildFlushQueue @ 0x1C007D42C (ACPIBuildFlushQueue.c)
 *     ACPIInitStartACPI @ 0x1C00A8DE0 (ACPIInitStartACPI.c)
 * Callees:
 *     memset @ 0x1C0002180 (memset.c)
 *     ACPIBuildScheduleDpc @ 0x1C0013794 (ACPIBuildScheduleDpc.c)
 */

__int64 __fastcall ACPIBuildSpecialSynchronizationRequest(__int64 a1, __int64 a2, __int64 a3, int a4, char a5)
{
  _QWORD *v9; // rbx
  KIRQL v11; // si
  KIRQL v12; // al
  __int64 v13; // rdx
  KIRQL v14; // di

  v9 = ExAllocateFromNPagedLookasideList(&BuildRequestLookAsideList);
  if ( !v9 )
    return 3221225626LL;
  v11 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  if ( *(_DWORD *)(a1 + 732) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 732));
    memset(v9, 0, 0x88uLL);
    *((_DWORD *)v9 + 4) = 1599293264;
    v9[16] = &AcpiBuildSpecialSynchronizationList;
    *((_DWORD *)v9 + 6) = 3;
    v9[8] = a2;
    v9[9] = a3;
    v9[5] = a1;
    *((_DWORD *)v9 + 20) = a4;
    *((_DWORD *)v9 + 5) = 4120;
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v11);
    v12 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
    v13 = AcpiBuildQueueList;
    v14 = v12;
    if ( *(__int64 **)(AcpiBuildQueueList + 8) != &AcpiBuildQueueList )
      __fastfail(3u);
    *v9 = AcpiBuildQueueList;
    v9[1] = &AcpiBuildQueueList;
    *(_QWORD *)(v13 + 8) = v9;
    AcpiBuildQueueList = (__int64)v9;
    if ( a5 )
      ACPIBuildScheduleDpc();
    KeReleaseSpinLock(&AcpiBuildQueueLock, v14);
    return 259LL;
  }
  else
  {
    ExFreeToNPagedLookasideList(&BuildRequestLookAsideList, v9);
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v11);
    return 3221226166LL;
  }
}
