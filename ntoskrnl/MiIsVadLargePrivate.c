/*
 * XREFs of MiIsVadLargePrivate @ 0x1403316C0
 * Callers:
 *     MiCheckUserVirtualAddress @ 0x1402258B0 (MiCheckUserVirtualAddress.c)
 *     MiInsertVad @ 0x1403312E0 (MiInsertVad.c)
 *     MiRemoveVad @ 0x140333090 (MiRemoveVad.c)
 *     MiPrefetchJumpVad @ 0x14062FBB8 (MiPrefetchJumpVad.c)
 *     MiBuildForkPte @ 0x14065FC20 (MiBuildForkPte.c)
 *     MiCloneVads @ 0x140660C98 (MiCloneVads.c)
 *     MiDeleteVad @ 0x1407C82E0 (MiDeleteVad.c)
 *     MiScrubProcessLargePage @ 0x140A43D34 (MiScrubProcessLargePage.c)
 *     MiAllocateChildVads @ 0x140A4571C (MiAllocateChildVads.c)
 *     MiDeletePartialCloneVads @ 0x140A461CC (MiDeletePartialCloneVads.c)
 *     MiMapChildLargePageVads @ 0x140A4661C (MiMapChildLargePageVads.c)
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
