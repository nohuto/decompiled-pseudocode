/*
 * XREFs of MiSetPfnRemovalRequested @ 0x14064DF24
 * Callers:
 *     MiInsertPageInList @ 0x14026EAE0 (MiInsertPageInList.c)
 *     MiInitializeDynamicPfns @ 0x14061AF68 (MiInitializeDynamicPfns.c)
 *     MiHotRemoveHugeRange @ 0x140620144 (MiHotRemoveHugeRange.c)
 *     MiRemoveBadPages @ 0x14062A4B0 (MiRemoveBadPages.c)
 *     MiUnlinkBadPages @ 0x14062AD80 (MiUnlinkBadPages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14062B620 (MmMarkPhysicalMemoryAsBad.c)
 *     MiMarkFileOnlyPfnBad @ 0x14063E0B0 (MiMarkFileOnlyPfnBad.c)
 *     MiMakePageBad @ 0x14065E320 (MiMakePageBad.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x14026E9B0 (MiSearchNumaNodeTable.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028A810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiAddPendingBadPageNode @ 0x140629758 (MiAddPendingBadPageNode.c)
 *     MiRemovePendingBadPageNode @ 0x14062A978 (MiRemovePendingBadPageNode.c)
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
      v9 = *(_QWORD *)(*(_QWORD *)(qword_140C674C8 + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)) + 16LL)
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
