/*
 * XREFs of ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C00AC35C
 * Callers:
 *     RawInputManagerObjectDelete @ 0x1C005187C (RawInputManagerObjectDelete.c)
 *     RIMDeviceIoControl @ 0x1C0051E70 (RIMDeviceIoControl.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C00AC134 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMFreeHidTLCInfo @ 0x1C00AC210 (RIMFreeHidTLCInfo.c)
 *     RIMSearchHidTLCInfo @ 0x1C00AC2AC (RIMSearchHidTLCInfo.c)
 *     RIMTransformCoordinatesFromDigitizer @ 0x1C0165250 (RIMTransformCoordinatesFromDigitizer.c)
 *     RIMTransformDimensionFromDigitizer @ 0x1C0165340 (RIMTransformDimensionFromDigitizer.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0040EF0 (RIMLockExclusive.c)
 */

RIMLOCKExclusiveIfNeeded *__fastcall RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
        RIMLOCKExclusiveIfNeeded *this,
        struct _KTHREAD **a2)
{
  *(_QWORD *)this = 0LL;
  if ( a2[1] != KeGetCurrentThread() )
  {
    *(_QWORD *)this = a2;
    RIMLockExclusive((__int64)a2);
  }
  return this;
}
