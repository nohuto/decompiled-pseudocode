/*
 * XREFs of PopGetIdleTimesCallback @ 0x140236080
 * Callers:
 *     PoGetIdleTimes @ 0x140236ABC (PoGetIdleTimes.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     PpmConvertTime @ 0x140235D70 (PpmConvertTime.c)
 *     PpmContinueActiveTimeAccumulation @ 0x140236CD0 (PpmContinueActiveTimeAccumulation.c)
 */

__int64 __fastcall PopGetIdleTimesCallback(struct _KPRCB *a1, __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rax
  unsigned int v4; // ebx
  BOOL v5; // r12d
  signed __int64 IdleSequenceNumber; // rax
  signed __int64 v10; // rtt
  _PPM_IDLE_STATES *IdleStates; // rbp
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned int KernelTime; // r11d
  LARGE_INTEGER v14; // r13
  ULONG SpareLong0; // r15d
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  _PROC_IDLE_ACCOUNTING *v19; // r9
  _PPM_IDLE_STATES *v20; // r8
  unsigned int i; // ebp
  unsigned int StateCount; // ecx
  __int64 v23; // rdx
  _DWORD *v24; // rdx
  _QWORD *v25; // r11
  unsigned __int64 TotalTime; // rcx
  unsigned __int64 v27; // rax
  _QWORD *v28; // r11
  unsigned __int64 v29; // rax
  _PROC_IDLE_ACCOUNTING *IdleAccounting; // [rsp+20h] [rbp-68h]
  signed __int64 v31; // [rsp+28h] [rbp-60h]
  unsigned __int64 IdleTimeEntry; // [rsp+30h] [rbp-58h]
  _QWORD *v33; // [rsp+38h] [rbp-50h]
  _DWORD *v34; // [rsp+40h] [rbp-48h]
  unsigned int v35; // [rsp+90h] [rbp+8h]
  _PPM_IDLE_STATES *v36; // [rsp+A8h] [rbp+20h]

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = 0;
  v31 = 0LL;
  IdleTimeEntry = 0LL;
  v5 = CurrentPrcb != a1;
  v34 = 0LL;
  v33 = 0LL;
  if ( CurrentPrcb != a1 )
  {
    _m_prefetchw((const void *)&a1->PowerState.IdleSequenceNumber);
    IdleSequenceNumber = a1->PowerState.IdleSequenceNumber;
    do
    {
      v10 = IdleSequenceNumber;
      IdleSequenceNumber = _InterlockedCompareExchange64(
                             (volatile signed __int64 *)&a1->PowerState.IdleSequenceNumber,
                             IdleSequenceNumber,
                             IdleSequenceNumber);
    }
    while ( v10 != IdleSequenceNumber );
    v31 = IdleSequenceNumber;
    if ( (IdleSequenceNumber & 1) == 0 )
      return (unsigned int)-1073741823;
    IdleTimeEntry = a1->PowerState.IdleTimeEntry;
  }
  IdleStates = a1->PowerState.IdleStates;
  IdleAccounting = a1->PowerState.IdleAccounting;
  v36 = IdleStates;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  KernelTime = a1->KernelTime;
  v14 = PerformanceCounter;
  v35 = KernelTime;
  SpareLong0 = a1->IdleThread->SchedulerApc.SpareLong0;
  if ( a2 )
  {
    v19 = IdleAccounting;
    *(_OWORD *)a2 = 0LL;
    *(_OWORD *)(a2 + 16) = 0LL;
    *(_OWORD *)(a2 + 32) = 0LL;
    if ( IdleAccounting )
    {
      v20 = IdleStates;
      if ( IdleStates )
      {
        for ( i = 0; ; ++i )
        {
          StateCount = v19->StateCount;
          if ( v19->StateCount >= v20->ProcessorIdleCount )
            StateCount = v20->ProcessorIdleCount;
          if ( i >= StateCount )
          {
            v29 = PpmConvertTime(v19->PriorIdleTime, PopQpcFrequency, 0x989680uLL);
            IdleStates = v36;
            KernelTime = v35;
            *(_QWORD *)a2 = v29;
            goto LABEL_8;
          }
          v23 = i;
          if ( v20->State[v23].StateType )
            break;
          if ( !v20->State[v23].ContextRetained )
            goto LABEL_49;
          if ( v20->State[v23].CacheCoherent != 0 )
            goto LABEL_51;
          if ( !v20->State[v23].CacheCoherent )
          {
LABEL_33:
            v24 = (_DWORD *)(a2 + 36);
            v25 = (_QWORD *)(a2 + 16);
            goto LABEL_34;
          }
          if ( -(v20->State[v23].CacheCoherent != 0) == 1 )
            goto LABEL_49;
          v24 = 0LL;
          v25 = 0LL;
LABEL_34:
          if ( i == v20->ActualState )
          {
            v33 = v25;
            v34 = v24;
          }
          if ( v24 && v25 )
          {
            *v24 += v19->State[i].FailureCount + v19->State[i].SuccessCount;
            TotalTime = v19->State[i].TotalTime;
            if ( v20->ActualState == i )
              TotalTime += a1->PowerState.IdleTimeLast;
            v27 = PpmConvertTime(TotalTime, PopQpcFrequency, 0x989680uLL);
            *v28 += v27;
            v20 = v36;
            v19 = IdleAccounting;
          }
        }
        if ( v20->State[v23].StateType != 1 )
        {
          if ( v20->State[v23].StateType == 2 )
            goto LABEL_33;
LABEL_49:
          v24 = (_DWORD *)(a2 + 40);
          v25 = (_QWORD *)(a2 + 24);
          goto LABEL_34;
        }
LABEL_51:
        v24 = (_DWORD *)(a2 + 32);
        v25 = (_QWORD *)(a2 + 8);
        goto LABEL_34;
      }
    }
  }
LABEL_8:
  if ( a3 )
  {
    if ( !v5 )
      ((void (__fastcall *)(_QWORD, _QWORD))PpmContinueActiveTimeAccumulation)(a1, (LARGE_INTEGER)v14.QuadPart);
    *(_QWORD *)(a3 + 8) = PpmConvertTime(a1->PowerState.PerfFeedback.StallTime, PopQpcFrequency, 0x989680uLL);
  }
  if ( v5 )
  {
    _m_prefetchw((const void *)&a1->PowerState.IdleSequenceNumber);
    if ( v31 != _InterlockedOr64((volatile signed __int64 *)&a1->PowerState.IdleSequenceNumber, 0LL) )
      return (unsigned int)-1073741823;
    if ( v14.QuadPart > IdleTimeEntry )
    {
      v17 = PpmConvertTime(v14.QuadPart - IdleTimeEntry, PopQpcFrequency, 0x989680uLL);
      if ( v33 && v34 )
      {
        ++*v34;
        *v33 += v17;
      }
      if ( v17 > (unsigned int)KeMaximumIncrement )
      {
        v18 = v17 / (unsigned int)KeMaximumIncrement;
        SpareLong0 = v18 + SpareLong0 - 1;
        KernelTime = v18 + KernelTime - 1;
      }
    }
  }
  if ( a2 )
  {
    if ( IdleAccounting && IdleStates )
      *(_QWORD *)a2 += *(_QWORD *)(a2 + 8) + *(_QWORD *)(a2 + 16) + *(_QWORD *)(a2 + 24);
    else
      *(_QWORD *)a2 = SpareLong0 * (unsigned __int64)(unsigned int)KeMaximumIncrement;
  }
  if ( a3 )
  {
    *(_DWORD *)a3 = SpareLong0;
    *(_DWORD *)(a3 + 4) = KernelTime;
  }
  return v4;
}
