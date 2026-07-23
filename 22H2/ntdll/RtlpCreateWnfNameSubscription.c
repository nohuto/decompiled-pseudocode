/*
 * XREFs of RtlpCreateWnfNameSubscription @ 0x18004277C
 * Callers:
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x1800424AC (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     memset @ 0x1800A4600 (memset.c)
 */

__int64 __fastcall RtlpCreateWnfNameSubscription(volatile signed __int32 **a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  _RTL_SRWLOCK *v6; // rbp
  _QWORD *v7; // rdi
  _QWORD *i; // rdx
  volatile signed __int32 *v9; // r8
  _QWORD *Heap; // rax
  _QWORD *v11; // rsi
  _QWORD *j; // rdx
  volatile signed __int32 *v13; // r8
  _QWORD *v14; // rcx
  _QWORD *v15; // rax

  v3 = qword_18016D250;
  if ( a3 )
    return 3221225485LL;
  v6 = (_RTL_SRWLOCK *)(qword_18016D250 + 8);
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(qword_18016D250 + 8));
  v7 = (_QWORD *)(v3 + 16);
  for ( i = (_QWORD *)*v7; i != v7; i = (_QWORD *)*i )
  {
    v9 = (volatile signed __int32 *)(i - 4);
    if ( *(i - 2) == a2 )
    {
      _InterlockedIncrement(v9 + 27);
      *a1 = v9;
      RtlReleaseSRWLockShared(v6);
      return 0LL;
    }
  }
  RtlReleaseSRWLockShared(v6);
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x98uLL);
  v11 = Heap;
  if ( Heap )
  {
    memset(Heap, 0, 0x98uLL);
    *(_DWORD *)v11 = 9963794;
    *((_DWORD *)v11 + 32) = 0;
    v11[15] = 0LL;
    v11[1] = 0LL;
    v11[2] = a2;
    v11[9] = v11 + 8;
    v11[8] = v11 + 8;
    *((_DWORD *)v11 + 27) = 1;
    RtlAcquireSRWLockExclusive(v6);
    for ( j = (_QWORD *)*v7; j != v7; j = (_QWORD *)*j )
    {
      v13 = (volatile signed __int32 *)(j - 4);
      if ( *(j - 2) == a2 )
      {
        _InterlockedIncrement(v13 + 27);
        *a1 = v13;
        RtlReleaseSRWLockExclusive(v6);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
        return 0LL;
      }
    }
    v14 = (_QWORD *)*v7;
    v15 = v11 + 4;
    if ( *(_QWORD **)(*v7 + 8LL) != v7 )
      __fastfail(3u);
    *v15 = v14;
    v11[5] = v7;
    v14[1] = v15;
    *v7 = v15;
    *a1 = (volatile signed __int32 *)v11;
    RtlReleaseSRWLockExclusive(v6);
    return 0LL;
  }
  return 3221225495LL;
}
