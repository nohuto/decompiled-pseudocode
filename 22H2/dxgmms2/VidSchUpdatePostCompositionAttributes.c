/*
 * XREFs of VidSchUpdatePostCompositionAttributes @ 0x1C0035990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VidSchUpdatePostCompositionAttributes(__int64 a1, unsigned int a2, int a3, __int128 *a4, __int128 *a5)
{
  __int128 v6; // xmm6
  __int64 v7; // rbx
  __int128 v9; // xmm7
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v6 = *a4;
  v7 = a2;
  v9 = *a5;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1712), &LockHandle);
  *(_BYTE *)(*(_QWORD *)(a1 + 8 * v7 + 3104) + 2304LL) = a3 != 0;
  *(_OWORD *)(*(_QWORD *)(a1 + 8 * v7 + 3104) + 2308LL) = v6;
  *(_OWORD *)(*(_QWORD *)(a1 + 8 * v7 + 3104) + 2324LL) = v9;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
