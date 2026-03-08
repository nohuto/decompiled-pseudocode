/*
 * XREFs of ?Marshal@MouseInterceptState@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C022EB38
 * Callers:
 *     ?CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C022B2E4 (-CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?IsCurrentInputDesktopInterceptable@MouseInterceptState@CMouseProcessor@@AEBA_NXZ @ 0x1C00F4AEA (-IsCurrentInputDesktopInterceptable@MouseInterceptState@CMouseProcessor@@AEBA_NXZ.c)
 *     ?PrepareForMarshaling@MouseInterceptState@CMouseProcessor@@AEAA_NPEBU_MouseInterceptorData@@@Z @ 0x1C022F320 (-PrepareForMarshaling@MouseInterceptState@CMouseProcessor@@AEAA_NPEBU_MouseInterceptorData@@@Z.c)
 *     ?WaitForCallout@MarshalSync@MouseInterceptState@CMouseProcessor@@QEAA_NPEAU_KTHREAD@@@Z @ 0x1C0231B6C (-WaitForCallout@MarshalSync@MouseInterceptState@CMouseProcessor@@QEAA_NPEAU_KTHREAD@@@Z.c)
 *     ApiSetEditionExtensibility_WakeMITForInterceptCallout @ 0x1C023DC58 (ApiSetEditionExtensibility_WakeMITForInterceptCallout.c)
 */

__int64 __fastcall CMouseProcessor::MouseInterceptState::Marshal(
        __int64 a1,
        const struct _MouseInterceptorData *a2,
        _QWORD *a3)
{
  PKDPC BufferChainingDpc; // rdi
  SINGLE_LIST_ENTRY *p_DpcListEntry; // rbx
  struct _KTHREAD *SystemArgument1; // rdi
  bool v8; // bl

  if ( CMouseProcessor::MouseInterceptState::PrepareForMarshaling((CMouseProcessor::MouseInterceptState *)a1, a2)
    && (unsigned int)ApiSetEditionExtensibility_WakeMITForInterceptCallout() )
  {
    BufferChainingDpc = WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc;
    p_DpcListEntry = &WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc->DpcListEntry;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(p_DpcListEntry, 0LL);
    SystemArgument1 = (struct _KTHREAD *)BufferChainingDpc->SystemArgument1;
    ExReleasePushLockSharedEx(p_DpcListEntry, 0LL);
    KeLeaveCriticalRegion();
    if ( !SystemArgument1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8161);
    *(_QWORD *)(a1 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(a1, 0LL);
    KeLeaveCriticalRegion();
    v8 = CMouseProcessor::MouseInterceptState::MarshalSync::WaitForCallout(
           (CMouseProcessor::MouseInterceptState::MarshalSync *)(a1 + 112),
           SystemArgument1);
    RIMLockExclusive(a1);
    if ( !v8
      || !CMouseProcessor::MouseInterceptState::IsCurrentInputDesktopInterceptable((CMouseProcessor::MouseInterceptState *)a1) )
    {
      *(_OWORD *)(a1 + 88) = 0LL;
      *(_QWORD *)(a1 + 104) = 0LL;
    }
  }
  *(_OWORD *)a3 = *(_OWORD *)(a1 + 88);
  a3[2] = *(_QWORD *)(a1 + 104);
  return *(unsigned int *)a3;
}
