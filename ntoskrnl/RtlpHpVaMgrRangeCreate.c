/*
 * XREFs of RtlpHpVaMgrRangeCreate @ 0x140304A64
 * Callers:
 *     RtlpHpVaMgrRegionAllocate @ 0x1402F97BC (RtlpHpVaMgrRegionAllocate.c)
 *     RtlpHpVaMgrAlloc @ 0x14030424C (RtlpHpVaMgrAlloc.c)
 * Callees:
 *     RtlSparseArrayElementAllocate @ 0x140304B54 (RtlSparseArrayElementAllocate.c)
 *     RtlCSparseBitmapBitsClear @ 0x140309068 (RtlCSparseBitmapBitsClear.c)
 */

_BYTE *__fastcall RtlpHpVaMgrRangeCreate(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v7; // r14
  _BYTE *v8; // rax
  _BYTE *v9; // rsi
  __int64 v11; // rbp
  __int64 v12; // rax

  v3 = 0LL;
  if ( (*(_BYTE *)a3 & 4) != 0 )
    v7 = *(_QWORD *)(a3 + 24);
  else
    v7 = *(unsigned __int16 *)(a3 + 24);
  v8 = (_BYTE *)RtlSparseArrayElementAllocate(
                  *(_QWORD *)(a1 + 24) + 16LL,
                  (unsigned __int64)(a2 - *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL)) >> 20);
  v9 = v8;
  if ( v8 )
  {
    if ( (*v8 & 4) == 0 )
    {
      v11 = a2 + 0x100000;
      *(_BYTE *)a3 |= 2u;
      v3 = 1LL;
      *(_BYTE *)(a3 + 1) = *(_BYTE *)(a1 + 44);
      *(_OWORD *)(a3 + 8) = 0LL;
      *(_QWORD *)(a3 + 24) = 2309737967LL;
      while ( v3 < v7 )
      {
        if ( !RtlSparseArrayElementAllocate(
                *(_QWORD *)(a1 + 24) + 16LL,
                (unsigned __int64)(v11 - *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL)) >> 20) )
          goto LABEL_11;
        ++v3;
        v11 += 0x100000LL;
      }
    }
  }
  else
  {
    v9 = 0LL;
LABEL_11:
    if ( v3 < v7 )
    {
      for ( ; v3; --v3 )
      {
        v12 = *(_QWORD *)(a1 + 24);
        RtlCSparseBitmapBitsClear(
          v12 + 32,
          8 * ((unsigned __int64)&v9[-*(_QWORD *)(v12 + 40)] >> *(_DWORD *)(v12 + 24) << *(_DWORD *)(v12 + 24)),
          8 * (1LL << *(_DWORD *)(v12 + 24)));
        v9 += 32;
      }
      return 0LL;
    }
  }
  return v9;
}
