__int64 __fastcall ExpUpdateTimerResolution(char a1, unsigned int a2, KIRQL *a3)
{
  KIRQL v4; // al
  KIRQL v5; // bl
  __int64 i; // rcx
  __int64 result; // rax
  int v8; // edi
  unsigned __int8 v9; // al
  struct _KPRCB *v10; // r10
  _DWORD *v11; // r8
  int v12; // eax
  bool v13; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v17; // eax
  unsigned int v18; // [rsp+38h] [rbp+10h] BYREF

  v18 = a2;
  if ( a3 )
  {
    v5 = *a3;
  }
  else
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&ExpKernelResolutionLock);
    a2 = v18;
    v5 = v4;
  }
  if ( a1 )
  {
    if ( a2 >= ExpLastRequestedTime || KeMaximumIncrement <= a2 )
    {
LABEL_16:
      KxReleaseSpinLock((volatile signed __int64 *)&ExpKernelResolutionLock);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v5 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v17 = ~(unsigned __int16)(-1LL << (v5 + 1));
          v13 = (v17 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v17;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v5);
      return (unsigned int)KePseudoHrTimeIncrement;
    }
  }
  else
  {
    a2 = KeMaximumIncrement;
    v18 = KeMaximumIncrement;
    if ( ExpKernelResolutionCount )
    {
      if ( ExpKernelRequestedTimerResolution < (unsigned int)KeMaximumIncrement )
        a2 = ExpKernelRequestedTimerResolution;
      v18 = a2;
    }
    for ( i = ExpTimerResolutionListHead; (__int64 *)i != &ExpTimerResolutionListHead; i = *(_QWORD *)i )
    {
      if ( (*(_DWORD *)(i - 956) & 0x1000) != 0 && *(_DWORD *)(i + 24) < a2 )
      {
        if ( (*(_DWORD *)(i + 92) & 0x4000000) == 0 )
          a2 = *(_DWORD *)(i + 24);
        v18 = a2;
      }
    }
  }
  if ( a2 < KeMinimumIncrement )
    a2 = KeMinimumIncrement;
  v18 = a2;
  if ( a2 == ExpLastRequestedTime )
    goto LABEL_16;
  v8 = KePseudoHrTimeIncrement;
  ExpLastRequestedTime = a2;
  KxReleaseSpinLock((volatile signed __int64 *)&ExpKernelResolutionLock);
  if ( KiIrqlFlags )
  {
    v9 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v9 <= 0xFu && v5 <= 0xFu && v9 >= 2u )
    {
      v10 = KeGetCurrentPrcb();
      v11 = v10->SchedulerAssist;
      v12 = ~(unsigned __int16)(-1LL << (v5 + 1));
      v13 = (v12 & v11[5]) == 0;
      v11[5] &= v12;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick(v10);
    }
  }
  __writecr8(v5);
  ExpUpdateTimerConfiguration(&v18, 0LL, 0LL);
  result = v18;
  if ( v8 != v18 )
  {
    PoTraceSystemTimerResolutionUpdate();
    return v18;
  }
  return result;
}
