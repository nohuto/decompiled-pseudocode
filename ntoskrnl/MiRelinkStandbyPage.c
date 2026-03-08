/*
 * XREFs of MiRelinkStandbyPage @ 0x140225A14
 * Callers:
 *     MiEmptyDecayClusterTimers @ 0x140224EE0 (MiEmptyDecayClusterTimers.c)
 *     MiUpdatePfnPriority @ 0x14028D35C (MiUpdatePfnPriority.c)
 *     MiUpdatePfnForPrefetchByPte @ 0x14031D5F0 (MiUpdatePfnForPrefetchByPte.c)
 *     MmSetPfnListInfo @ 0x140387180 (MmSetPfnListInfo.c)
 * Callees:
 *     MiUnlinkPageFromListEx @ 0x140264100 (MiUnlinkPageFromListEx.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140277CE0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x140318540 (MiInsertPageInList.c)
 *     MiRestoreTransitionPte @ 0x14036A9C4 (MiRestoreTransitionPte.c)
 */

__int64 __fastcall MiRelinkStandbyPage(ULONG_PTR BugCheckParameter2, int a2)
{
  if ( *(_WORD *)(BugCheckParameter2 + 32) )
  {
    if ( a2 != 0xFFFFFF )
      *(_BYTE *)(BugCheckParameter2 + 35) ^= (*(_BYTE *)(BugCheckParameter2 + 35) ^ a2) & 7;
    return 1LL;
  }
  if ( (MiUnlinkPageFromListEx(BugCheckParameter2) & 3) == 0 )
  {
    if ( a2 != 0xFFFFFF )
      *(_BYTE *)(BugCheckParameter2 + 35) ^= (*(_BYTE *)(BugCheckParameter2 + 35) ^ a2) & 7;
    MiInsertPageInList(BugCheckParameter2);
    return 1LL;
  }
  MiRestoreTransitionPte(BugCheckParameter2);
  *(_QWORD *)(BugCheckParameter2 + 40) &= ~0x8000000000000000uLL;
  *(_BYTE *)(BugCheckParameter2 + 34) &= 0xC7u;
  *(_BYTE *)(BugCheckParameter2 + 35) &= ~0x20u;
  *(_BYTE *)(BugCheckParameter2 + 34) = *(_BYTE *)(BugCheckParameter2 + 34) & 0xF8 | 5;
  *(_QWORD *)(BugCheckParameter2 + 24) |= 0x4000000000000000uLL;
  MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4));
  return 0LL;
}
