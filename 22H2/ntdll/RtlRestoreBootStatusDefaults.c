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

NTSTATUS __cdecl RtlRestoreBootStatusDefaults(HANDLE FileHandle)
{
  const __m128i *p_Buffer; // rax
  __m128i v3; // xmm1
  __int64 v4; // rcx
  __m128i v5; // xmm0
  __m128i v6; // xmm1
  __m128i v7; // xmm1
  __m128i v8; // xmm1
  LARGE_INTEGER ByteOffset; // [rsp+50h] [rbp-B0h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-A8h] BYREF
  int Buffer; // [rsp+70h] [rbp-90h] BYREF
  _NT_PRODUCT_TYPE NtProductType[43]; // [rsp+74h] [rbp-8Ch] BYREF

  memset(NtProductType, 0, sizeof(NtProductType));
  Buffer = 176;
  RtlGetNtProductType(NtProductType);
  NtProductType[41] = 0;
  p_Buffer = (const __m128i *)&Buffer;
  v3 = 0LL;
  *(_WORD *)((char *)&NtProductType[1] + 1) = 286;
  v4 = 11LL;
  BYTE1(NtProductType[11]) = 1;
  HIBYTE(NtProductType[1]) = 0;
  do
  {
    v5 = _mm_loadu_si128(p_Buffer++);
    v3 = _mm_sub_epi8(v3, v5);
    --v4;
  }
  while ( v4 );
  ByteOffset.QuadPart = 0LL;
  v6 = _mm_add_epi8(v3, _mm_srli_si128(v3, 8));
  v7 = _mm_add_epi8(v6, _mm_srli_si128(v6, 4));
  v8 = _mm_add_epi8(v7, _mm_srli_si128(v7, 2));
  BYTE2(NtProductType[11]) = _mm_cvtsi128_si32(_mm_add_epi8(v8, _mm_srli_si128(v8, 1)));
  RtlpRecordBootStatusData(0LL, &Buffer, 0LL, 176LL);
  return NtWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, &Buffer, 0xB0u, &ByteOffset, 0LL);
}
