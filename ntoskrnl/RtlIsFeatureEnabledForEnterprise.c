/*
 * XREFs of RtlIsFeatureEnabledForEnterprise @ 0x14040BC10
 * Callers:
 *     <none>
 * Callees:
 *     Feature_REFSDV__private_IsEnabledNoReporting @ 0x14040A138 (Feature_REFSDV__private_IsEnabledNoReporting.c)
 *     RtlpEcReadPolicyState @ 0x14040BC60 (RtlpEcReadPolicyState.c)
 *     RtlpEcReadSkuUpdateManagementGroup @ 0x14040BD04 (RtlpEcReadSkuUpdateManagementGroup.c)
 *     RtlpIsEnterpriseTemporaryControl @ 0x14040C090 (RtlpIsEnterpriseTemporaryControl.c)
 */

char __fastcall RtlIsFeatureEnabledForEnterprise(unsigned int a1)
{
  char v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 1;
  if ( !(unsigned int)Feature_REFSDV__private_IsEnabledNoReporting() )
    return 1;
  if ( (unsigned __int8)RtlpIsEnterpriseTemporaryControl(a1) )
  {
    if ( (int)RtlpEcReadPolicyState(&v3) < 0 )
      RtlpEcReadSkuUpdateManagementGroup(&v3);
  }
  return v3;
}
