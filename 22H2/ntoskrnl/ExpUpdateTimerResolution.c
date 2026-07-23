/*
 * XREFs of ExpUpdateTimerResolution @ 0x14035DEFC
 * Callers:
 *     ExSetTimerResolution @ 0x1405B22D0 (ExSetTimerResolution.c)
 *     PspSetProcessPpmPolicy @ 0x140695650 (PspSetProcessPpmPolicy.c)
 *     NtSetTimerResolution @ 0x140709FF0 (NtSetTimerResolution.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402295E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D89E0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExpUpdateTimerConfiguration @ 0x14035C460 (ExpUpdateTimerConfiguration.c)
 *     PoTraceSystemTimerResolutionUpdate @ 0x14035E260 (PoTraceSystemTimerResolutionUpdate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpUpdateTimerResolution(char a1, unsigned int a2, KIRQL *a3)
{
  KIRQL v4; // al
  KIRQL v5; // bl
  int v6; // edi
  __int64 result; // rax
  __int64 i; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v12; // eax
  bool v13; // zf
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r10
  _DWORD *v16; // r8
  int v17; // eax
  ULONG v18; // [rsp+38h] [rbp+10h] BYREF

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
      goto LABEL_18;
  }
  else
  {
    a2 = KeMaximumIncrement;
    v18 = KeMaximumIncrement;
    if ( ExpKernelResolutionCount )
    {
      if ( ExpKernelRequestedTimerResolution < KeMaximumIncrement )
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
  if ( a2 != ExpLastRequestedTime )
  {
    v6 = KeTimeIncrement;
    ExpLastRequestedTime = a2;
    KxReleaseSpinLock(&ExpKernelResolutionLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v5 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v12 = ~(unsigned __int16)(-1LL << (v5 + 1));
          v13 = (v12 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v12;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v5);
    ExpUpdateTimerConfiguration((__int64)&v18, 0LL, 0LL);
    result = v18;
    if ( v6 != v18 )
    {
      PoTraceSystemTimerResolutionUpdate();
      return v18;
    }
    return result;
  }
LABEL_18:
  KxReleaseSpinLock(&ExpKernelResolutionLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v14 = KeGetCurrentIrql();
      if ( v14 <= 0xFu && v5 <= 0xFu && v14 >= 2u )
      {
        v15 = KeGetCurrentPrcb();
        v16 = v15->SchedulerAssist;
        v17 = ~(unsigned __int16)(-1LL << (v5 + 1));
        v13 = (v17 & v16[5]) == 0;
        v16[5] &= v17;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(v15);
      }
    }
  }
  __writecr8(v5);
  return (unsigned int)KeTimeIncrement;
}
