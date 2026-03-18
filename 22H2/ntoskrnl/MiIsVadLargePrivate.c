/*
 * XREFs of MiIsVadLargePrivate @ 0x140287F50
 * Callers:
 *     MiCheckUserVirtualAddress @ 0x14025AC90 (MiCheckUserVirtualAddress.c)
 *     MiInsertVad @ 0x140287B70 (MiInsertVad.c)
 *     MiRemoveVad @ 0x14028A350 (MiRemoveVad.c)
 *     MiPrefetchJumpVad @ 0x140632048 (MiPrefetchJumpVad.c)
 *     MiBuildForkPte @ 0x140662270 (MiBuildForkPte.c)
 *     MiCloneVads @ 0x1406632E8 (MiCloneVads.c)
 *     MiDeleteVad @ 0x1406FA4D0 (MiDeleteVad.c)
 *     MiScrubProcessLargePage @ 0x140A46A04 (MiScrubProcessLargePage.c)
 *     MiAllocateChildVads @ 0x140A483EC (MiAllocateChildVads.c)
 *     MiDeletePartialCloneVads @ 0x140A48E9C (MiDeletePartialCloneVads.c)
 *     MiMapChildLargePageVads @ 0x140A492EC (MiMapChildLargePageVads.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsVadLargePrivate(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 48);
  return (v1 & 0x200000) != 0 && ((v1 & 0x800000) != 0 || (v1 & 0x180000u) >= 0x100000)
      || (v1 & 0x70) == 0x20 && (*(_DWORD *)(a1 + 64) & 0x1000000) != 0;
}
