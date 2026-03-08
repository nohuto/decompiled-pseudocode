/*
 * XREFs of RIMIsButtonCapsEqual @ 0x1C01B8728
 * Callers:
 *     RIMValidateAllCollectionUsages @ 0x1C01BA1A0 (RIMValidateAllCollectionUsages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMIsButtonCapsEqual(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  unsigned int v3; // r10d
  unsigned __int16 i; // r11

  v3 = 1;
  for ( i = 0; i < a3; ++i )
  {
    if ( !v3 )
      break;
    if ( *(_WORD *)(a1 + 72LL * i) != *(_WORD *)(a2 + 72LL * i)
      || *(_BYTE *)(a1 + 72LL * i + 2) != *(_BYTE *)(a2 + 72LL * i + 2)
      || *(_BYTE *)(a1 + 72LL * i + 3) != *(_BYTE *)(a2 + 72LL * i + 3)
      || *(_WORD *)(a1 + 72LL * i + 4) != *(_WORD *)(a2 + 72LL * i + 4)
      || *(_BYTE *)(a1 + 72LL * i + 12) != *(_BYTE *)(a2 + 72LL * i + 12)
      || *(_BYTE *)(a1 + 72LL * i + 15) != *(_BYTE *)(a2 + 72LL * i + 15)
      || *(_WORD *)(a1 + 72LL * i + 56) != *(_WORD *)(a2 + 72LL * i + 56) )
    {
      v3 = 0;
    }
  }
  return v3;
}
