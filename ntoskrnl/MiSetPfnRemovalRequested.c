/*
 * XREFs of MiSetPfnRemovalRequested @ 0x14064B908
 * Callers:
 *     MiInsertPageInList @ 0x140318540 (MiInsertPageInList.c)
 *     MiInitializeDynamicPfns @ 0x140618AB8 (MiInitializeDynamicPfns.c)
 *     MiHotRemoveHugeRange @ 0x14061DC8C (MiHotRemoveHugeRange.c)
 *     MiRemoveBadPages @ 0x140628020 (MiRemoveBadPages.c)
 *     MiUnlinkBadPages @ 0x1406288F4 (MiUnlinkBadPages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1406291A0 (MmMarkPhysicalMemoryAsBad.c)
 *     MiMarkFileOnlyPfnBad @ 0x14063BC40 (MiMarkFileOnlyPfnBad.c)
 *     MiMakePageBad @ 0x14065BCD0 (MiMakePageBad.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x140319DD0 (MiSearchNumaNodeTable.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiAddPendingBadPageNode @ 0x1406272C8 (MiAddPendingBadPageNode.c)
 *     MiRemovePendingBadPageNode @ 0x1406284EC (MiRemovePendingBadPageNode.c)
 */

void __fastcall MiSetPfnRemovalRequested(unsigned __int64 a1, int a2, int a3, unsigned __int64 a4)
{
  unsigned __int8 v4; // bl
  __int64 v9; // rbp

  v4 = *(_BYTE *)(a1 + 35);
  if ( ((v4 >> 6) & 1) != a2 )
  {
    if ( _bittest64((const signed __int64 *)(a1 + 40), 0x35u) )
    {
      v9 = 0LL;
    }
    else
    {
      v9 = *(_QWORD *)(*(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)) + 16LL)
         + 25408LL
         * *((unsigned int *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4)) + 2);
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v9 + 23104));
      *(_QWORD *)(v9 + 23136) += a2 != 0 ? 1LL : -1LL;
    }
    if ( (v4 & 0x40) != 0 )
    {
      if ( a3 )
        MiRemovePendingBadPageNode(a1);
    }
    else
    {
      MiAddPendingBadPageNode(a1, a4);
    }
    *(_BYTE *)(a1 + 35) = v4 ^ (v4 ^ ((_BYTE)a2 << 6)) & 0x40;
    if ( v9 )
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 23104));
  }
}
