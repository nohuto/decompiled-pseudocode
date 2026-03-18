/*
 * XREFs of EditionDeactivateMitInput @ 0x1C00A4240
 * Callers:
 *     <none>
 * Callees:
 *     WakeRIT @ 0x1C00A4548 (WakeRIT.c)
 *     WaitForRitToCompleteLastCommand @ 0x1C00A45A8 (WaitForRitToCompleteLastCommand.c)
 *     MasterInputThreadPrepareForRitTakeover @ 0x1C00A467C (MasterInputThreadPrepareForRitTakeover.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00E4884 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

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
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0
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
        20,
        10,
        (__int64)&WPP_a511392ea9ad3d53792706f0d7ee0b18_Traceguids);
    }
    gbInMitRitHandOff = 1;
    v4 = SGDGetUserSessionState(v3);
    MasterInputThreadPrepareForRitTakeover((unsigned int)_InterlockedExchange((volatile __int32 *)(v4 + 15976), 0));
  }
  return result;
}
