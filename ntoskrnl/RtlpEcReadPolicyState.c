/*
 * XREFs of RtlpEcReadPolicyState @ 0x14040BC60
 * Callers:
 *     RtlIsFeatureEnabledForEnterprise @ 0x14040BC10 (RtlIsFeatureEnabledForEnterprise.c)
 * Callees:
 *     RtlpEtcGetDwordFromPersistedState @ 0x14040BD88 (RtlpEtcGetDwordFromPersistedState.c)
 */

__int64 __fastcall RtlpEcReadPolicyState(bool *a1)
{
  int DwordFromPersistedState; // edx
  int v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  DwordFromPersistedState = RtlpEtcGetDwordFromPersistedState(
                              (unsigned int)L"WindowsUpdate",
                              (unsigned int)L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\WindowsUpdate",
                              26,
                              (unsigned int)L"\\UpdatePolicy\\PolicyState",
                              (__int64)L"TemporaryEnterpriseFeatureControlState",
                              (__int64)&v4);
  if ( DwordFromPersistedState >= 0
    || (DwordFromPersistedState = RtlpEtcGetDwordFromPersistedState(
                                    (unsigned int)L"FeatureManagement",
                                    (unsigned int)L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\FeatureManagement",
                                    10,
                                    (unsigned int)L"\\Policies",
                                    (__int64)L"TemporaryEnterpriseFeatureControlState_Mirrored",
                                    (__int64)&v4),
        DwordFromPersistedState >= 0) )
  {
    *a1 = (unsigned int)(v4 - 1) <= 1;
  }
  return (unsigned int)DwordFromPersistedState;
}
