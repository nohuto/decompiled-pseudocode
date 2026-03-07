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
