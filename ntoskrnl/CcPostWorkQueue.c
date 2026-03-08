/*
 * XREFs of CcPostWorkQueue @ 0x1402191C4
 * Callers:
 *     CcScheduleReadAheadNuma @ 0x14020D0BC (CcScheduleReadAheadNuma.c)
 *     CcNotifyOfMappedWrite @ 0x140215670 (CcNotifyOfMappedWrite.c)
 *     CcLazyWriteScanVolume @ 0x140218810 (CcLazyWriteScanVolume.c)
 *     CcQueueLazyWriteScanThreadForVolume @ 0x1403BA4E0 (CcQueueLazyWriteScanThreadForVolume.c)
 *     CcLazyWriteScan @ 0x140533B4C (CcLazyWriteScan.c)
 *     CcQueueLazyWriteScanThread @ 0x140534A20 (CcQueueLazyWriteScanThread.c)
 *     CcRepostToSynchronousLazywriter @ 0x140537F48 (CcRepostToSynchronousLazywriter.c)
 * Callees:
 *     CcPostWorkQueueRegular @ 0x140215AE0 (CcPostWorkQueueRegular.c)
 *     CcPostWorkQueueCachemapUninit @ 0x140216F94 (CcPostWorkQueueCachemapUninit.c)
 */

__int64 __fastcall CcPostWorkQueue(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( a1[19] + 120LL == a2 )
    return CcPostWorkQueueCachemapUninit(a1, a2, a3, a4);
  else
    return CcPostWorkQueueRegular((__int64)a1, a2, a3, a4);
}
