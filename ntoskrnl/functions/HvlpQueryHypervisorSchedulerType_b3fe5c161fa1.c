__int64 HvlpQueryHypervisorSchedulerType()
{
  ULONG LowPart; // edi
  PHYSICAL_ADDRESS *v1; // rbx
  PHYSICAL_ADDRESS *v2; // rsi
  __m256i v4; // [rsp+20h] [rbp-E8h] BYREF
  __m256i v5; // [rsp+40h] [rbp-C8h] BYREF
  int v6; // [rsp+60h] [rbp-A8h]
  _BYTE v7[16]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v8[2064]; // [rsp+78h] [rbp-90h] BYREF

  v6 = 0;
  memset(&v5.m256i_u64[1], 0, 24);
  v5.m256i_i32[0] = 0;
  memset(&v4.m256i_u64[1], 0, 24);
  LowPart = 0;
  v1 = HvlpAcquireHypercallPage((__int64)&v5.m256i_i64[1], 1, (__int64)v7, 8LL);
  v2 = HvlpAcquireHypercallPage((__int64)&v4.m256i_i64[1], 2, (__int64)v8, 1032LL);
  v1->LowPart = 15;
  if ( !(unsigned __int16)HvcallInitiateHypercall(123) )
    LowPart = v2->LowPart;
  HvlpReleaseHypercallPage((__int64)&v4.m256i_i64[1]);
  HvlpReleaseHypercallPage((__int64)&v5.m256i_i64[1]);
  return LowPart;
}
