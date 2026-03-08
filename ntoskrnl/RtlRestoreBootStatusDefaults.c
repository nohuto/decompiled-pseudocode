/*
 * XREFs of RtlRestoreBootStatusDefaults @ 0x1409BAB20
 * Callers:
 *     PopBootStatRestoreDefaults @ 0x1409940B0 (PopBootStatRestoreDefaults.c)
 * Callees:
 *     RtlGetNtProductType @ 0x140303E90 (RtlGetNtProductType.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwWriteFile @ 0x140412410 (ZwWriteFile.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     RtlpRecordBootStatusData @ 0x14073D990 (RtlpRecordBootStatusData.c)
 */

__int64 __fastcall RtlRestoreBootStatusDefaults(HANDLE FileHandle)
{
  __int64 v2; // rdx
  const __m128i *v3; // rax
  __m128i v4; // xmm1
  __int64 v5; // rcx
  __m128i v6; // xmm0
  __m128i v7; // xmm1
  __m128i v8; // xmm1
  __m128i v9; // xmm1
  NTSTATUS v10; // edx
  _OWORD *v11; // rcx
  _OWORD *v12; // rcx
  LARGE_INTEGER ByteOffset; // [rsp+50h] [rbp-B0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE Buffer[192]; // [rsp+70h] [rbp-90h] BYREF

  IoStatusBlock = 0LL;
  memset(&Buffer[4], 0, 0xBCuLL);
  *(_DWORD *)Buffer = 192;
  RtlGetNtProductType(&Buffer[4], v2);
  *(_DWORD *)&Buffer[184] = 0;
  v3 = (const __m128i *)Buffer;
  v4 = 0LL;
  *(_WORD *)&Buffer[9] = 286;
  v5 = 12LL;
  Buffer[49] = 1;
  Buffer[11] = 0;
  do
  {
    v6 = _mm_loadu_si128(v3++);
    v4 = _mm_sub_epi8(v4, v6);
    --v5;
  }
  while ( v5 );
  ByteOffset.QuadPart = 0LL;
  v7 = _mm_add_epi8(v4, _mm_srli_si128(v4, 8));
  v8 = _mm_add_epi8(v7, _mm_srli_si128(v7, 4));
  v9 = _mm_add_epi8(v8, _mm_srli_si128(v8, 2));
  Buffer[50] = _mm_cvtsi128_si32(_mm_add_epi8(v9, _mm_srli_si128(v9, 1)));
  RtlpRecordBootStatusData(0, (__int64)Buffer, 0LL, 192LL);
  v10 = ZwWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, 0xC0u, &ByteOffset, 0LL);
  if ( v10 >= 0 )
  {
    if ( BootStatFileHandleAcquired )
    {
      if ( BootStatFileHandle == FileHandle )
      {
        v11 = BootStatDataCache;
        if ( BootStatDataCache )
        {
          *(_OWORD *)BootStatDataCache = *(_OWORD *)Buffer;
          v11[1] = *(_OWORD *)&Buffer[16];
          v11[2] = *(_OWORD *)&Buffer[32];
          v11[3] = *(_OWORD *)&Buffer[48];
          v11[4] = *(_OWORD *)&Buffer[64];
          v11[5] = *(_OWORD *)&Buffer[80];
          v11[6] = *(_OWORD *)&Buffer[96];
          v12 = v11 + 8;
          *(v12 - 1) = *(_OWORD *)&Buffer[112];
          *v12 = *(_OWORD *)&Buffer[128];
          v12[1] = *(_OWORD *)&Buffer[144];
          v12[2] = *(_OWORD *)&Buffer[160];
          v12[3] = *(_OWORD *)&Buffer[176];
        }
      }
    }
  }
  return (unsigned int)v10;
}
