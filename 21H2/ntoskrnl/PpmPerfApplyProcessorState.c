/*
 * XREFs of PpmPerfApplyProcessorState @ 0x140398C8C
 * Callers:
 *     PpmPerfAction @ 0x1402C5070 (PpmPerfAction.c)
 *     PpmPerfApplyProcessorStates @ 0x140398AA0 (PpmPerfApplyProcessorStates.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     PpmContinueActiveTimeAccumulation @ 0x14026996C (PpmContinueActiveTimeAccumulation.c)
 *     PpmUpdatePerformanceFeedback @ 0x1402C8970 (PpmUpdatePerformanceFeedback.c)
 *     KxAcquireSpinLock @ 0x1402CDEB0 (KxAcquireSpinLock.c)
 *     KeQueryPerformanceCounter @ 0x1402D0BC0 (KeQueryPerformanceCounter.c)
 *     PpmPerfArbitratorApplyProcessorState @ 0x140398DF4 (PpmPerfArbitratorApplyProcessorState.c)
 *     PpmEventTraceExpectedUtility @ 0x140399078 (PpmEventTraceExpectedUtility.c)
 *     PpmScaleIdleStateValues @ 0x140399164 (PpmScaleIdleStateValues.c)
 *     PpmEventLegacyProcessorPerfStateChange @ 0x140399184 (PpmEventLegacyProcessorPerfStateChange.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     PpmGetIdleGenerationCounter @ 0x140565F50 (PpmGetIdleGenerationCounter.c)
 */

char __fastcall PpmPerfApplyProcessorState(struct _KPRCB *a1, char a2)
{
  _PROC_PERF_CONSTRAINT *Constraint; // rbp
  _PROC_PERF_CHECK_CONTEXT *p_CheckContext; // r13
  _PROC_PERF_DOMAIN *Domain; // rsi
  char v6; // bl
  char v7; // r12
  _PROC_PERF_CHECK_CONTEXT *Master; // rcx
  char v9; // r15
  LARGE_INTEGER PerformanceCounter; // rdx
  LARGE_INTEGER v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  KSPIN_LOCK *p_QosUpdateLock; // r14
  bool v16; // bp
  char updated; // bl
  __int64 v18; // r8
  __int64 v19; // r9
  void (__fastcall *DomainPerfControlHandler)(unsigned __int64, _PERF_CONTROL_STATE_SELECTION *, unsigned __int8, unsigned __int8); // rax
  __int64 v22; // rbp
  KSPIN_LOCK *v23; // rcx
  __int16 v24; // [rsp+60h] [rbp-8h]
  _PROC_PERF_CONSTRAINT *v25; // [rsp+70h] [rbp+8h]

  Constraint = a1->PowerState.CheckContext.Constraint;
  p_CheckContext = &a1->PowerState.CheckContext;
  Domain = a1->PowerState.CheckContext.Domain;
  v25 = Constraint;
  v6 = a2;
  v7 = 1;
  Master = Domain->Master;
  if ( p_CheckContext == Master || (v9 = 0, Domain->InitiateAllProcessors) )
    v9 = 1;
  if ( Domain->Coordination != 0xFD && a2 )
    v9 = 1;
  if ( a1 != KeGetCurrentPrcb() && (p_CheckContext == Master || v9 && Domain->AffinitizeControl) )
    return 0;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( KeGetCurrentPrcb() != a1 )
  {
    v22 = ((__int64 (__fastcall *)(_QWORD, _QWORD))PpmGetIdleGenerationCounter)(
            a1,
            (LARGE_INTEGER)PerformanceCounter.QuadPart);
    if ( v22 )
    {
      updated = PpmUpdatePerformanceFeedback((__int64)a1, 0, 1, 0, 0LL);
      if ( !updated )
      {
LABEL_30:
        if ( !updated )
          return updated;
        v6 = a2;
        Constraint = v25;
        goto LABEL_9;
      }
      if ( v22 == PpmGetIdleGenerationCounter(a1, v12) )
      {
        updated = 1;
        goto LABEL_30;
      }
    }
    return 0;
  }
  PpmContinueActiveTimeAccumulation((__int64)a1, PerformanceCounter.QuadPart, v11.QuadPart);
LABEL_9:
  p_QosUpdateLock = &Constraint->QosUpdateLock;
  if ( Constraint->UseQosUpdateLock )
  {
    _disable();
    v23 = &Constraint->QosUpdateLock;
    v16 = (v24 & 0x200) != 0;
    KxAcquireSpinLock(v23);
  }
  else
  {
    v7 = 0;
    v16 = 0;
  }
  LOBYTE(v13) = v6;
  LOBYTE(v12) = v9;
  updated = PpmPerfArbitratorApplyProcessorState(a1, v12, v13, v14);
  if ( v7 )
  {
    KxReleaseSpinLock(p_QosUpdateLock);
    if ( v16 )
      _enable();
  }
  if ( updated )
  {
    if ( p_CheckContext == Domain->Master )
    {
      DomainPerfControlHandler = Domain->DomainPerfControlHandler;
      if ( DomainPerfControlHandler )
      {
        LOBYTE(v19) = a2;
        LOBYTE(v18) = v9;
        DomainPerfControlHandler(Domain->DomainContext, Domain->QosSelection, v18, v19);
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
