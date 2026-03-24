/*
 * XREFs of ACPIRegisterForDeviceNotificationsByPowerInfo @ 0x1C000E024
 * Callers:
 *     ACPIRegisterForDeviceNotifications @ 0x1C000DFE0 (ACPIRegisterForDeviceNotifications.c)
 *     ACPIRegisterForDeviceNotificationsByDeviceExtension @ 0x1C005C688 (ACPIRegisterForDeviceNotificationsByDeviceExtension.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIRegisterForDeviceNotificationsByPowerInfo(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  unsigned int v7; // esi
  _QWORD *PoolWithTag; // rax
  void *v9; // rbx
  _QWORD *v10; // r12
  KIRQL v11; // al

  v4 = a1 - 336;
  v7 = -1073741823;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x4D706341u);
  v9 = PoolWithTag;
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    PoolWithTag[2] = DispatchNotificationWorker;
    PoolWithTag[3] = v4;
  }
  v11 = KeAcquireSpinLockRaiseToDpc(&NotifyHandlerLock);
  if ( !*(_QWORD *)(a1 + 16) )
  {
    if ( *(_QWORD *)(v4 + 888) || (*(_QWORD *)(v4 + 888) = v9, v9 = 0LL, v10) )
    {
      *(_QWORD *)(a1 + 16) = a2;
      v7 = 0;
      *(_QWORD *)(a1 + 24) = a3;
    }
  }
  KeReleaseSpinLock(&NotifyHandlerLock, v11);
  if ( v9 )
    ExFreePoolWithTag(v9, 0x4D706341u);
  return v7;
}
