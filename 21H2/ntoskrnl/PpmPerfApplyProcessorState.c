/*
 * XREFs of PpmPerfApplyProcessorState @ 0x14023B798
 * Callers:
 *     PpmPerfApplyProcessorStates @ 0x14023B5A0 (PpmPerfApplyProcessorStates.c)
 *     PpmPerfAction @ 0x140343B00 (PpmPerfAction.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140211E00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     PpmPerfArbitratorApplyProcessorState @ 0x14023B8E8 (PpmPerfArbitratorApplyProcessorState.c)
 *     PpmEventTraceExpectedUtility @ 0x14023BB5C (PpmEventTraceExpectedUtility.c)
 *     PpmScaleIdleStateValues @ 0x14023BC48 (PpmScaleIdleStateValues.c)
 *     PpmEventLegacyProcessorPerfStateChange @ 0x14023BC68 (PpmEventLegacyProcessorPerfStateChange.c)
 *     PpmContinueActiveTimeAccumulation @ 0x140293988 (PpmContinueActiveTimeAccumulation.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     PpmUpdatePerformanceFeedback @ 0x1403072A0 (PpmUpdatePerformanceFeedback.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     PpmGetIdleGenerationCounter @ 0x1405C75D0 (PpmGetIdleGenerationCounter.c)
 */

char __fastcall PpmPerfApplyProcessorState(struct _KPRCB *a1, char a2)
{
  _PROC_PERF_CONSTRAINT *Constraint; // r13
  _PROC_PERF_CHECK_CONTEXT *p_CheckContext; // r12
  _PROC_PERF_DOMAIN *Domain; // rsi
  char v6; // bl
  char v7; // r15
  _PROC_PERF_CHECK_CONTEXT *Master; // rcx
  bool v9; // bp
  LARGE_INTEGER PerformanceCounter; // rdx
  __int64 v11; // rdx
  __int64 v12; // r8
  bool v13; // r14
  KSPIN_LOCK *p_QosUpdateLock; // r13
  char updated; // bl
  __int64 v16; // r8
  __int64 v17; // r9
  void (__fastcall *DomainPerfControlHandler)(unsigned __int64, _PERF_CONTROL_STATE_SELECTION *, unsigned __int8, unsigned __int8); // rax
  int v20; // r8d
  __int64 v21; // r14
  __int64 v22; // rdx
  __int16 v23; // [rsp+60h] [rbp-8h]

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
    ((void (__fastcall *)(_QWORD, _QWORD))PpmContinueActiveTimeAccumulation)(
      a1,
      (LARGE_INTEGER)PerformanceCounter.QuadPart);
  }
  else
  {
    v21 = ((__int64 (__fastcall *)(_QWORD, _QWORD))PpmGetIdleGenerationCounter)(
            a1,
            (LARGE_INTEGER)PerformanceCounter.QuadPart);
    if ( !v21 )
      return 0;
    LOBYTE(v20) = 1;
    updated = PpmUpdatePerformanceFeedback((_DWORD)a1, 0, v20, 0, 0LL);
    if ( !updated )
      return updated;
    if ( v21 != PpmGetIdleGenerationCounter(a1, v22) )
      return 0;
    v6 = a2;
  }
  if ( Constraint->UseQosUpdateLock )
  {
    _disable();
    p_QosUpdateLock = &Constraint->QosUpdateLock;
    v13 = (v23 & 0x200) != 0;
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
    KxReleaseSpinLock(p_QosUpdateLock);
    if ( v13 )
      _enable();
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
        DomainPerfControlHandler(Domain->DomainContext, Domain->QosSelection, v16, v17);
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
