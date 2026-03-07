__int64 __fastcall KiFreezeTargetExecution(__int64 a1, __int64 a2)
{
  __int16 v4; // si
  volatile signed __int32 *SchedulerAssist; // rcx
  bool v6; // si
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v9; // rcx
  volatile signed __int32 *v10; // rax
  __int64 v11; // rdi
  volatile signed __int32 *v12; // rax
  unsigned __int64 v13; // rcx
  __int64 result; // rax
  _DWORD *v15; // r9
  __int64 v16; // rdx
  LARGE_INTEGER v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int8 v19; // cl
  struct _KPRCB *v20; // r9
  _DWORD *v21; // r8
  int v22; // eax
  bool v23; // zf
  struct _KPRCB *v24; // rcx
  _DWORD *v25; // r8
  int v26; // ett
  LARGE_INTEGER PerformanceFrequency; // [rsp+20h] [rbp-F8h] BYREF
  _QWORD v28[20]; // [rsp+30h] [rbp-E8h] BYREF
  int v29; // [rsp+110h] [rbp-8h]

  memset(v28, 0, 0x98uLL);
  if ( KiFreezeExecutionLock
    || KiFreezeLockBackup
    || (result = (unsigned int)KiBugCheckActive, (KiBugCheckActive & 3) != 0) )
  {
    if ( ViVerifierEnabled )
      VfStopBranchTracing();
    v4 = v29;
    _disable();
    SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
    if ( SchedulerAssist )
      _InterlockedOr(SchedulerAssist, 0x200000u);
    v6 = (v4 & 0x200) != 0;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v15 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 15 )
        LODWORD(v16) = 0x8000;
      else
        v16 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
      v15[5] |= v16;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    KeSaveSupervisorState(CurrentPrcb->ExtendedSupervisorState, KeEnabledSupervisorXStateFeatures | 0x100);
    KiStartDebugAccumulation(CurrentPrcb);
    CurrentPrcb->IpiFrozen = 2;
    LOBYTE(v9) = 1;
    ((void (__fastcall *)(__int64, _QWORD))off_140C01B48[0])(v9, 0LL);
    if ( a1 )
    {
      KiSaveProcessorState(a1, a2);
    }
    else
    {
      RtlCaptureContext(CurrentPrcb->Context);
      KiSaveProcessorControlState(&CurrentPrcb->ProcessorState);
    }
    v10 = (volatile signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( v10 )
      _InterlockedOr(v10, 0x20000u);
    KeQueryPerformanceCounter(0LL);
    while ( (CurrentPrcb->IpiFrozen & 0xF) == 2 )
    {
      if ( CurrentPrcb == (struct _KPRCB *)KiDebuggerOwner )
      {
        memset(v28, 0, 0x98uLL);
        LODWORD(v28[0]) = -2147483641;
        v28[1] = v28;
        v28[2] = CurrentPrcb->Context->Rip;
        if ( (unsigned __int8)KdpReportExceptionStateChange(v28, CurrentPrcb->Context, 0LL) != 3 )
          KiSetDebuggerOwner(KiFreezeOwner);
      }
      v11 = KiFreezeStallOwner;
      PerformanceFrequency.QuadPart = 0LL;
      if ( CurrentPrcb == (struct _KPRCB *)KiFreezeStallOwner )
      {
        v17 = KeQueryPerformanceCounter(&PerformanceFrequency);
        if ( (unsigned __int64)(1000 * (v17.QuadPart - KiLastStallTick)) / PerformanceFrequency.QuadPart > 0x1F4 )
          KiLastStallTick = v17.QuadPart;
      }
      if ( v11
        && (struct _KPRCB *)v11 != CurrentPrcb
        && KiDebuggerOwner
        && (struct _KPRCB *)KiDebuggerOwner != CurrentPrcb )
      {
        _mm_pause();
      }
    }
    v12 = (volatile signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( v12 )
      _InterlockedAnd(v12, 0xFFFDFFFF);
    ((void (__fastcall *)(_QWORD, _QWORD))off_140C01B48[0])(0LL, (unsigned __int8)KiResumeForReboot);
    if ( a1 )
      KiRestoreProcessorState(a1, a2);
    else
      KiRestoreProcessorControlState(&CurrentPrcb->ProcessorState);
    v13 = __readcr4();
    if ( (v13 & 0x20080) != 0 )
    {
      __writecr4(v13 ^ 0x80);
      __writecr4(v13);
    }
    else
    {
      v18 = __readcr3();
      __writecr3(v18);
    }
    CurrentPrcb->IpiFrozen = 0;
    KiEndDebugAccumulation(CurrentPrcb);
    KeRestoreSupervisorState(CurrentPrcb->ExtendedSupervisorState, KeEnabledSupervisorXStateFeatures | 0x100);
    if ( KiIrqlFlags )
    {
      v19 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v19 <= 0xFu && CurrentIrql <= 0xFu && v19 >= 2u )
      {
        v20 = KeGetCurrentPrcb();
        v21 = v20->SchedulerAssist;
        v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v23 = (v22 & v21[5]) == 0;
        v21[5] &= v22;
        if ( v23 )
          KiRemoveSystemWorkPriorityKick(v20);
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
    if ( v6 )
    {
      v24 = KeGetCurrentPrcb();
      v25 = v24->SchedulerAssist;
      if ( v25 )
      {
        _m_prefetchw(v25);
        LODWORD(result) = *v25;
        do
        {
          v26 = result;
          result = (unsigned int)_InterlockedCompareExchange(v25, result & 0xFFDFFFFF, result);
        }
        while ( v26 != (_DWORD)result );
        if ( (result & 0x200000) != 0 )
          result = KiRemoveSystemWorkPriorityKick(v24);
      }
      _enable();
    }
    if ( ViVerifierEnabled )
      return VfStartBranchTracing();
  }
  return result;
}
