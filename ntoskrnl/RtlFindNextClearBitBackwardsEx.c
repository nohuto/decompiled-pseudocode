/*
 * XREFs of RtlFindNextClearBitBackwardsEx @ 0x1403A03B0
 * Callers:
 *     MiFindNextLowerLargePageCandidate @ 0x1403A0318 (MiFindNextLowerLargePageCandidate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindNextClearBitBackwardsEx(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // r10d
  _QWORD *v3; // r9
  __int64 v4; // rdx
  bool i; // zf

  v2 = 63;
  v3 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * (a2 >> 6));
  v4 = *v3 | ~((1LL << (a2 & 0x3F)) - 1);
  if ( v4 == -1 )
  {
    for ( i = v3 == *(_QWORD **)(a1 + 8); !i; i = v3 == *(_QWORD **)(a1 + 8) )
    {
      v4 = *--v3;
      if ( *v3 != -1LL )
        goto LABEL_2;
    }
    return -1LL;
  }
  else
  {
LABEL_2:
    if ( v4 < 0 )
    {
      do
        --v2;
      while ( _bittest64(&v4, v2) );
    }
    return (((__int64)v3 - *(_QWORD *)(a1 + 8)) >> 3 << 6) + v2;
  }
}
