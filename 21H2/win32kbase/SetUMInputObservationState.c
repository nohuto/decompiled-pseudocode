/*
 * XREFs of SetUMInputObservationState @ 0x1C01AF124
 * Callers:
 *     NtMITSetInputObservationState @ 0x1C012B610 (NtMITSetInputObservationState.c)
 * Callees:
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0042200 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C0042A1C (_anonymous_namespace_--GetMouseProcessor.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?SetUMInputObservationState@CBaseProcessor@@QEAAXW4_MIT_INPUT_OBSERVATION_STATE@@@Z @ 0x1C01BB11C (-SetUMInputObservationState@CBaseProcessor@@QEAAXW4_MIT_INPUT_OBSERVATION_STATE@@@Z.c)
 */

__int64 __fastcall SetUMInputObservationState(int a1, int a2, unsigned int a3)
{
  CInputThread *v3; // rdi
  bool v7; // bl
  __int64 MouseProcessor; // rax

  v3 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v3, 0LL);
  v7 = CInputThread::_CalledOnInputThread(v3);
  ExReleasePushLockSharedEx(v3, 0LL);
  KeLeaveCriticalRegion();
  if ( !v7 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1730);
  if ( a1 != 1 || a2 != 4 )
    return 3221225506LL;
  MouseProcessor = anonymous_namespace_::GetMouseProcessor();
  CBaseProcessor::SetUMInputObservationState(MouseProcessor, a3);
  return 0LL;
}
