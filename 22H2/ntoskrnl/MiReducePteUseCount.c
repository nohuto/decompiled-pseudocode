/*
 * XREFs of MiReducePteUseCount @ 0x1403F3C60
 * Callers:
 *     MiDeletePteList @ 0x140231190 (MiDeletePteList.c)
 *     MiDecommitPages @ 0x1402B4EB0 (MiDecommitPages.c)
 *     MiDecommitLargePte @ 0x14053CB20 (MiDecommitLargePte.c)
 * Callees:
 *     MiGetUsedPtesHandle @ 0x14028D0E0 (MiGetUsedPtesHandle.c)
 *     MiDecreaseUsedPtesCount @ 0x14031A9B4 (MiDecreaseUsedPtesCount.c)
 */

_BOOL8 __fastcall MiReducePteUseCount(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  ULONG_PTR UsedPtesHandle; // rax
  __int64 v4; // r8

  v2 = a2;
  UsedPtesHandle = MiGetUsedPtesHandle(a1 << 25 >> 16, a2);
  return (unsigned int)MiDecreaseUsedPtesCount(UsedPtesHandle, v2, v4) == 0;
}
