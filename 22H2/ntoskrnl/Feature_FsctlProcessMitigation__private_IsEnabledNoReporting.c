/*
 * XREFs of Feature_FsctlProcessMitigation__private_IsEnabledNoReporting @ 0x14040F5E4
 * Callers:
 *     PspApplyMitigationOptions @ 0x1406B3700 (PspApplyMitigationOptions.c)
 *     NtQueryInformationProcess @ 0x1406FCB40 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x140774A50 (NtSetInformationProcess.c)
 *     IoInitSystem @ 0x140B606E0 (IoInitSystem.c)
 * Callees:
 *     Feature_FsctlProcessMitigation__private_IsEnabledFallback @ 0x14040F5C8 (Feature_FsctlProcessMitigation__private_IsEnabledFallback.c)
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
