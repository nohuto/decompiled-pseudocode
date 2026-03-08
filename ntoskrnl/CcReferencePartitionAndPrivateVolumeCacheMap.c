/*
 * XREFs of CcReferencePartitionAndPrivateVolumeCacheMap @ 0x14021511C
 * Callers:
 *     CcPostWorkQueueRegular @ 0x140215AE0 (CcPostWorkQueueRegular.c)
 *     CcIncrementWriteBehindPriority @ 0x1405339B4 (CcIncrementWriteBehindPriority.c)
 *     CcPostWorkQueueSpecial @ 0x140534894 (CcPostWorkQueueSpecial.c)
 *     CcPostWorkQueueAsyncLazywrite @ 0x140537D14 (CcPostWorkQueueAsyncLazywrite.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CcReferencePartitionAndPrivateVolumeCacheMap(__int64 a1, __int64 a2)
{
  if ( _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1296)) <= 1 )
    __fastfail(0xEu);
  if ( a2 && _InterlockedIncrement64((volatile signed __int64 *)(a2 + 8)) <= 1 )
    __fastfail(0xEu);
  return nullsub_3(14LL);
}
