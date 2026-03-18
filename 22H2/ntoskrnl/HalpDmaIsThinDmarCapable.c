/*
 * XREFs of HalpDmaIsThinDmarCapable @ 0x14038F7F8
 * Callers:
 *     HalpDmaAllocateChildAdapterV3 @ 0x14082A5E0 (HalpDmaAllocateChildAdapterV3.c)
 * Callees:
 *     <none>
 */

bool __fastcall HalpDmaIsThinDmarCapable(__int64 a1)
{
  return *(_DWORD *)(a1 + 520) == 3 && *(_BYTE *)(a1 + 445) && *(_BYTE *)(a1 + 441) && *(_BYTE *)(a1 + 442) != 0;
}
