/*
 * XREFs of Feature_Servicing_BypassGraphicsFreezeNotification__private_IsEnabledDeviceUsage @ 0x14040BA70
 * Callers:
 *     PspSetJobFreezeCountCallback @ 0x140300810 (PspSetJobFreezeCountCallback.c)
 *     PspChangeProcessExecutionState @ 0x1406F8AC0 (PspChangeProcessExecutionState.c)
 *     NtQueryInformationJobObject @ 0x1406F9480 (NtQueryInformationJobObject.c)
 *     PspRemoveProcessFromJobChain @ 0x1406FB110 (PspRemoveProcessFromJobChain.c)
 *     NtSetInformationJobObject @ 0x1406FC3C0 (NtSetInformationJobObject.c)
 *     PspApplyJobChainLimitsToProcess @ 0x1406FF27C (PspApplyJobChainLimitsToProcess.c)
 *     PspEstablishJobHierarchy @ 0x1407001E0 (PspEstablishJobHierarchy.c)
 *     PspFreezeJobTree @ 0x140751738 (PspFreezeJobTree.c)
 *     PsSwapProcessWorkingSet @ 0x1409AB6DC (PsSwapProcessWorkingSet.c)
 * Callees:
 *     Feature_Servicing_BypassGraphicsFreezeNotification__private_IsEnabledFallback @ 0x14040BAA8 (Feature_Servicing_BypassGraphicsFreezeNotification__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_BypassGraphicsFreezeNotification__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_BypassGraphicsFreezeNotification__private_featureState & 0x10) != 0 )
    return Feature_Servicing_BypassGraphicsFreezeNotification__private_featureState & 1;
  else
    return Feature_Servicing_BypassGraphicsFreezeNotification__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_BypassGraphicsFreezeNotification__private_featureState,
             3LL);
}
