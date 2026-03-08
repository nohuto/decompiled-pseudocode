/*
 * XREFs of VidSchGetYieldPercentage @ 0x1C003FFC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VidSchGetYieldPercentage(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1728), &LockHandle);
  *a3 = *(_DWORD *)(a1 + 208);
  *a2 ^= (*a2 ^ (*(_DWORD *)(a1 + 2536) >> 2)) & 1;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
