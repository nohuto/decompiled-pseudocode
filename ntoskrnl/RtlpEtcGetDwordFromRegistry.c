/*
 * XREFs of RtlpEtcGetDwordFromRegistry @ 0x14040BE44
 * Callers:
 *     RtlpEtcGetDwordFromPersistedState @ 0x14040BD88 (RtlpEtcGetDwordFromPersistedState.c)
 *     RtlpEtcIsValidFeatureId @ 0x14040BEC0 (RtlpEtcIsValidFeatureId.c)
 *     RtlpIsEnterpriseTemporaryControl @ 0x14040C090 (RtlpIsEnterpriseTemporaryControl.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     RtlQueryRegistryValuesEx @ 0x14069DF10 (RtlQueryRegistryValuesEx.c)
 */

__int64 __fastcall RtlpEtcGetDwordFromRegistry(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v7[14]; // [rsp+30h] [rbp-78h] BYREF

  memset(v7, 0, sizeof(v7));
  LODWORD(v7[1]) = 308;
  v7[2] = a2;
  LODWORD(v7[4]) = 0x4000000;
  v7[3] = a3;
  return RtlQueryRegistryValuesEx(0LL, a1, v7, 0LL, 0LL);
}
