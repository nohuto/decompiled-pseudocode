/*
 * XREFs of RtlpCreateSerializationGroup @ 0x180044D5C
 * Callers:
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x1800424AC (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 */

volatile signed __int32 *__fastcall RtlpCreateSerializationGroup(int a1)
{
  _QWORD *i; // rax
  volatile signed __int32 *v3; // rbx
  volatile signed __int32 *result; // rax
  _RTL_SRWLOCK *v5; // rcx
  _RTL_SRWLOCK *v6; // r8
  __int64 v7; // rax
  _QWORD *j; // rcx
  volatile signed __int32 *v9; // rdi
  __int64 **v10; // rdx
  __int64 *v11; // rcx

  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(qword_18016D250 + 48));
  for ( i = *(_QWORD **)(qword_18016D250 + 32); i != (_QWORD *)(qword_18016D250 + 32); i = (_QWORD *)*i )
  {
    v3 = (volatile signed __int32 *)(i - 1);
    if ( *((_DWORD *)i - 1) == a1 )
    {
      _InterlockedIncrement(v3 + 8);
      RtlReleaseSRWLockShared((PRTL_SRWLOCK)(qword_18016D250 + 48));
      return v3;
    }
  }
  RtlReleaseSRWLockShared((PRTL_SRWLOCK)(qword_18016D250 + 48));
  result = (volatile signed __int32 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x28uLL);
  v3 = result;
  if ( result )
  {
    *((_QWORD *)result + 1) = 0LL;
    *((_QWORD *)result + 2) = 0LL;
    *((_DWORD *)result + 9) = 0;
    *result = 2623763;
    *((_QWORD *)result + 3) = 0LL;
    v5 = (_RTL_SRWLOCK *)(qword_18016D250 + 48);
    *((_DWORD *)result + 1) = a1;
    *((_DWORD *)result + 8) = 1;
    RtlAcquireSRWLockExclusive(v5);
    v6 = (_RTL_SRWLOCK *)qword_18016D250;
    v7 = qword_18016D250 + 32;
    for ( j = *(_QWORD **)(qword_18016D250 + 32); j != (_QWORD *)v7; j = (_QWORD *)*j )
    {
      v9 = (volatile signed __int32 *)(j - 1);
      if ( *((_DWORD *)j - 1) == a1 )
      {
        _InterlockedIncrement(v9 + 8);
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(qword_18016D250 + 48));
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v3);
        return v9;
      }
    }
    v10 = *(__int64 ***)(qword_18016D250 + 40);
    v11 = (__int64 *)(v3 + 2);
    if ( *v10 != (__int64 *)v7 )
      __fastfail(3u);
    *v11 = v7;
    *((_QWORD *)v3 + 2) = v10;
    *v10 = v11;
    *(_QWORD *)(v7 + 8) = v11;
    RtlReleaseSRWLockExclusive(v6 + 6);
    return v3;
  }
  return result;
}
