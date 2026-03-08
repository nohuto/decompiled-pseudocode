/*
 * XREFs of VidSchiNeedToForcePreemptNode @ 0x1C0017AA4
 * Callers:
 *     VidSchiCheckHwProgress @ 0x1C00A5940 (VidSchiCheckHwProgress.c)
 * Callees:
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x1C0002D40 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 *     VidSchiProfilePerformanceTick @ 0x1C0006E50 (VidSchiProfilePerformanceTick.c)
 *     VidSchiIncrementContextReference @ 0x1C00146D0 (VidSchiIncrementContextReference.c)
 */

char __fastcall VidSchiNeedToForcePreemptNode(__int64 a1)
{
  __int64 v1; // rbp
  char v3; // si
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  v3 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 1728), &LockHandle);
  if ( *(_DWORD *)(a1 + 2888) && !*(_DWORD *)(a1 + 2896) )
  {
    v5 = *(_QWORD *)(a1 + 96);
    if ( v5 == *(_QWORD *)(a1 + 136) )
    {
      v6 = *(_QWORD *)(a1 + 8LL * *(unsigned int *)(a1 + 1560) + 1568);
      *(_QWORD *)(a1 + 232) = v6;
      VidSchiIncrementContextReference(v6);
      v3 = 1;
      VidSchiProfilePerformanceTick(1LL, v1, a1, 0LL, v6, 0LL, 0LL, -18LL);
    }
    else if ( v5 == *(_QWORD *)(a1 + 144) )
    {
      v7 = *(_QWORD *)(a1 + 8LL * *(unsigned int *)(a1 + 1560) + 1568);
      if ( v7 )
        VidSchiUpdateLastCompletedPresentTimestamp(v7, 0LL, 1);
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v3;
}
