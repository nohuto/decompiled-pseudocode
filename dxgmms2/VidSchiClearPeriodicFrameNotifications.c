/*
 * XREFs of VidSchiClearPeriodicFrameNotifications @ 0x1C0018928
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1C0002730 (VidSchiSetFlipDevice.c)
 *     VidSchTerminateAdapter @ 0x1C0108B80 (VidSchTerminateAdapter.c)
 * Callees:
 *     VidSchDestroyPeriodicFrameNotification @ 0x1C003EF80 (VidSchDestroyPeriodicFrameNotification.c)
 */

void __fastcall VidSchiClearPeriodicFrameNotifications(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rsi
  void *v7; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 8LL * a2 + 3200);
  v4 = *(_QWORD *)(v3 + 78800);
  if ( v4 )
  {
    v5 = 0LL;
    v6 = 8LL;
    do
    {
      v7 = *(void **)(v5 + v4);
      if ( v7 )
      {
        VidSchDestroyPeriodicFrameNotification(v7);
        v4 = *(_QWORD *)(v3 + 78800);
      }
      v5 += 8LL;
      --v6;
    }
    while ( v6 );
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1728), &LockHandle);
    ExFreePoolWithTag(*(PVOID *)(v3 + 78800), 0x62616956u);
    *(_QWORD *)(v3 + 78800) = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
