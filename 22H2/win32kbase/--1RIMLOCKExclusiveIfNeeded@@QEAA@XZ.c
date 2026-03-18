/*
 * XREFs of ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C006F118
 * Callers:
 *     RIMDeviceIoControl @ 0x1C0070F20 (RIMDeviceIoControl.c)
 *     RawInputManagerObjectDelete @ 0x1C007267C (RawInputManagerObjectDelete.c)
 *     RIMCreateHidDesc @ 0x1C007EF3C (RIMCreateHidDesc.c)
 *     RIMEndAllActiveContacts @ 0x1C01776D0 (RIMEndAllActiveContacts.c)
 *     RIMVirtCreateHidDesc @ 0x1C0184200 (RIMVirtCreateHidDesc.c)
 *     RIMRemoveFromActiveDevices @ 0x1C018B4C4 (RIMRemoveFromActiveDevices.c)
 *     RIMTransformCoordinatesFromDigitizer @ 0x1C0190540 (RIMTransformCoordinatesFromDigitizer.c)
 *     RIMTransformDimensionFromDigitizer @ 0x1C0190630 (RIMTransformDimensionFromDigitizer.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C0191414 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMFreeHidTLCInfo @ 0x1C0191810 (RIMFreeHidTLCInfo.c)
 *     RIMIDECreateHIDDesc @ 0x1C019399C (RIMIDECreateHIDDesc.c)
 *     rimObsStartStopDeviceRead @ 0x1C01AF320 (rimObsStartStopDeviceRead.c)
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
