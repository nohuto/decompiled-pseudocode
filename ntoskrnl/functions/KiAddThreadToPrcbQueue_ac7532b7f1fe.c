__int64 __fastcall KiAddThreadToPrcbQueue(__int64 a1, __int64 a2, int a3, int a4, char a5)
{
  __int64 v6; // r15
  bool v9; // bl
  _QWORD *v10; // rax
  _QWORD *v11; // rdx
  __int64 v12; // rdx
  _WORD *v13; // rcx
  unsigned int v14; // ebx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdi
  _QWORD *v18; // r14
  _QWORD *v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rcx
  __int64 v22; // rax
  int IsEnabledNoReporting; // eax
  __int64 v24; // rdx
  __int64 v25; // r8
  unsigned int v26; // ecx
  bool v27; // bl
  unsigned int v28; // eax
  __int16 v29; // dx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 result; // rax
  _QWORD *v33; // rdx
  _QWORD *v34; // rcx
  __int64 v35; // rax
  _QWORD *v36; // rax

  v6 = a3;
  if ( (*(_DWORD *)(a2 + 120) & 0x400000) != 0 )
    _InterlockedOr(*(volatile signed __int32 **)(a2 + 968), 0x40000u);
  if ( (*(_DWORD *)(a2 + 120) & 0x400000) != 0 )
  {
    v9 = 0;
    if ( (unsigned int)KiReadGuestSchedulerAssistPriority(a2, 0LL) != *(_DWORD *)(a2 + 1024) )
    {
      KxAcquireSpinLock(&KiUpdateVpThreadPriorityLock);
      v10 = (_QWORD *)(a2 + 1008);
      if ( *(_QWORD *)(a2 + 1008) == 1LL )
      {
        v11 = (_QWORD *)qword_140C421A8;
        v9 = KiUpdateVpThreadPriorityListHead == (_QWORD)&KiUpdateVpThreadPriorityListHead;
        if ( *(__int64 **)qword_140C421A8 != &KiUpdateVpThreadPriorityListHead )
          goto LABEL_48;
        *v10 = &KiUpdateVpThreadPriorityListHead;
        *(_QWORD *)(a2 + 1016) = v11;
        *v11 = v10;
        qword_140C421A8 = a2 + 1008;
      }
      KxReleaseSpinLock((volatile signed __int64 *)&KiUpdateVpThreadPriorityLock);
      if ( v9 )
        KiInsertQueueDpc((ULONG_PTR)&KiUpdateVpThreadPriorityDpc, 0LL, 0LL, 0LL, 0);
    }
  }
  v12 = *(_QWORD *)(a1 + 34880);
  if ( (*(_DWORD *)(a2 + 120) & 0x2000) == 0
    || !v12
    || ((v13 = *(_WORD **)(a2 + 576), v14 = 0, v15 = *(unsigned __int8 *)(a1 + 208), (unsigned __int16)v15 >= *v13)
      ? (v16 = 0LL)
      : (v16 = *(_QWORD *)&v13[4 * v15 + 4]),
        (v12 & v16) != v12 || a5) )
  {
    v33 = (_QWORD *)(a2 + 216);
    v34 = (_QWORD *)(a1 + 16 * (v6 + 2036));
    if ( a4 )
    {
      v35 = *v34;
      if ( *(_QWORD **)(*v34 + 8LL) != v34 )
        goto LABEL_48;
      *v33 = v35;
      *(_QWORD *)(a2 + 224) = v34;
      *(_QWORD *)(v35 + 8) = v33;
      *v34 = v33;
      _bittestandset((signed __int32 *)(a1 + 32476), v6);
    }
    else
    {
      v36 = (_QWORD *)v34[1];
      if ( (_QWORD *)*v36 != v34 )
        goto LABEL_48;
      *v33 = v34;
      *(_QWORD *)(a2 + 224) = v36;
      *v36 = v33;
      v34[1] = v33;
    }
    *(_DWORD *)(a1 + 32472) |= 1 << v6;
    return KiUpdateLocalReadyQueueStatisticsOnInsertion(a1, a2);
  }
  v17 = *(_QWORD *)(a1 + 34888);
  v18 = (_QWORD *)(v17 + 16 * (v6 + 1));
  while ( _interlockedbittestandset64((volatile signed __int32 *)v17, 0LL) )
  {
    do
    {
      if ( (++v14 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v14);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)v17 );
  }
  v19 = (_QWORD *)(a2 + 216);
  if ( !a4 )
  {
    v21 = (_QWORD *)v18[1];
    if ( (_QWORD *)*v21 == v18 )
    {
      *v19 = v18;
      *(_QWORD *)(a2 + 224) = v21;
      *v21 = v19;
      v18[1] = v19;
      goto LABEL_31;
    }
LABEL_48:
    __fastfail(3u);
  }
  v20 = *v18;
  if ( *(_QWORD **)(*v18 + 8LL) != v18 )
    goto LABEL_48;
  *v19 = v20;
  *(_QWORD *)(a2 + 224) = v18;
  *(_QWORD *)(v20 + 8) = v19;
  *v18 = v19;
  _bittestandreset((signed __int32 *)(a1 + 32476), v6);
LABEL_31:
  *(_DWORD *)(v17 + 8) |= 1 << v6;
  *(_DWORD *)(a2 + 536) |= 0x80000000;
  ++*(_DWORD *)(v17 + 672);
  v22 = *(unsigned int *)(a2 + 84);
  *(_DWORD *)(a2 + 2288) = v22;
  *(_QWORD *)(v17 + 680) += v22;
  IsEnabledNoReporting = Feature_Servicing_SoftParkFixes__private_IsEnabledNoReporting();
  v26 = *(_DWORD *)(a2 + 84);
  *(_BYTE *)(a2 + 1648) = *(_BYTE *)(a2 + 512);
  v27 = IsEnabledNoReporting != 0;
  *(_DWORD *)(a2 + 2292) = v26;
  v28 = *(_DWORD *)(a2 + 80);
  if ( v28 <= v26 )
    v28 = v26;
  *(_BYTE *)(a2 + 1650) = v28 >= KiDynamicHeteroCpuPolicyExpectedCycles;
  *(_BYTE *)(a2 + 1649) = *(_BYTE *)(a2 + 516);
  if ( v27 )
  {
    v29 = *(_WORD *)(v17 + 662);
    *(_OWORD *)(a2 + 2304) = 0LL;
    v30 = *(_QWORD *)(a2 + 576);
    *(_WORD *)(a2 + 2312) = v29;
    *(_QWORD *)(a2 + 2304) = KeQueryGroupAffinityEx(v30);
  }
  if ( *(_DWORD *)(a2 + 2292) > (unsigned int)KeSoftParkedQueueThreshold )
    *(_DWORD *)(a2 + 2292) = KeSoftParkedQueueThreshold;
  if ( v27 )
    KiAcquireSoftParkElectionLock(v17, v24, v25);
  *(_QWORD *)(a2 + 2296) = *(_QWORD *)(v17 + 696);
  ++*(_DWORD *)(v17 + 704);
  *(_QWORD *)(v17 + 712) += *(unsigned int *)(a2 + 2292);
  if ( v27 )
    *(_QWORD *)(v17 + 1680) |= *(_QWORD *)(a2 + 2304);
  v31 = *(unsigned __int8 *)(a2 + 1649) + 8 * (*(unsigned __int8 *)(a2 + 1650) + 2LL * *(unsigned __int8 *)(a2 + 1648));
  *(_QWORD *)(v17 + 8 * v31 + 784) += *(unsigned int *)(a2 + 2292);
  result = KiScheduleSoftParkElectionIfNecessary(v17);
  if ( v27 )
    _InterlockedAnd64((volatile signed __int64 *)(v17 + 688), 0LL);
  _InterlockedAnd64((volatile signed __int64 *)v17, 0LL);
  return result;
}
