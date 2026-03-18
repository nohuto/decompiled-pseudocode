/*
 * XREFs of rimNullXYPolicyUpdateStateAndApply @ 0x1C01AAC08
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x1C00E2D30 (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C01AFF90 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmRemoveContactSuppressionReasons @ 0x1C01B0A84 (RIMCmRemoveContactSuppressionReasons.c)
 */

__int64 __fastcall rimNullXYPolicyUpdateStateAndApply(__int64 a1, _DWORD *a2, int a3, int a4)
{
  __int64 result; // rax
  char v7; // dl
  char v8; // dl

  if ( *(_DWORD *)(a1 + 24) == 5 )
  {
    if ( !a3 && !a4 )
      return RIMCmRemoveContactSuppressionReasons(a1, a2, 32LL);
    if ( (a2[611] & 6) != 2 )
    {
      v7 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v7,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)gRimLog,
          4u,
          1u,
          0x2Du,
          (__int64)&WPP_acebe0338cf732913f05b3829fd55bbc_Traceguids,
          *a2);
    }
    goto LABEL_25;
  }
  if ( a3 || a4 )
  {
    v8 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v8,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gRimLog,
        4u,
        1u,
        0x2Eu,
        (__int64)&WPP_acebe0338cf732913f05b3829fd55bbc_Traceguids,
        *a2);
LABEL_25:
    result = RIMCmAddContactSuppressionReasons(a1, a2);
    a2[611] |= 0x8000u;
  }
  return result;
}
