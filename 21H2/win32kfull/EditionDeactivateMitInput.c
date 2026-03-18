/*
 * XREFs of EditionDeactivateMitInput @ 0x1C00FCE60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WaitForRitToCompleteLastCommand @ 0x1C00FD15C (WaitForRitToCompleteLastCommand.c)
 *     WakeRIT @ 0x1C00FD22C (WakeRIT.c)
 *     MasterInputThreadPrepareForRitTakeover @ 0x1C00FD2F0 (MasterInputThreadPrepareForRitTakeover.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 EditionDeactivateMitInput()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 result; // rax
  PDEVICE_OBJECT v3; // rcx

  EtwTraceDitShutdown();
  result = gbMIT;
  if ( gbMIT )
  {
    v3 = WPP_GLOBAL_Control;
    LOBYTE(v0) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(v1) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v0 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v0,
        v1,
        10,
        4,
        16,
        10,
        (__int64)&WPP_055ba95d3db539c1bc3dd3c9a24dcb47_Traceguids);
    gbInMitRitHandOff = 1;
    _InterlockedExchange(&glDitMouseHandling, 0);
    MasterInputThreadPrepareForRitTakeover(v3, v0, v1);
    gbMIT = 0;
    if ( gbTouchInjectionBlockedOnDIT )
      KeSetEvent(gpkeDITTouchInjectionResponseEvent, 1, 0);
    if ( gbMouseInjectionBlockedOnDIT )
      KeSetEvent(gpkeDITMouseInjectionResponseEvent, 1, 0);
    if ( gpDitTouchInjectionDeviceInfo )
      HMAssignmentUnlock(&gpDitTouchInjectionDeviceInfo);
    if ( gbCompositionInputSinkQueryBlockedOnDIT )
      KeSetEvent((PRKEVENT)gpkeDITCompositionInputSinkQueryResponseEvent, 1, 0);
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
