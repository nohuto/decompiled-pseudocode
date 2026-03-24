/*
 * XREFs of ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C00AC318
 * Callers:
 *     RawInputManagerObjectDelete @ 0x1C005187C (RawInputManagerObjectDelete.c)
 *     RIMDeviceIoControl @ 0x1C0051E70 (RIMDeviceIoControl.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C00AC134 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMFreeHidTLCInfo @ 0x1C00AC210 (RIMFreeHidTLCInfo.c)
 *     RIMSearchHidTLCInfo @ 0x1C00AC2AC (RIMSearchHidTLCInfo.c)
 *     RIMTransformCoordinatesFromDigitizer @ 0x1C0165250 (RIMTransformCoordinatesFromDigitizer.c)
 *     RIMTransformDimensionFromDigitizer @ 0x1C0165340 (RIMTransformDimensionFromDigitizer.c)
 * Callees:
 *     <none>
 */

void __fastcall RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded(RIMLOCKExclusiveIfNeeded *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    *(_QWORD *)(v2 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
    *(_QWORD *)this = 0LL;
  }
}
