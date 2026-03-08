/*
 * XREFs of ExpInsertLowLevelTableIntoFreeList @ 0x140706518
 * Callers:
 *     ExpAllocateHandleTable @ 0x140706348 (ExpAllocateHandleTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x14070644C (ExpAllocateHandleTableEntrySlow.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 */

signed __int32 __fastcall ExpInsertLowLevelTableIntoFreeList(
        volatile signed __int32 *a1,
        _QWORD *a2,
        ULONG_PTR a3,
        char a4)
{
  __m128i v5; // xmm2
  unsigned int v7; // r8d
  _QWORD *v8; // rdx
  unsigned __int64 v9; // r10
  __m128i v10; // xmm3
  unsigned int v11; // eax
  __m128i v12; // xmm1
  _QWORD *v13; // rsi
  signed __int32 result; // eax
  _QWORD *v15; // rdi
  __m128i v16; // [rsp+20h] [rbp-18h]

  v5 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a2, (__m128i)(unsigned __int64)a2);
  if ( a4 )
  {
    v7 = 1;
    v8 = a2 + 3;
    v9 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
    v10 = _mm_cvtsi32_si128(4u);
    do
    {
      v11 = v7 + 1;
      *(v8 - 1) = 0LL;
      v7 += 2;
      v16.m128i_i64[0] = _xmm;
      v8[1] = v9;
      v12 = _mm_add_epi64(
              _mm_sll_epi64(
                _mm_unpacklo_epi32(_mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v11), 0), v16), (__m128i)0LL),
                v10),
              v5);
      *v8 = v12.m128i_i64[0];
      v8 += 4;
      *(v8 - 2) = _mm_srli_si128(v12, 8).m128i_u64[0];
    }
    while ( v7 < 0xFF );
    v13 = a2 + 510;
    a2[510] = 0LL;
    a2[511] = 0LL;
  }
  else
  {
    v13 = a2 + 510;
  }
  result = _InterlockedExchangeAdd(a1, 0x400u);
  if ( a4 )
  {
    ExAcquirePushLockExclusiveEx(a3, 0LL);
    v15 = a2 + 2;
    if ( *(_QWORD *)(a3 + 8) )
      *(_QWORD *)(*(_QWORD *)(a3 + 16) + 8LL) = v15;
    else
      *(_QWORD *)(a3 + 8) = v15;
    *(_QWORD *)(a3 + 16) = v13;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)a3);
    return KeAbPostRelease(a3);
  }
  return result;
}
