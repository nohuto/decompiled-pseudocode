/*
 * XREFs of MiRelinkStandbyPage @ 0x14033AFE8
 * Callers:
 *     MiUpdatePfnPriorityByPte @ 0x1402AC5A0 (MiUpdatePfnPriorityByPte.c)
 *     MiUpdatePfnPriority @ 0x140339DB4 (MiUpdatePfnPriority.c)
 *     MiEmptyDecayClusterTimers @ 0x14033AE10 (MiEmptyDecayClusterTimers.c)
 *     MmSetPfnListInfo @ 0x1403733C4 (MmSetPfnListInfo.c)
 * Callees:
 *     MiUnlinkPageFromList @ 0x140217870 (MiUnlinkPageFromList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140234880 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x1402A6E90 (MiInsertPageInList.c)
 *     MiRestoreTransitionPte @ 0x1402FB620 (MiRestoreTransitionPte.c)
 */

__int64 __fastcall MiRelinkStandbyPage(ULONG_PTR a1, int a2)
{
  if ( *(_WORD *)(a1 + 32) )
  {
    if ( a2 != 0xFFFFFF )
      *(_BYTE *)(a1 + 35) ^= (a2 ^ *(_BYTE *)(a1 + 35)) & 7;
  }
  else
  {
    if ( !(unsigned int)MiUnlinkPageFromList(a1, 0) )
    {
      MiRestoreTransitionPte(a1, 0);
      *(_QWORD *)(a1 + 40) &= ~0x8000000000000000uLL;
      *(_BYTE *)(a1 + 34) &= 0xC7u;
      *(_BYTE *)(a1 + 35) &= ~0x20u;
      *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
      *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
      MiInsertPageInFreeOrZeroedList((__int64)(a1 + 0x58000000000LL) / 48, 2);
      return 0LL;
    }
    if ( a2 != 0xFFFFFF )
      *(_BYTE *)(a1 + 35) ^= (a2 ^ *(_BYTE *)(a1 + 35)) & 7;
    MiInsertPageInList(a1, 4u);
  }
  return 1LL;
}
