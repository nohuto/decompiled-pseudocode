/*
 * XREFs of MiIsVadLargePrivate @ 0x140304C64
 * Callers:
 *     MiDeleteVad @ 0x14021BFB0 (MiDeleteVad.c)
 *     MiCheckUserVirtualAddress @ 0x1402AF090 (MiCheckUserVirtualAddress.c)
 *     MiPrefetchJumpVad @ 0x14053940C (MiPrefetchJumpVad.c)
 *     MiRemoveVad @ 0x140555500 (MiRemoveVad.c)
 *     MiBuildForkPte @ 0x1405581FC (MiBuildForkPte.c)
 *     MiCloneVads @ 0x140559268 (MiCloneVads.c)
 *     MiScrubProcessLargePages @ 0x140564434 (MiScrubProcessLargePages.c)
 *     MiAllocateChildVads @ 0x1408D8AE0 (MiAllocateChildVads.c)
 *     MiDeletePartialCloneVads @ 0x1408D9578 (MiDeletePartialCloneVads.c)
 *     MiMapChildLargePageVads @ 0x1408D99B0 (MiMapChildLargePageVads.c)
 * Callees:
 *     MiVadMapsLargeImage @ 0x14021CBE0 (MiVadMapsLargeImage.c)
 */

_BOOL8 __fastcall MiIsVadLargePrivate(__int64 a1)
{
  int v1; // eax
  _BOOL8 result; // rax

  v1 = *(_DWORD *)(a1 + 48);
  if ( (v1 & 0x100000) != 0 && ((v1 & 0x400000) != 0 || (v1 & 0xC0000u) >= 0x80000) )
    return 1LL;
  result = MiVadMapsLargeImage(a1);
  if ( result )
    return 1LL;
  return result;
}
