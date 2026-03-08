/*
 * XREFs of IopCleanupNotifications @ 0x1403A62E8
 * Callers:
 *     IopDeleteFileObjectExtension @ 0x140298CFC (IopDeleteFileObjectExtension.c)
 *     IopDeleteDevice @ 0x140782EF0 (IopDeleteDevice.c)
 *     IopUnloadDriver @ 0x1408549C8 (IopUnloadDriver.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ExUnregisterCallback @ 0x140302720 (ExUnregisterCallback.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall IopCleanupNotifications(PVOID a1, PVOID a2)
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID *v5; // rdi
  PVOID *v6; // rbx
  PVOID v7; // rcx
  PVOID *v8; // rcx
  PVOID **v9; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&IopSessionNotificationLock, 0LL);
  v5 = (PVOID *)IopSessionNotificationQueueHead;
  while ( v5 != &IopSessionNotificationQueueHead )
  {
    v6 = v5;
    v5 = (PVOID *)*v5;
    v7 = v6[2];
    if ( v7 == a1 && (!a2 || v6[5] == a2) )
    {
      ObfDereferenceObject(v7);
      ExUnregisterCallback(v6[4]);
      v8 = (PVOID *)*v6;
      if ( *((PVOID **)*v6 + 1) != v6 || (v9 = (PVOID **)v6[1], *v9 != v6) )
        __fastfail(3u);
      *v9 = v8;
      v8[1] = v9;
      ExFreePoolWithTag(v6, 0);
    }
  }
  ExReleasePushLockEx((__int64 *)&IopSessionNotificationLock, 0LL);
  KeLeaveCriticalRegion();
}
