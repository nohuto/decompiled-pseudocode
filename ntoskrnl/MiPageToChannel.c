/*
 * XREFs of MiPageToChannel @ 0x140370C10
 * Callers:
 *     MiAllocateMdlPagesByLists @ 0x14025B5F0 (MiAllocateMdlPagesByLists.c)
 *     MiUnlinkPageFromListEx @ 0x140264100 (MiUnlinkPageFromListEx.c)
 *     MiAcquirePageListLock @ 0x140264E70 (MiAcquirePageListLock.c)
 *     MiGetPage @ 0x14026ED40 (MiGetPage.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140276500 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140277CE0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiEnqueuePageList @ 0x140285CB0 (MiEnqueuePageList.c)
 *     MiPfnToStandbyLookaside @ 0x140288780 (MiPfnToStandbyLookaside.c)
 *     MiPurgingPageFromLookaside @ 0x1402C75C0 (MiPurgingPageFromLookaside.c)
 *     MiInsertPageInList @ 0x140318540 (MiInsertPageInList.c)
 *     MiSynchronizeFastPageInsert @ 0x140319210 (MiSynchronizeFastPageInsert.c)
 *     MiGetPfnChannel @ 0x140334470 (MiGetPfnChannel.c)
 *     MiLargePagePromote @ 0x14034EC80 (MiLargePagePromote.c)
 *     MiDescribePageRun @ 0x14037082C (MiDescribePageRun.c)
 *     MiTryUnlinkNodeLargePages @ 0x14039BDDC (MiTryUnlinkNodeLargePages.c)
 *     MiInsertHugeRangeInList @ 0x14061EB84 (MiInsertHugeRangeInList.c)
 *     MiUnlinkHugeRange @ 0x140620680 (MiUnlinkHugeRange.c)
 *     MiInitializeSystemChannelOrdering @ 0x140B96904 (MiInitializeSystemChannelOrdering.c)
 * Callees:
 *     MiSearchChannelTable @ 0x14064319C (MiSearchChannelTable.c)
 */

__int64 __fastcall MiPageToChannel(ULONG_PTR a1)
{
  if ( qword_140C65750 )
    return *(unsigned __int16 *)(MiSearchChannelTable(a1) + 12);
  else
    return 0LL;
}
