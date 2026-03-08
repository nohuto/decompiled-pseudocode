/*
 * XREFs of rimNullXYPolicyUpdateStateAndApply @ 0x1C01D8CE0
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x1C00F1204 (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C01DE1B0 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmRemoveContactSuppressionReasons @ 0x1C01DECA4 (RIMCmRemoveContactSuppressionReasons.c)
 */

__int64 __fastcall rimNullXYPolicyUpdateStateAndApply(__int64 a1, _DWORD *a2, int a3, int a4)
{
  _DWORD *v4; // rbx
  __int64 result; // rax

  v4 = a2;
  if ( *(_DWORD *)(a1 + 24) == 5 )
  {
    if ( !a3 && !a4 )
      return RIMCmRemoveContactSuppressionReasons(a1, a2, 32LL);
    if ( (a2[611] & 6) != 2 )
    {
      LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_d(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)a2,
          a3,
          (_DWORD)gRimLog,
          4,
          1,
          45,
          (__int64)&WPP_588086c926cf32b63ac6e140c3a41c5a_Traceguids,
          *v4);
      }
    }
    goto LABEL_25;
  }
  if ( a3 || a4 )
  {
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)a2,
        a3,
        (_DWORD)gRimLog,
        4,
        1,
        46,
        (__int64)&WPP_588086c926cf32b63ac6e140c3a41c5a_Traceguids,
        *v4);
    }
LABEL_25:
    result = RIMCmAddContactSuppressionReasons(a1, v4);
    v4[611] |= 0x8000u;
  }
  return result;
}
