/*
 * XREFs of rimDigitizerActiveBitPolicyUpdateStateAndApply @ 0x1C01AEA44
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x1C00E70E4 (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C01B61C4 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmRemoveContactSuppressionReasons @ 0x1C01B69D4 (RIMCmRemoveContactSuppressionReasons.c)
 */

__int64 __fastcall rimDigitizerActiveBitPolicyUpdateStateAndApply(__int64 a1, _DWORD *a2)
{
  int v3; // edx
  int v4; // edx
  int v5; // r8d
  PDEVICE_OBJECT v6; // rcx
  __int64 result; // rax
  __int16 v8; // r9

  v3 = a2[605];
  if ( (v3 & 0x1000002) == 0x1000000 )
  {
    RIMCmAddContactSuppressionReasons(a1, a2);
    v6 = WPP_GLOBAL_Control;
    LOBYTE(v4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    result = (__int64)&WPP_RECORDER_INITIALIZED;
    LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = 43;
      return WPP_RECORDER_AND_TRACE_SF_D(
               v6->AttachedDevice,
               v4,
               v5,
               (_DWORD)gRimLog,
               4,
               1,
               v8,
               (__int64)&WPP_1efb6e2ef4cb3417e9748b712cab1da4_Traceguids,
               *a2);
    }
  }
  else
  {
    result = (unsigned int)a2[2];
    if ( (result & 0x40) != 0 && (v3 & 2) != 0 )
    {
      RIMCmRemoveContactSuppressionReasons(a1, a2, 64LL);
      v6 = WPP_GLOBAL_Control;
      LOBYTE(v4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      result = (__int64)&WPP_RECORDER_INITIALIZED;
      LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v8 = 44;
        return WPP_RECORDER_AND_TRACE_SF_D(
                 v6->AttachedDevice,
                 v4,
                 v5,
                 (_DWORD)gRimLog,
                 4,
                 1,
                 v8,
                 (__int64)&WPP_1efb6e2ef4cb3417e9748b712cab1da4_Traceguids,
                 *a2);
      }
    }
  }
  return result;
}
