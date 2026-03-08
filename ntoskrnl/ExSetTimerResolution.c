/*
 * XREFs of ExSetTimerResolution @ 0x1403AF930
 * Callers:
 *     DifExSetTimerResolutionWrapper @ 0x1405D79E0 (DifExSetTimerResolutionWrapper.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x1402D9468 (PoTraceSystemTimerResolutionKernel.c)
 *     ExpUpdateTimerResolution @ 0x14035AA94 (ExpUpdateTimerResolution.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

ULONG __stdcall ExSetTimerResolution(ULONG DesiredTime, BOOLEAN SetResolution)
{
  KIRQL v4; // al
  ULONG v5; // ebp
  ULONG v6; // ebx
  KIRQL v7; // si
  int v9; // ecx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf
  KIRQL v15; // [rsp+48h] [rbp+10h] BYREF

  PoTraceSystemTimerResolutionKernel(SetResolution != 0 ? DesiredTime : 0, 1381258053, 0);
  v4 = KeAcquireSpinLockRaiseToDpc(&ExpKernelResolutionLock);
  v5 = KeNonHrTimeIncrement;
  v6 = 0;
  v15 = v4;
  v7 = v4;
  if ( !SetResolution )
  {
    v9 = ExpKernelResolutionCount;
    if ( !ExpKernelResolutionCount )
      goto LABEL_10;
    --ExpKernelResolutionCount;
    if ( v9 != 1 )
      goto LABEL_10;
    KeNonHrTimeIncrement = KeMaximumIncrement;
LABEL_4:
    ExpKernelRequestedTimerResolution = v6;
    return ExpUpdateTimerResolution(SetResolution, v6, &v15);
  }
  if ( ++ExpKernelResolutionCount == 1 || DesiredTime < ExpKernelRequestedTimerResolution )
  {
    KeNonHrTimeIncrement = DesiredTime;
    v6 = DesiredTime;
    goto LABEL_4;
  }
LABEL_10:
  KxReleaseSpinLock((volatile signed __int64 *)&ExpKernelResolutionLock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v7 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v7 = v15;
      v13 = ~(unsigned __int16)(-1LL << (v15 + 1));
      v14 = (v13 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v13;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v7);
  return v5;
}
