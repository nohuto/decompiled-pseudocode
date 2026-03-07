bool __fastcall RtlpIsEnterpriseTemporaryControl(int a1)
{
  char v2; // di
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  v4 = 0;
  if ( (int)RtlpEtcGetDwordFromRegistry(
              (__int64)L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\FeatureManagement\\EnterpriseTempControls\\Active",
              (__int64)L"ActiveConfig",
              (__int64)&v4) >= 0 )
    return RtlpEtcIsValidFeatureId(__ROR4__(_byteswap_ulong(a1 ^ 0x74161A4E) ^ 0x8FB23D4F, 255) ^ 0x833EA8FF, v4);
  return v2;
}
