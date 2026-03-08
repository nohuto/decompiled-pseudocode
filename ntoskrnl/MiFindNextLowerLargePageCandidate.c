/*
 * XREFs of MiFindNextLowerLargePageCandidate @ 0x1403A0318
 * Callers:
 *     MiPfnsWorthTrying @ 0x1403B6374 (MiPfnsWorthTrying.c)
 * Callees:
 *     RtlFindNextClearBitBackwardsEx @ 0x1403A03B0 (RtlFindNextClearBitBackwardsEx.c)
 */

unsigned __int64 __fastcall MiFindNextLowerLargePageCandidate(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // rax
  __int64 *v6; // r9
  _QWORD *v7; // rcx
  unsigned __int64 v8; // rsi
  __int64 NextClearBitBackwards; // rax
  unsigned __int64 v10; // rax

  if ( *(_BYTE *)(a1 + 15782) )
  {
    v5 = 0LL;
    v6 = MiLargePageSizes;
    do
    {
      if ( *v6 == a3 )
        break;
      v5 = (unsigned int)(v5 + 1);
      ++v6;
    }
    while ( (unsigned int)v5 < 3 );
    if ( (unsigned int)v5 <= 1 )
    {
      v7 = (_QWORD *)(16 * v5 + a1 + 16008);
      if ( *v7 )
      {
        v8 = a2 / a3;
        NextClearBitBackwards = RtlFindNextClearBitBackwardsEx(v7, a2 / a3, a3, v6);
        if ( NextClearBitBackwards == -1 )
          return 0LL;
        v10 = NextClearBitBackwards + 1;
        if ( v10 < v8 )
          return a3 * v10;
      }
    }
  }
  return a2;
}
