/*
 * XREFs of HvIsInPlaceBaseBlockValid @ 0x140A1E0E4
 * Callers:
 *     HvHiveStartMemoryBacked @ 0x1407FF060 (HvHiveStartMemoryBacked.c)
 * Callees:
 *     HvpHeaderCheckSum @ 0x140AF2414 (HvpHeaderCheckSum.c)
 */

bool __fastcall HvIsInPlaceBaseBlockValid(_DWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // eax
  int v4; // eax
  __int64 v5; // r9

  if ( *a1 != 1718052210 )
    return 0;
  if ( a1[7] )
    return 0;
  if ( a1[5] > 1u )
    return 0;
  if ( (unsigned int)(a1[6] - 3) > 3 )
    return 0;
  if ( a1[8] != 1 )
    return 0;
  v3 = a1[10];
  if ( !v3 || (v3 & 0xFFF) != 0 || v3 > 0x7FFFE000 )
    return 0;
  v4 = HvpHeaderCheckSum(a1, a2, a3);
  return v4 == *(_DWORD *)(v5 + 508);
}
