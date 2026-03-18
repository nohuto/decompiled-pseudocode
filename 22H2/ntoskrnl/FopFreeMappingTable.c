/*
 * XREFs of FopFreeMappingTable @ 0x140AED2AC
 * Callers:
 *     FopFreeFontData @ 0x140AED2D8 (FopFreeFontData.c)
 *     FopReadMappingTable @ 0x140B9DAAC (FopReadMappingTable.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x1403852A0 (BgpFwFreeMemory.c)
 */

void __fastcall FopFreeMappingTable(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    BgpFwFreeMemory(v2);
  BgpFwFreeMemory(a1);
}
