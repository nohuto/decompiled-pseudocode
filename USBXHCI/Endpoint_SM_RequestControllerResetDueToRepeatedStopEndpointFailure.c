/*
 * XREFs of Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure @ 0x1C003BA34
 * Callers:
 *     ESM_ResettingControllerDueToRepeatedStopEndpointFailure @ 0x1C0051B70 (ESM_ResettingControllerDueToRepeatedStopEndpointFailure.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C00142CC (WPP_RECORDER_SF_q.c)
 *     Controller_ReportFatalErrorEx @ 0x1C001EB8C (Controller_ReportFatalErrorEx.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0033774 (Controller_HwVerifierBreakIfEnabled.c)
 */

__int64 __fastcall Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure(__int64 *a1)
{
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(a1[10], 1, 13, 119, (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids, a1[3]);
  Controller_HwVerifierBreakIfEnabled(
    (_QWORD *)*a1,
    a1[1],
    a1[3],
    1024LL,
    "Stop Endpoint command repeatedly failed with context state error",
    0LL,
    0LL);
  return Controller_ReportFatalErrorEx(*a1, 2u, 4100, 0LL, 0LL, a1[2], (__int64)a1, 0LL);
}
