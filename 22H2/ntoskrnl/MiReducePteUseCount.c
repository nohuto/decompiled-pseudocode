/*
 * XREFs of MiReducePteUseCount @ 0x14033AE40
 * Callers:
 *     MiDecommitPages @ 0x14027F6B0 (MiDecommitPages.c)
 *     MiDeletePteList @ 0x1402D2450 (MiDeletePteList.c)
 *     MiDecommitLargePte @ 0x140635940 (MiDecommitLargePte.c)
 * Callees:
 *     MiGetUsedPtesHandle @ 0x1402E5A70 (MiGetUsedPtesHandle.c)
 *     MiDecreaseUsedPtesCount @ 0x14033AE90 (MiDecreaseUsedPtesCount.c)
 */

_BOOL8 __fastcall MiReducePteUseCount(__int64 a1, unsigned int a2)
{
  ULONG_PTR UsedPtesHandle; // rax

  UsedPtesHandle = MiGetUsedPtesHandle(a1 << 25 >> 16);
  return (unsigned int)MiDecreaseUsedPtesCount(UsedPtesHandle, a2) == 0;
}
