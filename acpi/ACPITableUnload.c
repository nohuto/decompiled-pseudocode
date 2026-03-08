/*
 * XREFs of ACPITableUnload @ 0x1C003F7F0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildScheduleDpc @ 0x1C0013794 (ACPIBuildScheduleDpc.c)
 *     ACPIBuildSpecialSynchronizationRequest @ 0x1C00137D8 (ACPIBuildSpecialSynchronizationRequest.c)
 *     ACPIFlushQueuesUnload @ 0x1C0014558 (ACPIFlushQueuesUnload.c)
 *     ACPIDevicePowerFlushQueue @ 0x1C001EABC (ACPIDevicePowerFlushQueue.c)
 *     ACPIGpeBuildEventMasks @ 0x1C002BE44 (ACPIGpeBuildEventMasks.c)
 *     ACPIGpeClearEventMasks @ 0x1C002C0D8 (ACPIGpeClearEventMasks.c)
 *     ACPIBuildFlushQueue @ 0x1C007D42C (ACPIBuildFlushQueue.c)
 */

__int64 __fastcall ACPITableUnload(__int64 a1, int a2, __int64 a3)
{
  unsigned int v3; // edi
  KIRQL v5; // al
  int v6; // ebx
  KIRQL v7; // al
  int v8; // ebx
  KIRQL v9; // bl

  v3 = 0;
  if ( a2 == 1 )
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
    v6 = ++AcpiTableUnloadDelta;
    KeReleaseSpinLock(&AcpiBuildQueueLock, v5);
    if ( v6 == 1 )
    {
      if ( !*((_BYTE *)AcpiInformation + 133) )
        ACPIGpeClearEventMasks();
      if ( a3 )
      {
        return (unsigned int)ACPIFlushQueuesUnload(RootDeviceExtension, a3, 1);
      }
      else
      {
        ACPIBuildFlushQueue(RootDeviceExtension, 0LL);
        ACPIDevicePowerFlushQueue((_QWORD *)RootDeviceExtension);
      }
    }
  }
  else
  {
    v7 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
    v8 = --AcpiTableUnloadDelta;
    KeReleaseSpinLock(&AcpiBuildQueueLock, v7);
    if ( !v8 )
    {
      if ( !*((_BYTE *)AcpiInformation + 133) )
        ACPIGpeBuildEventMasks();
      v3 = ACPIBuildSpecialSynchronizationRequest(RootDeviceExtension, (__int64)ACPITableUnloadCallBack, a3, 127, 0);
      v9 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
      ACPIBuildScheduleDpc();
      KeReleaseSpinLock(&AcpiBuildQueueLock, v9);
    }
  }
  return v3;
}
