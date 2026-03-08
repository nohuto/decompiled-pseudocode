/*
 * XREFs of DpiMiracastChunkInfoCallbackDpc @ 0x1C005F250
 * Callers:
 *     <none>
 * Callees:
 *     DpSynchronizeExecution @ 0x1C000EB40 (DpSynchronizeExecution.c)
 */

void __fastcall DpiMiracastChunkInfoCallbackDpc(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  _QWORD v7[2]; // [rsp+30h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF
  BOOLEAN v9; // [rsp+78h] [rbp+10h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLockAtDpcLevel(&SpinLock, &LockHandle);
  v5 = DeferredContext[54];
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 64);
    v7[0] = DeferredContext[63];
    v7[1] = DeferredContext[64];
    DpSynchronizeExecution(v5, (KSYNCHRONIZE_ROUTINE *)DpiMiracastMoveChunkList, v7, *(_DWORD *)(v6 + 3924), &v9);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
}
