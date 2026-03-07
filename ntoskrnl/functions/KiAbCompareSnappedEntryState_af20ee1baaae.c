_BOOL8 __fastcall KiAbCompareSnappedEntryState(__m128i *a1, __int64 a2)
{
  __int64 v3; // rax
  int v4; // edx
  __int128 v5; // rt0
  unsigned __int8 v6; // tt

  *(_QWORD *)&v5 = a1->m128i_i64[0];
  *((_QWORD *)&v5 + 1) = _mm_srli_si128(*a1, 8).m128i_u64[0];
  v6 = _InterlockedCompareExchange128(a1->m128i_i64, *((signed __int64 *)&v5 + 1), v5, (signed __int64 *)&v5);
  v3 = v5;
  v4 = DWORD2(v5);
  return v6 && v3 < 0 && v4 == *(_DWORD *)(a2 + 8) && (v3 & 0x7FFFFFFFFFFFFFFCLL) == *(_QWORD *)a2;
}
