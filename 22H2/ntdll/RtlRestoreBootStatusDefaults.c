/*
 * XREFs of RtlRestoreBootStatusDefaults @ 0x1800EE040
 * Callers:
 *     RtlCreateBootStatusDataFile @ 0x1800EDD40 (RtlCreateBootStatusDataFile.c)
 * Callees:
 *     RtlGetNtProductType @ 0x18003CBB0 (RtlGetNtProductType.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     NtWriteFile @ 0x18009D5E0 (NtWriteFile.c)
 *     memset @ 0x1800A4600 (memset.c)
 *     RtlpRecordBootStatusData @ 0x1800EE504 (RtlpRecordBootStatusData.c)
 */

__int64 RtlRestoreBootStatusDefaults()
{
  const __m128i *v0; // rax
  __m128i v1; // xmm1
  __int64 v2; // rcx
  __m128i v3; // xmm0
  __m128i v4; // xmm1
  __m128i v5; // xmm1
  __m128i v6; // xmm1
  int v8; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v9[43]; // [rsp+74h] [rbp-8Ch] BYREF

  memset(v9, 0, sizeof(v9));
  v8 = 176;
  RtlGetNtProductType(v9);
  v9[41] = 0;
  v0 = (const __m128i *)&v8;
  v1 = 0LL;
  *(_WORD *)((char *)&v9[1] + 1) = 286;
  v2 = 11LL;
  BYTE1(v9[11]) = 1;
  HIBYTE(v9[1]) = 0;
  do
  {
    v3 = _mm_loadu_si128(v0++);
    v1 = _mm_sub_epi8(v1, v3);
    --v2;
  }
  while ( v2 );
  v4 = _mm_add_epi8(v1, _mm_srli_si128(v1, 8));
  v5 = _mm_add_epi8(v4, _mm_srli_si128(v4, 4));
  v6 = _mm_add_epi8(v5, _mm_srli_si128(v5, 2));
  BYTE2(v9[11]) = _mm_cvtsi128_si32(_mm_add_epi8(v6, _mm_srli_si128(v6, 1)));
  RtlpRecordBootStatusData(0LL, &v8, 0LL, 176LL);
  return NtWriteFile();
}
