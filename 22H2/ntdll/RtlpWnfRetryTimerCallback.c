/*
 * XREFs of RtlpWnfRetryTimerCallback @ 0x18008B490
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x180063E3C (RtlpWnfProcessCurrentDescriptor.c)
 *     RtlpWnfCalculateAndSetNextTimer @ 0x18008B61C (RtlpWnfCalculateAndSetNextTimer.c)
 *     NtGetCompleteWnfStateSubscription @ 0x18009F310 (NtGetCompleteWnfStateSubscription.c)
 */

void __fastcall RtlpWnfRetryTimerCallback(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  int v4; // r14d
  __int64 v5; // rcx
  unsigned __int64 v6; // r9
  __int64 v7; // rdi
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 *v14; // rbx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r9
  int v17; // eax
  __int64 v18; // [rsp+30h] [rbp-18h]
  __int64 v19; // [rsp+38h] [rbp-10h]

  if ( qword_18016D250 )
  {
    v4 = 0;
    RtlAcquireSRWLockShared((volatile signed __int64 *)(qword_18016D250 + 8), a2, a3, a4);
    v5 = qword_18016D250;
    *(_QWORD *)(qword_18016D250 + 88) = 0LL;
    RtlReleaseSRWLockShared((volatile signed __int64 *)(v5 + 8));
    while ( 1 )
    {
      v7 = 0LL;
      v8 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias + 500000;
      RtlAcquireSRWLockShared((volatile signed __int64 *)(qword_18016D250 + 8), MEMORY[0x7FFE03B0], 0x7FFE0008uLL, v6);
      v12 = qword_18016D250;
      v13 = qword_18016D250 + 16;
      v14 = *(__int64 **)(qword_18016D250 + 16);
      while ( v14 != (__int64 *)v13 )
      {
        RtlAcquireSRWLockExclusive((unsigned __int64)(v14 + 3), v9, v10, v11);
        if ( *((_DWORD *)v14 + 24) == 2 && v8 >= v14[13] )
        {
          v7 = v14[11];
          v14[11] = 0LL;
          *((_DWORD *)v14 + 24) = 0;
          RtlReleaseSRWLockExclusive(v14 + 3);
          v12 = qword_18016D250;
          break;
        }
        RtlReleaseSRWLockExclusive(v14 + 3);
        v12 = qword_18016D250;
        v14 = (__int64 *)*v14;
        v13 = qword_18016D250 + 16;
      }
      RtlReleaseSRWLockShared((volatile signed __int64 *)(v12 + 8));
      if ( !v7 )
        break;
      RtlpWnfCalculateAndSetNextTimer();
      v4 = 0;
      v17 = RtlpWnfProcessCurrentDescriptor(v7, 1uLL, v15, v16);
      if ( v17 == -1073741267 )
      {
        v4 = 1;
      }
      else
      {
        if ( !v17 )
          NtGetCompleteWnfStateSubscription(v7 + 8, v7, *(unsigned int *)(v7 + 24), 0LL, 0LL, 0, v18, v19);
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7);
      }
    }
    if ( v4 )
      RtlpWnfCalculateAndSetNextTimer();
  }
}
