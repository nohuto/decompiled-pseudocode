/*
 * XREFs of ?GuestPaused@HOSTVMMONITORMAPPING@@QEAAXXZ @ 0x1C005729C
 * Callers:
 *     ?VmBusChannelSuspend@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C03751E0 (-VmBusChannelSuspend@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HOSTVMMONITORMAPPING::GuestPaused(KSPIN_LOCK *this)
{
  char *v1; // rbx
  char *v3; // [rsp+28h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF
  char v5; // [rsp+48h] [rbp-10h]

  v1 = (char *)(this + 2);
  v5 = 0;
  v3 = (char *)(this + 2);
  KeAcquireInStackQueuedSpinLock(this + 2, &LockHandle);
  *((_QWORD *)v1 + 1) = KeGetCurrentThread();
  *((_BYTE *)this + 32) = 1;
  v5 = 0;
  *((_QWORD *)v3 + 1) = 0LL;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
