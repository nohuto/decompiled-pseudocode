/*
 * XREFs of ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C00AC85C
 * Callers:
 *     RawInputManagerObjectDelete @ 0x1C005287C (RawInputManagerObjectDelete.c)
 *     RIMDeviceIoControl @ 0x1C0052E70 (RIMDeviceIoControl.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C00AC634 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMFreeHidTLCInfo @ 0x1C00AC710 (RIMFreeHidTLCInfo.c)
 *     RIMSearchHidTLCInfo @ 0x1C00AC7AC (RIMSearchHidTLCInfo.c)
 *     RIMTransformCoordinatesFromDigitizer @ 0x1C0165180 (RIMTransformCoordinatesFromDigitizer.c)
 *     RIMTransformDimensionFromDigitizer @ 0x1C0165270 (RIMTransformDimensionFromDigitizer.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0042360 (RIMLockExclusive.c)
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
