/*
 * XREFs of MiRemoveSlabEntry @ 0x1403BC4FC
 * Callers:
 *     MiFreeSlabEntries @ 0x140361050 (MiFreeSlabEntries.c)
 *     MiDemoteSlabEntry @ 0x1403C826C (MiDemoteSlabEntry.c)
 *     MmUpdateSlabRangeType @ 0x140B9732C (MmUpdateSlabRangeType.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x14024C010 (RtlRbRemoveNode.c)
 */

__int64 __fastcall MiRemoveSlabEntry(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  unsigned __int64 v5; // rbp
  __int64 result; // rax
  __int64 v8; // r10
  unsigned __int64 v9; // rdx
  volatile signed __int32 *v10; // r8
  int v11; // ebp
  unsigned __int64 v12; // rcx

  v5 = *(_QWORD *)(a3 + 24) >> 9;
  RtlRbRemoveNode(a2, a3);
  if ( a2[4] == a3 )
    a2[4] = 0LL;
  if ( a2[5] == a3 )
    a2[5] = 0LL;
  a2[6] -= *(unsigned int *)(a3 + 132);
  if ( (*(_DWORD *)(a3 + 140) & 2) != 0 )
  {
    a2[8] -= 512LL;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 17856), 0xFFFFFFFFFFFFFE00uLL);
    v8 = v5 & 0x1F;
    LOBYTE(v9) = 1;
    v10 = (volatile signed __int32 *)(qword_140C6F000 + 4 * (v5 >> 5));
    result = v8 + 1;
    if ( (unsigned __int64)(v8 + 1) > 0x20 )
    {
      if ( (v5 & 0x1F) == 0 )
        goto LABEL_15;
      v11 = v5 & 0x1F;
      _InterlockedAnd(v10, ~(((1 << (32 - v11)) - 1) << v8));
      result = (unsigned int)(32 - v11);
      ++v10;
      v9 = 1 - result;
      if ( (unsigned __int64)(1 - result) >= 0x20 )
      {
        v12 = v9 >> 5;
        result = -32LL * (v9 >> 5);
        v9 += result;
        do
        {
          *v10++ = 0;
          --v12;
        }
        while ( v12 );
      }
      if ( v9 )
      {
LABEL_15:
        result = (unsigned int)(-1 << v9);
        _InterlockedAnd(v10, result);
      }
    }
    else
    {
      _InterlockedAnd(v10, ~(1 << v8));
    }
  }
  else
  {
    result = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 17864), 0xFFFFFFFFFFFFFE00uLL);
  }
  --a2[9];
  return result;
}
