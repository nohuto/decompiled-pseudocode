/*
 * XREFs of VidSchQueryLastCompletedPresentIdDWM @ 0x1C00142F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchQueryLastCompletedPresentIdDWM(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  __int64 v6; // rsi
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v14; // [rsp+38h] [rbp-20h] BYREF

  v3 = 0;
  if ( !a1 || !a3 )
  {
    v12 = WdLogNewEntry5_WdAssertion(a1, a2, a3);
    *(_QWORD *)(v12 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v12);
    return 3221225485LL;
  }
  v6 = *(_QWORD *)(a1 + 32);
  v7 = (unsigned int)a2;
  if ( (unsigned int)a2 >= *(_DWORD *)(v6 + 40) )
  {
    v11 = WdLogNewEntry5_WdWarning(a1, a2);
    *(_QWORD *)(v11 + 24) = v7;
    *(_QWORD *)(v11 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v11);
    return 3221225485LL;
  }
  _mm_lfence();
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 1712), &v14);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v6 + 1720), &LockHandle);
  *(_DWORD *)a3 = *(_DWORD *)(a1 + 4 * v7 + 508);
  *(_DWORD *)(a3 + 4) = *(_DWORD *)(a1 + 8 * v7 + 576);
  *(_QWORD *)(a3 + 8) = *(_QWORD *)(a1 + 8 * v7 + 704);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  *(_DWORD *)(a3 + 16) = *(_DWORD *)(*(_QWORD *)(v6 + 8 * v7 + 3104) + 33192LL);
  *(_QWORD *)(a3 + 24) = *(_QWORD *)(*(_QWORD *)(v6 + 8 * v7 + 3104) + 33200LL);
  v8 = *(int *)(*(_QWORD *)(v6 + 8 * v7 + 3104) + 172LL);
  if ( (int)v8 > -1 )
    v9 = *(_QWORD *)(v6 + 3232) + 152 * v8;
  else
    v9 = 0LL;
  if ( v9 )
    v3 = *(_DWORD *)(v9 + 100);
  *(_DWORD *)(a3 + 32) = v3;
  KeReleaseInStackQueuedSpinLock(&v14);
  return 0LL;
}
