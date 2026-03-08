/*
 * XREFs of ACPIBuildSynchronizationRequestInternal @ 0x1C0013BE0
 * Callers:
 *     ACPIBuildDeviceDpc @ 0x1C000BE30 (ACPIBuildDeviceDpc.c)
 *     ACPIBuildSynchronizationRequest @ 0x1C0013BC0 (ACPIBuildSynchronizationRequest.c)
 *     ACPIInternalUpdateDeviceStatus @ 0x1C002F084 (ACPIInternalUpdateDeviceStatus.c)
 *     OSNotifyDeviceCheck @ 0x1C0032C80 (OSNotifyDeviceCheck.c)
 *     OSNotifyDeviceEject @ 0x1C0032E08 (OSNotifyDeviceEject.c)
 *     OSNotifyDeviceEnum @ 0x1C0032E9C (OSNotifyDeviceEnum.c)
 * Callees:
 *     memset @ 0x1C0002180 (memset.c)
 *     ACPIBuildScheduleDpc @ 0x1C0013794 (ACPIBuildScheduleDpc.c)
 */

__int64 __fastcall ACPIBuildSynchronizationRequestInternal(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  _QWORD *v8; // rbx
  KIRQL v10; // si
  KIRQL v11; // al
  __int64 v12; // rdx
  KIRQL v13; // di

  v8 = ExAllocateFromNPagedLookasideList(&BuildRequestLookAsideList);
  if ( !v8 )
    return 3221225626LL;
  v10 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  if ( *(_DWORD *)(a1 + 732) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 732));
    memset(v8, 0, 0x88uLL);
    *((_DWORD *)v8 + 4) = 1599293264;
    v8[16] = &AcpiBuildSynchronizationList;
    *((_DWORD *)v8 + 6) = 3;
    v8[10] = &AcpiBuildDeviceList;
    v8[8] = a2;
    v8[9] = a3;
    v8[5] = a1;
    *((_DWORD *)v8 + 5) = 4106;
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v10);
    v11 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
    v12 = AcpiBuildQueueList;
    v13 = v11;
    if ( *(__int64 **)(AcpiBuildQueueList + 8) != &AcpiBuildQueueList )
      __fastfail(3u);
    *v8 = AcpiBuildQueueList;
    v8[1] = &AcpiBuildQueueList;
    *(_QWORD *)(v12 + 8) = v8;
    AcpiBuildQueueList = (__int64)v8;
    if ( a5 )
      ACPIBuildScheduleDpc();
    KeReleaseSpinLock(&AcpiBuildQueueLock, v13);
    return 259LL;
  }
  else
  {
    ExFreeToNPagedLookasideList(&BuildRequestLookAsideList, v8);
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v10);
    return 3221226166LL;
  }
}
