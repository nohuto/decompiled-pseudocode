/*
 * XREFs of Feature_FsctlProcessMitigation__private_IsEnabledNoReporting @ 0x14040A0E4
 * Callers:
 *     NtSetInformationProcess @ 0x1406EDFF0 (NtSetInformationProcess.c)
 *     PspApplyMitigationOptions @ 0x14070A66C (PspApplyMitigationOptions.c)
 *     NtQueryInformationProcess @ 0x1407215F0 (NtQueryInformationProcess.c)
 *     IoInitSystem @ 0x140B5E3E0 (IoInitSystem.c)
 * Callees:
 *     Feature_FsctlProcessMitigation__private_IsEnabledFallback @ 0x14040A0C8 (Feature_FsctlProcessMitigation__private_IsEnabledFallback.c)
 */

__int64 Feature_FsctlProcessMitigation__private_IsEnabledNoReporting()
{
  if ( (Feature_FsctlProcessMitigation__private_featureState & 2) != 0 )
    return Feature_FsctlProcessMitigation__private_featureState & 1;
  else
    return Feature_FsctlProcessMitigation__private_IsEnabledFallback(
             (unsigned int)Feature_FsctlProcessMitigation__private_featureState,
             0);
}
