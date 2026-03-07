bool __fastcall Endpoint_IsCandidateForSplitTransactionHSIIWorkaround(__m128i **a1)
{
  __m128i *v2; // rax
  int v3; // eax

  Feature_SplitTransactionHSIIWorkaround__private_ReportDeviceUsage();
  if ( (_mm_srli_si128((*a1)[21], 8).m128i_u64[0] & 0x100000) == 0 )
    return 0;
  v2 = a1[2];
  if ( v2[2].m128i_i32[1] <= 1u || v2[1].m128i_i32[1] > 1u )
    return 0;
  v3 = *((_DWORD *)a1 + 30);
  return v3 == 3 || v3 == 7;
}
