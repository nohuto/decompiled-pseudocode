/*
 * XREFs of xxxRemoteShadowSetup @ 0x1C0206E64
 * Callers:
 *     NtUserRemoteShadowSetup @ 0x1C01DAD20 (NtUserRemoteShadowSetup.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     xxxRemoteStopScreenUpdates @ 0x1C00F6E08 (xxxRemoteStopScreenUpdates.c)
 */

__int64 __fastcall xxxRemoteShadowSetup(__int64 a1, __int64 a2, __int64 a3)
{
  PDEVICE_OBJECT v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8

  v3 = WPP_GLOBAL_Control;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      21,
      4,
      9,
      21,
      (__int64)&WPP_b175c1f43ecf3cf0d465f249db37b465_Traceguids);
  if ( PsGetCurrentProcess(v3, a2, a3) != gpepCSRSS )
    return 3221225506LL;
  if ( gnShadowers || gbConnected )
    xxxRemoteStopScreenUpdates(gpepCSRSS, v4, v5);
  ++gnShadowers;
  return 0LL;
}
