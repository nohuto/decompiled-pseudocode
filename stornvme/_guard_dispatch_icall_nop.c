/*
 * XREFs of _guard_dispatch_icall_nop @ 0x1C0004200
 * Callers:
 *     NVMeCompletionDpcRoutine @ 0x1C00023F0 (NVMeCompletionDpcRoutine.c)
 *     StorNVMeDriverUnload @ 0x1C0003670 (StorNVMeDriverUnload.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0003A6C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1C0003AE8 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1C0003BD4 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1C0004220 (_guard_xfg_dispatch_icall_nop.c)
 *     NVMeCompleteSubmissionQueueRequests @ 0x1C000C644 (NVMeCompleteSubmissionQueueRequests.c)
 *     NVMeControllerAsyncResetWorker @ 0x1C000CBD0 (NVMeControllerAsyncResetWorker.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025560 (WaitForCommandCompleteWithCustomTimeout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall guard_dispatch_icall_nop()
{
  __int64 (*v0)(void); // rax

  return v0();
}
