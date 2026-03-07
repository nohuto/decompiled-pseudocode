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
