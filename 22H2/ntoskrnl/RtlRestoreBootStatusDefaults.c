/*
 * XREFs of RtlRestoreBootStatusDefaults @ 0x1409155F8
 * Callers:
 *     PopBootStatRestoreDefaults @ 0x1408F2588 (PopBootStatRestoreDefaults.c)
 * Callees:
 *     RtlGetNtProductType @ 0x14031B310 (RtlGetNtProductType.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwWriteFile @ 0x1403F9B20 (ZwWriteFile.c)
 *     memset @ 0x140413800 (memset.c)
 *     RtlpRecordBootStatusData @ 0x14078A454 (RtlpRecordBootStatusData.c)
 */

NTSTATUS __cdecl RtlRestoreBootStatusDefaults(HANDLE FileHandle)
{
  const __m128i *v2; // rax
  __m128i v3; // xmm1
  __int64 v4; // rcx
  __m128i v5; // xmm0
  __m128i v6; // xmm1
  __m128i v7; // xmm1
  __m128i v8; // xmm1
  int v9; // edx
  _OWORD *v10; // rcx
  _OWORD *v11; // rcx
  LARGE_INTEGER ByteOffset; // [rsp+50h] [rbp-B0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE Buffer[176]; // [rsp+70h] [rbp-90h] BYREF

  IoStatusBlock = 0LL;
  memset(&Buffer[4], 0, 0xACuLL);
  *(_DWORD *)Buffer = 176;
  RtlGetNtProductType((PNT_PRODUCT_TYPE)&Buffer[4]);
  *(_DWORD *)&Buffer[168] = 0;
  v2 = (const __m128i *)Buffer;
  v3 = 0LL;
  *(_WORD *)&Buffer[9] = 286;
  v4 = 11LL;
  Buffer[49] = 1;
  Buffer[11] = 0;
  do
  {
    v5 = _mm_loadu_si128(v2++);
    v3 = _mm_sub_epi8(v3, v5);
    --v4;
  }
  while ( v4 );
  ByteOffset.QuadPart = 0LL;
  v6 = _mm_add_epi8(v3, _mm_srli_si128(v3, 8));
  v7 = _mm_add_epi8(v6, _mm_srli_si128(v6, 4));
  v8 = _mm_add_epi8(v7, _mm_srli_si128(v7, 2));
  Buffer[50] = _mm_cvtsi128_si32(_mm_add_epi8(v8, _mm_srli_si128(v8, 1)));
  RtlpRecordBootStatusData(0, (__int64)Buffer, 0LL, 176LL);
  v9 = ZwWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, 0xB0u, &ByteOffset, 0LL);
  if ( v9 >= 0 )
  {
    if ( BootStatFileHandleAcquired )
    {
      if ( BootStatFileHandle == FileHandle )
      {
        v10 = BootStatDataCache;
        if ( BootStatDataCache )
        {
          *(_OWORD *)BootStatDataCache = *(_OWORD *)Buffer;
          v10[1] = *(_OWORD *)&Buffer[16];
          v10[2] = *(_OWORD *)&Buffer[32];
          v10[3] = *(_OWORD *)&Buffer[48];
          v10[4] = *(_OWORD *)&Buffer[64];
          v10[5] = *(_OWORD *)&Buffer[80];
          v10[6] = *(_OWORD *)&Buffer[96];
          v11 = v10 + 8;
          *(v11 - 1) = *(_OWORD *)&Buffer[112];
          *v11 = *(_OWORD *)&Buffer[128];
          v11[1] = *(_OWORD *)&Buffer[144];
          v11[2] = *(_OWORD *)&Buffer[160];
        }
      }
    }
  }
  return v9;
}
