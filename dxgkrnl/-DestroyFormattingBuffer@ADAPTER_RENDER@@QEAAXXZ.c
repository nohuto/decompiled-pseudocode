/*
 * XREFs of ?DestroyFormattingBuffer@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0041A04
 * Callers:
 *     ??1ADAPTER_RENDER@@QEAA@XZ @ 0x1C02BB6EC (--1ADAPTER_RENDER@@QEAA@XZ.c)
 *     ?EnableFormattingBuffer@ADAPTER_RENDER@@QEAAXH@Z @ 0x1C02BC2C0 (-EnableFormattingBuffer@ADAPTER_RENDER@@QEAAXH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ADAPTER_RENDER::DestroyFormattingBuffer(ADAPTER_RENDER *this)
{
  void *v1; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = (void *)*((_QWORD *)this + 156);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 157, &LockHandle);
  *((_QWORD *)this + 156) = 0LL;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}
