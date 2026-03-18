/*
 * XREFs of _guard_dispatch_icall_nop @ 0x1C00106A0
 * Callers:
 *     NVMeCompletionDpcRoutine @ 0x1C0002000 (NVMeCompletionDpcRoutine.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000A1DC (WaitForCommandCompleteWithCustomTimeout.c)
 *     StorNVMeDriverUnload @ 0x1C000FC20 (StorNVMeDriverUnload.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C000FFE4 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1C0010068 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1C0010198 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1C00106C0 (_guard_xfg_dispatch_icall_nop.c)
 *     NVMeCompleteSubmissionQueueRequests @ 0x1C0018820 (NVMeCompleteSubmissionQueueRequests.c)
 *     NVMeControllerAsyncResetWorker @ 0x1C0018A50 (NVMeControllerAsyncResetWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall guard_dispatch_icall_nop()
{
  __int64 (*v0)(void); // rax

  return v0();
}
