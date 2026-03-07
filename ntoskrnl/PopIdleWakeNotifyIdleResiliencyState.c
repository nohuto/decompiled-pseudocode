__int64 __fastcall PopIdleWakeNotifyIdleResiliencyState(char a1)
{
  KIRQL v2; // al
  LARGE_INTEGER *v3; // rbx
  unsigned __int64 v4; // rdi
  unsigned int v5; // ecx
  BOOL v6; // edx
  LARGE_INTEGER v7; // r14
  ULONG LowPart; // eax
  LONGLONG v9; // rsi
  unsigned __int64 v10; // rcx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v14; // zf
  LARGE_INTEGER v15; // [rsp+58h] [rbp+10h] BYREF

  v15.QuadPart = 0LL;
  v2 = KeAcquireSpinLockRaiseToDpc(&PopIdleWakeContextLock);
  v3 = (LARGE_INTEGER *)PopIdleWakeContext;
  v4 = v2;
  if ( PopIdleWakeContext )
  {
    v5 = *(_DWORD *)PopIdleWakeContext;
    if ( (*(_DWORD *)PopIdleWakeContext & 0x10) != 0 )
    {
      v6 = a1 == 0;
      if ( ((v5 >> 1) & 1) != v6 )
      {
        *(_DWORD *)PopIdleWakeContext = v5 & 0xFFFFFFFD | (2 * v6);
        RtlGetInterruptTimePrecise(&v15);
        v7 = v15;
        LowPart = v3->LowPart;
        v9 = v15.QuadPart - v3[1].QuadPart;
        if ( (v3->LowPart & 8) == 0 )
        {
          v10 = v15.QuadPart - v3[6].QuadPart;
          if ( v10 > PopIdleWakeSourceSpuriousThresholdQpc )
            v3->LowPart = LowPart | 4;
          PopIdleWakeInsertTimeInterval(
            v10,
            6u,
            (__int64)PopIdleWakeContext + 72,
            (__int64)PopIdleWakeContext + 96,
            PopIdleSpuriousWakeBucketLimitsQpc);
          v3->LowPart |= 8u;
          LowPart = v3->LowPart;
        }
        if ( a1 )
        {
          v3[2].QuadPart += v9;
        }
        else if ( (LowPart & 1) != 0 )
        {
          v3[3].QuadPart += v9;
        }
        else
        {
          v3[4].QuadPart += v9;
        }
        v3[1] = v7;
      }
    }
  }
  result = KxReleaseSpinLock((volatile signed __int64 *)&PopIdleWakeContextLock);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v4 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
      v14 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v14 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v4);
  return result;
}
