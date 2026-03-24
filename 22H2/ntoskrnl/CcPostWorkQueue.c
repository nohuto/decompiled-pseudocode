/*
 * XREFs of CcPostWorkQueue @ 0x1402767B0
 * Callers:
 *     CcNotifyOfMappedWrite @ 0x14022CFFC (CcNotifyOfMappedWrite.c)
 *     CcLazyWriteScan @ 0x140275F14 (CcLazyWriteScan.c)
 *     CcScheduleReadAheadEx @ 0x140279480 (CcScheduleReadAheadEx.c)
 *     CcQueueLazyWriteScanThread @ 0x1403B8D40 (CcQueueLazyWriteScanThread.c)
 * Callees:
 *     CcPostWorkQueueRegular @ 0x140277688 (CcPostWorkQueueRegular.c)
 *     CcPostWorkQueueCachemapUninit @ 0x140277840 (CcPostWorkQueueCachemapUninit.c)
 */

__int64 __fastcall CcPostWorkQueue(__int64 a1, __int64 a2)
{
  if ( *(_QWORD *)(a1 + 128) + 288LL == a2 )
    return CcPostWorkQueueCachemapUninit();
  else
    return CcPostWorkQueueRegular();
}
