/*
 * XREFs of PpmPerfApplyProcessorState @ 0x1402ED59C
 * Callers:
 *     PpmPerfAction @ 0x140236430 (PpmPerfAction.c)
 *     PpmPerfApplyProcessorStates @ 0x1402ED3A0 (PpmPerfApplyProcessorStates.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     PpmUpdatePerformanceFeedback @ 0x14022E540 (PpmUpdatePerformanceFeedback.c)
 *     PpmGetIdleGenerationCounter @ 0x14023602C (PpmGetIdleGenerationCounter.c)
 *     PpmContinueActiveTimeAccumulation @ 0x140236CD0 (PpmContinueActiveTimeAccumulation.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 *     PpmPerfArbitratorApplyProcessorState @ 0x1402ED6EC (PpmPerfArbitratorApplyProcessorState.c)
 *     PpmScaleIdleStateValues @ 0x1402ED878 (PpmScaleIdleStateValues.c)
 *     PpmEventLegacyProcessorPerfStateChange @ 0x1402ED898 (PpmEventLegacyProcessorPerfStateChange.c)
 *     PpmEventTraceExpectedUtility @ 0x1402ED9CC (PpmEventTraceExpectedUtility.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall PpmPerfApplyProcessorState(struct _KPRCB *a1, char a2)
{
  _PROC_PERF_CONSTRAINT *Constraint; // r15
  _PROC_PERF_CHECK_CONTEXT *p_CheckContext; // r13
  _PROC_PERF_DOMAIN *Domain; // rsi
  char v6; // bl
  char v7; // r12
  _PROC_PERF_CHECK_CONTEXT *Master; // rcx
  bool v9; // r14
  LARGE_INTEGER PerformanceCounter; // rdx
  __int64 v11; // rdx
  __int64 v12; // r8
  bool v13; // bp
  KSPIN_LOCK *p_QosUpdateLock; // r15
  char updated; // bl
  signed __int32 *v16; // r8
  __int64 v17; // r9
  void (__fastcall *DomainPerfControlHandler)(unsigned __int64, _PERF_CONTROL_STATE_SELECTION *, unsigned __int8, unsigned __int8); // rax
  __int64 IdleGenerationCounter; // rbp
  volatile signed __int32 *SchedulerAssist; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 v23; // eax
  signed __int32 v24; // ett
  __int16 v25; // [rsp+60h] [rbp-8h]

  Constraint = a1->PowerState.CheckContext.Constraint;
  p_CheckContext = &a1->PowerState.CheckContext;
  Domain = a1->PowerState.CheckContext.Domain;
  v6 = a2;
  v7 = 1;
  Master = Domain->Master;
  v9 = p_CheckContext == Master || Domain->InitiateAllProcessors;
  if ( Domain->Coordination != 0xFD && a2 )
    v9 = 1;
  if ( a1 != KeGetCurrentPrcb() && (p_CheckContext == Master || v9 && Domain->AffinitizeControl) )
    return 0;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( KeGetCurrentPrcb() == a1 )
  {
    PpmContinueActiveTimeAccumulation((__int64)a1, PerformanceCounter.QuadPart);
  }
  else
  {
    IdleGenerationCounter = PpmGetIdleGenerationCounter((__int64)a1);
    if ( !IdleGenerationCounter )
      return 0;
    updated = PpmUpdatePerformanceFeedback((__int64)a1, 0, 1, 0, 0LL);
    if ( !updated )
      return updated;
    if ( IdleGenerationCounter != PpmGetIdleGenerationCounter((__int64)a1) )
      return 0;
    v6 = a2;
  }
  if ( Constraint->UseQosUpdateLock )
  {
    _disable();
    SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
    if ( SchedulerAssist )
      _InterlockedOr(SchedulerAssist, 0x200000u);
    p_QosUpdateLock = &Constraint->QosUpdateLock;
    v13 = (v25 & 0x200) != 0;
    KxAcquireSpinLock(p_QosUpdateLock);
  }
  else
  {
    v7 = 0;
    v13 = 0;
    p_QosUpdateLock = &Constraint->QosUpdateLock;
  }
  LOBYTE(v12) = v6;
  LOBYTE(v11) = v9;
  updated = PpmPerfArbitratorApplyProcessorState(a1, v11, v12);
  if ( v7 )
  {
    KxReleaseSpinLock((volatile signed __int64 *)p_QosUpdateLock);
    if ( v13 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v16 = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( v16 )
      {
        _m_prefetchw(v16);
        v23 = *v16;
        do
        {
          v24 = v23;
          v23 = _InterlockedCompareExchange(v16, v23 & 0xFFDFFFFF, v23);
        }
        while ( v24 != v23 );
        if ( (v23 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      _enable();
    }
  }
  if ( updated )
  {
    if ( p_CheckContext == Domain->Master )
    {
      DomainPerfControlHandler = Domain->DomainPerfControlHandler;
      if ( DomainPerfControlHandler )
      {
        LOBYTE(v17) = a2;
        LOBYTE(v16) = v9;
        DomainPerfControlHandler(Domain->DomainContext, Domain->QosSelection, (unsigned __int8)v16, v17);
      }
    }
    if ( !a2 )
    {
      PpmEventLegacyProcessorPerfStateChange(a1);
      PpmScaleIdleStateValues(&a1->PowerState);
      PpmEventTraceExpectedUtility(p_CheckContext);
    }
  }
  return updated;
}
