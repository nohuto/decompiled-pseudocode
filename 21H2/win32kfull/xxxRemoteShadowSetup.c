/*
 * XREFs of xxxRemoteShadowSetup @ 0x1C0220E00
 * Callers:
 *     NtUserRemoteShadowSetup @ 0x1C01FBF50 (NtUserRemoteShadowSetup.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     xxxRemoteStopScreenUpdates @ 0x1C0123460 (xxxRemoteStopScreenUpdates.c)
 */

__int64 __fastcall xxxRemoteShadowSetup(__int64 a1, __int64 a2)
{
  PDEVICE_OBJECT v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8

  v2 = WPP_GLOBAL_Control;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      21,
      4,
      9,
      21,
      (__int64)&WPP_03c1e4e6de07312e2b7c2fd77d6d27b0_Traceguids);
  if ( PsGetCurrentProcess(v2, a2) != gpepCSRSS )
    return 3221225506LL;
  if ( gnShadowers || gbConnected )
    xxxRemoteStopScreenUpdates(gpepCSRSS, v3, v4);
  ++gnShadowers;
  return 0LL;
}
