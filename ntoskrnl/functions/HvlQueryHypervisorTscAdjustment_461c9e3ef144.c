__int64 HvlQueryHypervisorTscAdjustment()
{
  __int64 v1; // rdi
  _DWORD *v2; // rbx
  __int64 *v3; // rsi
  __m256i v4; // [rsp+20h] [rbp-E8h] BYREF
  __m256i v5; // [rsp+40h] [rbp-C8h] BYREF
  int v6; // [rsp+60h] [rbp-A8h]
  _BYTE v7[16]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v8[2064]; // [rsp+78h] [rbp-90h] BYREF

  v6 = 0;
  v5.m256i_i32[0] = 0;
  memset(&v5.m256i_u64[1], 0, 24);
  memset(&v4.m256i_u64[1], 0, 24);
  if ( (HvlpRootFlags & 1) == 0 )
    return 0LL;
  v1 = 0LL;
  v2 = (_DWORD *)HvlpAcquireHypercallPage(&v5.m256i_u64[1], 1LL, v7, 8LL);
  v3 = (__int64 *)HvlpAcquireHypercallPage(&v4.m256i_u64[1], 2LL, v8, 1032LL);
  *v2 = 9;
  if ( !(unsigned __int16)HvcallInitiateHypercall(123) )
    v1 = *v3;
  HvlpReleaseHypercallPage(&v4.m256i_u64[1]);
  HvlpReleaseHypercallPage(&v5.m256i_u64[1]);
  return v1;
}
