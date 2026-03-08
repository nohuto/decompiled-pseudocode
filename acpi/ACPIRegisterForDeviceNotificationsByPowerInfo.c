/*
 * XREFs of ACPIRegisterForDeviceNotificationsByPowerInfo @ 0x1C0039774
 * Callers:
 *     ACPIRegisterForDeviceNotifications @ 0x1C00396E0 (ACPIRegisterForDeviceNotifications.c)
 *     ACPIRegisterForDeviceNotificationsByDeviceExtension @ 0x1C0039748 (ACPIRegisterForDeviceNotificationsByDeviceExtension.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIRegisterForDeviceNotificationsByPowerInfo(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  unsigned int v7; // esi
  _QWORD *Pool2; // rax
  void *v9; // rbx
  _QWORD *v10; // r12
  KIRQL v11; // al

  v4 = a1 - 376;
  v7 = -1073741823;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 32LL, 1299211073LL);
  v9 = Pool2;
  v10 = Pool2;
  if ( Pool2 )
  {
    *Pool2 = 0LL;
    Pool2[2] = DispatchNotificationWorker;
    Pool2[3] = v4;
  }
  v11 = KeAcquireSpinLockRaiseToDpc(&NotifyHandlerLock);
  if ( !*(_QWORD *)(a1 + 16) )
  {
    if ( *(_QWORD *)(v4 + 928) || (*(_QWORD *)(v4 + 928) = v9, v9 = 0LL, v10) )
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
