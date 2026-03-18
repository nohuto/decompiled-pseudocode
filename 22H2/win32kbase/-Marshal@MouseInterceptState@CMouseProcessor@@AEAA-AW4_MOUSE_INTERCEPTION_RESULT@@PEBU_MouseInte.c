/*
 * XREFs of ?Marshal@MouseInterceptState@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C01F8AC4
 * Callers:
 *     ?CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C01F54D4 (-CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C00742F0 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     RIMLockShared @ 0x1C0096B30 (RIMLockShared.c)
 *     GreLeaveCriticalRegionAndReleasePushLockShared @ 0x1C0096F70 (GreLeaveCriticalRegionAndReleasePushLockShared.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     ?IsCurrentInputDesktopInterceptable@MouseInterceptState@CMouseProcessor@@AEBA_NXZ @ 0x1C00E635A (-IsCurrentInputDesktopInterceptable@MouseInterceptState@CMouseProcessor@@AEBA_NXZ.c)
 *     ?PrepareForMarshaling@MouseInterceptState@CMouseProcessor@@AEAA_NPEBU_MouseInterceptorData@@@Z @ 0x1C01F9298 (-PrepareForMarshaling@MouseInterceptState@CMouseProcessor@@AEAA_NPEBU_MouseInterceptorData@@@Z.c)
 *     ?WaitForCallout@MarshalSync@MouseInterceptState@CMouseProcessor@@QEAA_NPEAU_KTHREAD@@@Z @ 0x1C01FB930 (-WaitForCallout@MarshalSync@MouseInterceptState@CMouseProcessor@@QEAA_NPEAU_KTHREAD@@@Z.c)
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
    && qword_1C0296C70
    && (int)qword_1C0296C70() >= 0
    && qword_1C0296C78
    && (unsigned int)qword_1C0296C78() )
  {
    BufferChainingDpc = WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc;
    p_DpcListEntry = &WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc->DpcListEntry;
    RIMLockShared((__int64)&WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc->DpcListEntry);
    SystemArgument1 = (struct _KTHREAD *)BufferChainingDpc->SystemArgument1;
    GreLeaveCriticalRegionAndReleasePushLockShared((__int64)p_DpcListEntry);
    if ( !SystemArgument1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8194);
    CInpPushLock::UnLockExclusive((CInpPushLock *)a1);
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
