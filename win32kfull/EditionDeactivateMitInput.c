// write access to const memory has been detected, the output may be wrong!
__int64 EditionDeactivateMitInput()
{
  int v0; // edx
  int v1; // r8d
  __int64 result; // rax
  PDEVICE_OBJECT v3; // rcx
  __int64 v4; // rax

  EtwTraceDitShutdown();
  result = gbMIT;
  if ( gbMIT )
  {
    v3 = WPP_GLOBAL_Control;
    LOBYTE(v0) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v0 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v1) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v0,
        v1,
        10,
        4,
        16,
        10,
        (__int64)&WPP_055ba95d3db539c1bc3dd3c9a24dcb47_Traceguids);
    }
    gbInMitRitHandOff = 1;
    v4 = SGDGetUserSessionState(v3);
    MasterInputThreadPrepareForRitTakeover((unsigned int)_InterlockedExchange((volatile __int32 *)(v4 + 15976), 0));
    gbMIT = 0;
    if ( gbTouchInjectionBlockedOnDIT )
      KeSetEvent((PRKEVENT)WPP_MAIN_CB.Dpc.ProcessorHistory, 1, 0);
    if ( gbMouseInjectionBlockedOnDIT )
      KeSetEvent((PRKEVENT)WPP_MAIN_CB.Dpc.SystemArgument1, 1, 0);
    if ( gpDitTouchInjectionDeviceInfo )
      HMAssignmentUnlock(&gpDitTouchInjectionDeviceInfo);
    if ( gbCompositionInputSinkQueryBlockedOnDIT )
      KeSetEvent(*(PRKEVENT *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong, 1, 0);
    gdwDeferWinEvent = 0;
    if ( gpIOCPDispatcher )
    {
      IOCPDispatcher::Close(gpIOCPDispatcher, 1);
      IOCPDispatcher_Destroy();
    }
    WakeRIT(8LL);
    WaitForRitToCompleteLastCommand();
    gbInMitRitHandOff = 0;
    return EnterLeaveCritMitRitHandOffHazard::ReleaseAllWaiters();
  }
  return result;
}
