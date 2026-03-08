/*
 * XREFs of rimConfidenceBitPolicyUpdateStateAndApply @ 0x1C01D5E18
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x1C00F1204 (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C01DE1B0 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C01DEB84 (RIMCmIsContactDeliveringPointerData.c)
 *     RIMCmRemoveContactSuppressionReasons @ 0x1C01DECA4 (RIMCmRemoveContactSuppressionReasons.c)
 *     ApiSetEtwTraceTouchPadConfidenceCleared @ 0x1C0244008 (ApiSetEtwTraceTouchPadConfidenceCleared.c)
 */

__int64 __fastcall rimConfidenceBitPolicyUpdateStateAndApply(__int64 a1, unsigned int *a2, int a3)
{
  int v3; // esi
  unsigned int *v4; // rbx
  __int64 result; // rax
  unsigned int IsContactDeliveringPointerData; // eax
  _BOOL8 v8; // rdx
  PDEVICE_OBJECT v9; // rcx
  __int16 v10; // r9

  v3 = a3;
  v4 = a2;
  if ( a3 || (result = *(unsigned int *)(a1 + 360), (result & 4) != 0) && (a2[611] & 0x4000) == 0 )
  {
    if ( *(_DWORD *)(a1 + 24) == 7 && (a2[2] & 0x10) == 0 )
    {
      IsContactDeliveringPointerData = RIMCmIsContactDeliveringPointerData(a2);
      v8 = (v4[611] & 4) != 0 && (v4[671] & 4) == 0;
      ApiSetEtwTraceTouchPadConfidenceCleared(*v4, v8, IsContactDeliveringPointerData);
    }
    if ( v3 )
    {
      v9 = WPP_GLOBAL_Control;
      LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)a2 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_29;
      v10 = 41;
    }
    else
    {
      v9 = WPP_GLOBAL_Control;
      LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)a2 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_29;
      v10 = 42;
    }
    WPP_RECORDER_AND_TRACE_SF_d(
      v9->AttachedDevice,
      (_DWORD)a2,
      a3,
      (_DWORD)gRimLog,
      4,
      1,
      v10,
      (__int64)&WPP_588086c926cf32b63ac6e140c3a41c5a_Traceguids,
      *v4);
LABEL_29:
    result = RIMCmAddContactSuppressionReasons(a1, v4);
    v4[611] |= 0x8000u;
  }
  if ( *(_DWORD *)(a1 + 24) == 7 )
  {
    result = v4[2];
    if ( (result & 0x10) != 0 )
    {
      result = v4[611] & 0x1004000;
      if ( (_DWORD)result == 16793600 )
      {
        if ( (v4[8] & 1) == 0 )
          return RIMCmRemoveContactSuppressionReasons(a1, v4, 16LL);
        result = *(unsigned int *)(a1 + 360);
        if ( (result & 8) != 0 )
          return RIMCmRemoveContactSuppressionReasons(a1, v4, 16LL);
      }
    }
  }
  return result;
}
