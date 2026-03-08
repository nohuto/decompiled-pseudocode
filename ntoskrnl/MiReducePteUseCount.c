/*
 * XREFs of MiReducePteUseCount @ 0x1402D0E3C
 * Callers:
 *     MiDeletePteList @ 0x140276AC0 (MiDeletePteList.c)
 *     MiDecommitPages @ 0x140329B10 (MiDecommitPages.c)
 *     MiDecommitLargePte @ 0x1406334B0 (MiDecommitLargePte.c)
 * Callees:
 *     MiDecreaseUsedPtesCount @ 0x1402D0E90 (MiDecreaseUsedPtesCount.c)
 *     MiGetUsedPtesHandle @ 0x140346CA0 (MiGetUsedPtesHandle.c)
 */

_BOOL8 __fastcall MiReducePteUseCount(__int64 a1, unsigned int a2)
{
  ULONG_PTR UsedPtesHandle; // rax

  UsedPtesHandle = MiGetUsedPtesHandle(a1 << 25 >> 16);
  return (unsigned int)MiDecreaseUsedPtesCount(UsedPtesHandle, a2) == 0;
}
