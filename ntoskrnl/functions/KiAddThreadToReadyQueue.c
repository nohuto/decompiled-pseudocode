__int64 __fastcall KiAddThreadToReadyQueue(__int64 a1, __int64 a2, __int64 a3, char a4, unsigned int a5)
{
  __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // r15
  bool v11; // bl
  _QWORD *v12; // rax
  _QWORD *v13; // rdx
  __int64 v14; // rdx
  _WORD *v15; // rcx
  unsigned int v16; // ebx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdi
  _QWORD *v20; // r14
  _QWORD *v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rcx
  __int64 v24; // rax
  int IsEnabledNoReporting; // eax
  __int64 v26; // rdx
  __int64 v27; // r8
  unsigned int v28; // ecx
  bool v29; // bl
  unsigned int v30; // eax
  __int16 v31; // dx
  __int64 v32; // rcx
  __int64 v33; // rcx
  _QWORD *v34; // rcx
  _QWORD *v35; // rax
  __int64 v36; // rdx
  _QWORD *v37; // rdx
  char v38; // [rsp+68h] [rbp+20h] BYREF

  v5 = a3;
  v6 = a2;
  if ( !a4 )
    *(_DWORD *)(a3 + 436) = MEMORY[0xFFFFF78000000320];
  if ( !a2 )
  {
    v6 = *(_QWORD *)(a3 + 104);
    if ( v6 )
      v6 += *(unsigned int *)(a1 + 216);
  }
  v8 = *(_QWORD *)(a1 + 35000);
  if ( v8 )
    *(_BYTE *)(v8 + 16) = 0;
  *(_BYTE *)(a3 + 388) = 1;
  v38 = 0;
  if ( v6 )
  {
    if ( (*(_DWORD *)(a3 + 120) & 0xC00) == 0 )
    {
      LOBYTE(a3) = 1;
      if ( (unsigned int)KiGetThreadEffectiveRankNonZero(v5, v6, a3, &v38) )
        return KiAddThreadToScbQueue(a1, v6, v5, a5);
    }
  }
  v10 = *(char *)(v5 + 195);
  if ( (*(_DWORD *)(v5 + 120) & 0x400000) != 0 )
    _InterlockedOr(*(volatile signed __int32 **)(v5 + 968), 0x40000u);
  if ( (*(_DWORD *)(v5 + 120) & 0x400000) != 0 )
  {
    v11 = 0;
    if ( (unsigned int)KiReadGuestSchedulerAssistPriority(v5, 0LL) != *(_DWORD *)(v5 + 1024) )
    {
      KxAcquireSpinLock(&KiUpdateVpThreadPriorityLock);
      v12 = (_QWORD *)(v5 + 1008);
      if ( *(_QWORD *)(v5 + 1008) == 1LL )
      {
        v13 = (_QWORD *)qword_140C421A8;
        v11 = KiUpdateVpThreadPriorityListHead == (_QWORD)&KiUpdateVpThreadPriorityListHead;
        if ( *(__int64 **)qword_140C421A8 != &KiUpdateVpThreadPriorityListHead )
          goto LABEL_59;
        *v12 = &KiUpdateVpThreadPriorityListHead;
        *(_QWORD *)(v5 + 1016) = v13;
        *v13 = v12;
        qword_140C421A8 = v5 + 1008;
      }
      KxReleaseSpinLock((volatile signed __int64 *)&KiUpdateVpThreadPriorityLock);
      if ( v11 )
        KiInsertQueueDpc((ULONG_PTR)&KiUpdateVpThreadPriorityDpc, 0LL, 0LL, 0LL, 0);
    }
  }
  v14 = *(_QWORD *)(a1 + 34880);
  if ( (*(_DWORD *)(v5 + 120) & 0x2000) == 0
    || !v14
    || ((v15 = *(_WORD **)(v5 + 576), v16 = 0, v17 = *(unsigned __int8 *)(a1 + 208), (unsigned __int16)v17 >= *v15)
      ? (v18 = 0LL)
      : (v18 = *(_QWORD *)&v15[4 * v17 + 4]),
        (v14 & v18) != v14 || v38) )
  {
    v34 = (_QWORD *)(v5 + 216);
    v35 = (_QWORD *)(a1 + 16 * (v10 + 2036));
    if ( a5 )
    {
      v36 = *v35;
      if ( *(_QWORD **)(*v35 + 8LL) != v35 )
        goto LABEL_59;
      *v34 = v36;
      *(_QWORD *)(v5 + 224) = v35;
      *(_QWORD *)(v36 + 8) = v34;
      *v35 = v34;
      _bittestandset((signed __int32 *)(a1 + 32476), v10);
    }
    else
    {
      v37 = (_QWORD *)v35[1];
      if ( (_QWORD *)*v37 != v35 )
        goto LABEL_59;
      *v34 = v35;
      *(_QWORD *)(v5 + 224) = v37;
      *v37 = v34;
      v35[1] = v34;
    }
    *(_DWORD *)(a1 + 32472) |= 1 << v10;
    return KiUpdateLocalReadyQueueStatisticsOnInsertion(a1, v5);
  }
  v19 = *(_QWORD *)(a1 + 34888);
  v20 = (_QWORD *)(v19 + 16 * (v10 + 1));
  while ( _interlockedbittestandset64((volatile signed __int32 *)v19, 0LL) )
  {
    do
    {
      if ( (++v16 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v16);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)v19 );
  }
  v21 = (_QWORD *)(v5 + 216);
  if ( !a5 )
  {
    v23 = (_QWORD *)v20[1];
    if ( (_QWORD *)*v23 == v20 )
    {
      *v21 = v20;
      *(_QWORD *)(v5 + 224) = v23;
      *v23 = v21;
      v20[1] = v21;
      goto LABEL_42;
    }
LABEL_59:
    __fastfail(3u);
  }
  v22 = *v20;
  if ( *(_QWORD **)(*v20 + 8LL) != v20 )
    goto LABEL_59;
  *v21 = v22;
  *(_QWORD *)(v5 + 224) = v20;
  *(_QWORD *)(v22 + 8) = v21;
  *v20 = v21;
  _bittestandreset((signed __int32 *)(a1 + 32476), v10);
LABEL_42:
  *(_DWORD *)(v19 + 8) |= 1 << v10;
  *(_DWORD *)(v5 + 536) |= 0x80000000;
  ++*(_DWORD *)(v19 + 672);
  v24 = *(unsigned int *)(v5 + 84);
  *(_DWORD *)(v5 + 2288) = v24;
  *(_QWORD *)(v19 + 680) += v24;
  IsEnabledNoReporting = Feature_Servicing_SoftParkFixes__private_IsEnabledNoReporting();
  v28 = *(_DWORD *)(v5 + 84);
  *(_BYTE *)(v5 + 1648) = *(_BYTE *)(v5 + 512);
  v29 = IsEnabledNoReporting != 0;
  *(_DWORD *)(v5 + 2292) = v28;
  v30 = *(_DWORD *)(v5 + 80);
  if ( v30 <= v28 )
    v30 = v28;
  *(_BYTE *)(v5 + 1650) = v30 >= KiDynamicHeteroCpuPolicyExpectedCycles;
  *(_BYTE *)(v5 + 1649) = *(_BYTE *)(v5 + 516);
  if ( v29 )
  {
    v31 = *(_WORD *)(v19 + 662);
    *(_OWORD *)(v5 + 2304) = 0LL;
    v32 = *(_QWORD *)(v5 + 576);
    *(_WORD *)(v5 + 2312) = v31;
    *(_QWORD *)(v5 + 2304) = KeQueryGroupAffinityEx(v32);
  }
  if ( *(_DWORD *)(v5 + 2292) > (unsigned int)KeSoftParkedQueueThreshold )
    *(_DWORD *)(v5 + 2292) = KeSoftParkedQueueThreshold;
  if ( v29 )
    KiAcquireSoftParkElectionLock(v19, v26, v27);
  *(_QWORD *)(v5 + 2296) = *(_QWORD *)(v19 + 696);
  ++*(_DWORD *)(v19 + 704);
  *(_QWORD *)(v19 + 712) += *(unsigned int *)(v5 + 2292);
  if ( v29 )
    *(_QWORD *)(v19 + 1680) |= *(_QWORD *)(v5 + 2304);
  v33 = *(unsigned __int8 *)(v5 + 1649) + 8 * (*(unsigned __int8 *)(v5 + 1650) + 2LL * *(unsigned __int8 *)(v5 + 1648));
  *(_QWORD *)(v19 + 8 * v33 + 784) += *(unsigned int *)(v5 + 2292);
  result = KiScheduleSoftParkElectionIfNecessary(v19);
  if ( v29 )
    _InterlockedAnd64((volatile signed __int64 *)(v19 + 688), 0LL);
  _InterlockedAnd64((volatile signed __int64 *)v19, 0LL);
  return result;
}
