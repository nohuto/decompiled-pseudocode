/*
 * XREFs of MiPageToChannel @ 0x140375EC0
 * Callers:
 *     MiAllocateMdlPagesByLists @ 0x14023B8F0 (MiAllocateMdlPagesByLists.c)
 *     MiUnlinkPageFromListEx @ 0x140266510 (MiUnlinkPageFromListEx.c)
 *     MiAcquirePageListLock @ 0x140267280 (MiAcquirePageListLock.c)
 *     MiGetPage @ 0x14026D240 (MiGetPage.c)
 *     MiSynchronizeFastPageInsert @ 0x14026DDF0 (MiSynchronizeFastPageInsert.c)
 *     MiInsertPageInList @ 0x14026EAE0 (MiInsertPageInList.c)
 *     MiGetPfnChannel @ 0x1402870B0 (MiGetPfnChannel.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402D1E90 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3670 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLargePagePromote @ 0x1402D77D0 (MiLargePagePromote.c)
 *     MiEnqueuePageList @ 0x1402DAA10 (MiEnqueuePageList.c)
 *     MiPfnToStandbyLookaside @ 0x1402DDEF0 (MiPfnToStandbyLookaside.c)
 *     MiPurgingPageFromLookaside @ 0x140331310 (MiPurgingPageFromLookaside.c)
 *     MiDescribePageRun @ 0x140375ADC (MiDescribePageRun.c)
 *     MiTryUnlinkNodeLargePages @ 0x1403A088C (MiTryUnlinkNodeLargePages.c)
 *     MiInsertHugeRangeInList @ 0x14062103C (MiInsertHugeRangeInList.c)
 *     MiUnlinkHugeRange @ 0x140622B2C (MiUnlinkHugeRange.c)
 *     MiInitializeSystemChannelOrdering @ 0x140B9AB14 (MiInitializeSystemChannelOrdering.c)
 * Callees:
 *     MiSearchChannelTable @ 0x1406457C0 (MiSearchChannelTable.c)
 */

__int64 __fastcall MiPageToChannel(ULONG_PTR a1)
{
  if ( qword_140C65BD0 )
    return *(unsigned __int16 *)(MiSearchChannelTable(a1) + 12);
  else
    return 0LL;
}
