__int64 __fastcall KiUpdateSystemTime(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r14
  volatile signed __int32 *SchedulerAssist; // rcx
  LARGE_INTEGER PerformanceCounter; // r15
  LARGE_INTEGER v9; // r11
  __int64 v10; // rcx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v13; // r8
  int v14; // ett
  __int16 v15; // [rsp+30h] [rbp-8h]

  v3 = MmWriteableSharedUserData;
  _disable();
  SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
  if ( SchedulerAssist )
    _InterlockedOr(SchedulerAssist, 0x200000u);
  RtlWriteAcquireTickLock(v3 + 832);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v9.QuadPart = ((__int64 (__fastcall *)(_QWORD))KiComputeNewSystemTime)((LARGE_INTEGER)PerformanceCounter.QuadPart);
  if ( a1 )
  {
    KiSystemTimeErrorAccumulator = 0LL;
    v9.QuadPart = a1 + MEMORY[0xFFFFF78000000014];
  }
  v10 = MmWriteableSharedUserData;
  *(LARGE_INTEGER *)(MmWriteableSharedUserData + 840) = PerformanceCounter;
  *(_DWORD *)(v10 + 28) = v9.HighPart;
  *(LARGE_INTEGER *)(v10 + 20) = v9;
  if ( a2 )
  {
    *(_QWORD *)(v10 + 856) = *(_QWORD *)a2;
    *(_BYTE *)(v10 + 872) = *(_BYTE *)(a2 + 8);
  }
  result = *(_QWORD *)(v3 + 832) + 1LL;
  *(_QWORD *)(v3 + 832) = result;
  if ( (a3 & 1) == 0 )
  {
    if ( (a3 & 4) != 0 )
    {
      KeBootTimeBias = 0LL;
      KeBootTime = v9;
    }
    else
    {
      KeBootTime.QuadPart += a1;
      KeBootTimeBias += a1;
    }
  }
  if ( (v15 & 0x200) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v13 = CurrentPrcb->SchedulerAssist;
    if ( v13 )
    {
      _m_prefetchw(v13);
      LODWORD(result) = *v13;
      do
      {
        v14 = result;
        result = (unsigned int)_InterlockedCompareExchange(v13, result & 0xFFDFFFFF, result);
      }
      while ( v14 != (_DWORD)result );
      if ( (result & 0x200000) != 0 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
  }
  return result;
}
