/*
 * XREFs of MiRoundUpToPowerOf2SizeT @ 0x1406670D8
 * Callers:
 *     MiMapSystemImageWithLargePage @ 0x140A46F04 (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiRoundUpToPowerOf2SizeT(unsigned __int64 a1)
{
  bool v1; // zf
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 result; // rax

  v1 = !_BitScanReverse64((unsigned __int64 *)&v2, a1);
  v3 = a1;
  if ( !v1 )
    v3 = 1LL << v2;
  result = 2 * v3;
  if ( v3 == a1 )
    return v3;
  return result;
}
