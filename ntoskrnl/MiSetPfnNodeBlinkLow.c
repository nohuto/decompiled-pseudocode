/*
 * XREFs of MiSetPfnNodeBlinkLow @ 0x1402DF430
 * Callers:
 *     MiUpdatePfnOnSlabStandbyList @ 0x1402C7778 (MiUpdatePfnOnSlabStandbyList.c)
 *     MiUnlinkNumaStandbyPage @ 0x1402C77BC (MiUnlinkNumaStandbyPage.c)
 *     MiExclusiveInsertPfnChainInList @ 0x1402D3138 (MiExclusiveInsertPfnChainInList.c)
 *     MiInsertPageInList @ 0x140318540 (MiInsertPageInList.c)
 *     MiConvertSmallPageRangeToLarge @ 0x1403B3040 (MiConvertSmallPageRangeToLarge.c)
 *     MiReplaceNumaStandbyPage @ 0x1403BE8B8 (MiReplaceNumaStandbyPage.c)
 *     MiUpdateLargePageSectionPfns @ 0x140626B50 (MiUpdateLargePageSectionPfns.c)
 *     MiInsertNumaStandbyPage @ 0x14064E1CC (MiInsertNumaStandbyPage.c)
 *     MI_SET_SLAB_STANDBY_PAGE_SLAB_ENTRY @ 0x140654130 (MI_SET_SLAB_STANDBY_PAGE_SLAB_ENTRY.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall MiSetPfnNodeBlinkLow(__int64 a1, int a2)
{
  signed __int64 v2; // r9
  unsigned __int64 v3; // r11
  signed __int64 result; // rax
  bool i; // zf
  signed __int64 v7; // rcx

  v2 = *(_QWORD *)(a1 + 24);
  v3 = (unsigned __int64)(a2 & 0x7FFFF) << 40;
  result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v3 | v2 & 0xF80000FFFFFFFFFFuLL, v2);
  for ( i = v2 == result; !i; i = v7 == result )
  {
    v7 = result;
    result = _InterlockedCompareExchange64(
               (volatile signed __int64 *)(a1 + 24),
               v3 | result & 0xF80000FFFFFFFFFFuLL,
               result);
  }
  return result;
}
