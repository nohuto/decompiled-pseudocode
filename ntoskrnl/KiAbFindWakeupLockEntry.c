/*
 * XREFs of KiAbFindWakeupLockEntry @ 0x1402398E8
 * Callers:
 *     KeAbPreWakeupThread @ 0x1402398AC (KeAbPreWakeupThread.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 */

__int64 __fastcall KiAbFindWakeupLockEntry(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rsi
  int SessionId; // r10d
  unsigned int v6; // r9d
  __int64 v8; // rcx
  __m128i *v9; // r8
  __int64 v10; // rax
  int v11; // edx
  __int128 v12; // rt0
  unsigned __int8 v13; // tt
  __int128 v15; // rt0
  unsigned __int8 v16; // tt

  v2 = 0LL;
  if ( (*(_BYTE *)(a2 + 792) | *(_BYTE *)(a2 + 870)) == 63 )
    return 0LL;
  v4 = a1 & 0x7FFFFFFFFFFFFFFCLL;
  if ( (unsigned __int64)(a1 - qword_140C65668) < 0x8000000000LL )
    SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
  else
    SessionId = -1;
  v6 = (*(unsigned __int8 *)(a2 + 792) | *(unsigned __int8 *)(a2 + 870)) ^ 0x3F;
  while ( _BitScanReverse((unsigned int *)&v8, v6) )
  {
    v6 &= ~(1 << v8);
    v9 = (__m128i *)(96 * v8 + a2 + 1696);
    if ( (v9->m128i_i64[0] & 0x7FFFFFFFFFFFFFFCLL) == v4 )
    {
      *(_QWORD *)&v12 = v9->m128i_i64[0];
      *((_QWORD *)&v12 + 1) = _mm_srli_si128(*v9, 8).m128i_u64[0];
      v13 = _InterlockedCompareExchange128(v9->m128i_i64, *((signed __int64 *)&v12 + 1), v12, (signed __int64 *)&v12);
      v10 = v12;
      v11 = DWORD2(v12);
      if ( v13
        || (*(_QWORD *)&v15 = v9->m128i_i64[0],
            *((_QWORD *)&v15 + 1) = _mm_srli_si128(*v9, 8).m128i_u64[0],
            v16 = _InterlockedCompareExchange128(
                    v9->m128i_i64,
                    *((signed __int64 *)&v15 + 1),
                    v15,
                    (signed __int64 *)&v15),
            v10 = v15,
            v11 = DWORD2(v15),
            v16) )
      {
        if ( v9[1].m128i_i8[1] && (v10 & 0x7FFFFFFFFFFFFFFCLL) == v4 && v11 == SessionId )
          return 96 * v8 + a2 + 1696;
      }
    }
  }
  return v2;
}
