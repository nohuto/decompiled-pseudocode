/*
 * XREFs of FopFreeMappingTable @ 0x140AE92E8
 * Callers:
 *     FopFreeFontData @ 0x140AE9314 (FopFreeFontData.c)
 *     FopReadMappingTable @ 0x140B99898 (FopReadMappingTable.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140382650 (BgpFwFreeMemory.c)
 */

void __fastcall FopFreeMappingTable(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    BgpFwFreeMemory(v2);
  BgpFwFreeMemory(a1);
}
