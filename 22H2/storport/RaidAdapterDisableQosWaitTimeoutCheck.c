/*
 * XREFs of RaidAdapterDisableQosWaitTimeoutCheck @ 0x1C002C810
 * Callers:
 *     RaidDeleteUnit @ 0x1C0016540 (RaidDeleteUnit.c)
 *     RaidUnitDisableWaitCheckTimer @ 0x1C004A900 (RaidUnitDisableWaitCheckTimer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAdapterDisableQosWaitTimeoutCheck(__int64 a1)
{
  int v2; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 5648), &LockHandle);
  v2 = *(_DWORD *)(a1 + 5656);
  if ( v2 == 1 )
  {
    KeCancelTimer((PKTIMER)(a1 + 5520));
    v2 = *(_DWORD *)(a1 + 5656);
  }
  *(_DWORD *)(a1 + 5656) = v2 - 1;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
