__int64 KiComputeDispatchInterruptCost()
{
  struct _KWAIT_BLOCK *WaitBlockArray; // r15
  unsigned int v1; // edi
  __int64 Pool2; // rax
  _QWORD *v3; // r13
  __int64 v4; // rcx
  __int64 v5; // rdx
  _BYTE *v6; // rax
  PVOID *v7; // r12
  __int64 v8; // rsi
  ULONG v9; // r14d
  volatile signed __int32 *SchedulerAssist; // rcx
  unsigned int v11; // ebx
  bool v12; // bp
  char *v13; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *v15; // r8
  ULONG v16; // ebx
  __int64 v17; // r8
  _QWORD *v18; // rdx
  __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  unsigned int v21; // ebx
  signed __int32 v23; // eax
  signed __int32 v24; // ett
  ULONG v25; // [rsp+40h] [rbp-78h]
  __int64 v26; // [rsp+48h] [rbp-70h]
  __int64 v27; // [rsp+50h] [rbp-68h]
  LARGE_INTEGER PerformanceFrequency; // [rsp+58h] [rbp-60h] BYREF
  __int128 v29; // [rsp+60h] [rbp-58h] BYREF
  __int128 v30; // [rsp+70h] [rbp-48h] BYREF
  int v31; // [rsp+B0h] [rbp-8h]

  PerformanceFrequency.QuadPart = 0LL;
  WaitBlockArray = 0LL;
  v30 = 0LL;
  if ( (_DWORD)KeNumberProcessors_0 == 1 )
    return 0;
  if ( HviIsAnyHypervisorPresent()
    && ((v29 = 0LL, HviGetHypervisorFeatures(&v29), (v29 & 0x100000000000LL) == 0)
     || (HviGetEnlightenmentInformation(&v30), (v30 & 0x1000) != 0)) )
  {
    return 0;
  }
  else
  {
    v1 = 16;
    if ( (unsigned int)KeNumberProcessors_0 < 0x10 )
      v1 = KeNumberProcessors_0;
    Pool2 = ExAllocatePool2(64LL, 104LL * v1, 0x6369644Bu);
    v3 = (_QWORD *)Pool2;
    if ( Pool2 )
    {
      if ( v1 )
      {
        v4 = Pool2 + 81;
        v5 = v1;
        do
        {
          *(_WORD *)(v4 - 1) = 1;
          *(_QWORD *)(v4 + 15) = v4 + 7;
          *(_QWORD *)(v4 + 7) = v4 + 7;
          v6 = (_BYTE *)(v4 - 81);
          *(_BYTE *)(v4 + 1) = 6;
          *(_DWORD *)(v4 + 3) = 0;
          *(_QWORD *)(v4 - 49) = v4 - 81;
          *(_WORD *)(v4 - 79) = 0;
          *(_QWORD *)(v4 - 57) = KiComputeDispatchInterruptCostDpcRoutine;
          *(_QWORD *)(v4 - 25) = 0LL;
          *(_QWORD *)(v4 - 65) = 0LL;
          *(_BYTE *)(v4 - 80) = 2;
          v4 += 104LL;
          *v6 = 19;
          --v5;
        }
        while ( v5 );
      }
      v7 = (PVOID *)ExAllocatePool2(64LL, 8LL * v1, 0x6369644Bu);
      if ( v7 && (WaitBlockArray = (struct _KWAIT_BLOCK *)ExAllocatePool2(64LL, 48LL * v1, 0x6369644Bu)) != 0LL )
      {
        v26 = 0LL;
        v8 = 0LL;
        v25 = 0;
        KeQueryPerformanceCounter(&PerformanceFrequency);
        v27 = 5LL;
        do
        {
          v9 = 0;
          _disable();
          SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
          if ( SchedulerAssist )
            _InterlockedOr(SchedulerAssist, 0x200000u);
          v11 = 0;
          v12 = (v31 & 0x200) != 0;
          if ( v1 )
          {
            do
            {
              if ( v11 != KeGetPcr()->Prcb.Number )
              {
                v13 = (char *)&v3[13 * v9];
                v7[v9] = v13 + 80;
                if ( !*((_QWORD *)v13 + 7) )
                  *((_WORD *)v13 + 1) = v11 + 2048;
                *((LARGE_INTEGER *)v13 + 8) = KeQueryPerformanceCounter(0LL);
                KiInsertQueueDpc((ULONG_PTR)&v3[13 * v9++], 0LL, 0LL, 0LL, 0);
              }
              ++v11;
            }
            while ( v11 < v1 );
            v8 = v26;
          }
          if ( v12 )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v15 = (signed __int32 *)CurrentPrcb->SchedulerAssist;
            if ( v15 )
            {
              _m_prefetchw(v15);
              v23 = *v15;
              do
              {
                v24 = v23;
                v23 = _InterlockedCompareExchange(v15, v23 & 0xFFDFFFFF, v23);
              }
              while ( v24 != v23 );
              if ( (v23 & 0x200000) != 0 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
            _enable();
          }
          KeWaitForMultipleObjects(v9, v7, WaitAll, Executive, 0, 0, 0LL, WaitBlockArray);
          v16 = v25;
          if ( v9 )
          {
            v16 = v9 + v25;
            v17 = v9;
            v25 += v9;
            v18 = v3 + 8;
            do
            {
              v19 = v18[1] - *v18;
              v18 += 13;
              v8 += v19;
              --v17;
            }
            while ( v17 );
            v26 = v8;
          }
          --v27;
        }
        while ( v27 );
        v20 = v16;
        v21 = 0;
        KiDispatchInterruptCost = 1000000
                                * (unsigned __int64)KeGetCurrentPrcb()->MHz
                                * v8
                                / PerformanceFrequency.QuadPart
                                / v20;
      }
      else
      {
        v21 = -1073741801;
      }
      ExFreePoolWithTag(v3, 0);
      if ( v7 )
        ExFreePoolWithTag(v7, 0);
      if ( WaitBlockArray )
        ExFreePoolWithTag(WaitBlockArray, 0);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return v21;
}
