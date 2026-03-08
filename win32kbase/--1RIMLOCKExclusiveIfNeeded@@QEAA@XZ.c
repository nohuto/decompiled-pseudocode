/*
 * XREFs of ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C0032C40
 * Callers:
 *     RIMDeviceIoControl @ 0x1C00336C0 (RIMDeviceIoControl.c)
 *     RIMCreateHidDesc @ 0x1C0035100 (RIMCreateHidDesc.c)
 *     RawInputManagerObjectDelete @ 0x1C00361E4 (RawInputManagerObjectDelete.c)
 *     RIMEndAllActiveContacts @ 0x1C01A4BE0 (RIMEndAllActiveContacts.c)
 *     RIMVirtCreateHidDesc @ 0x1C01B10CC (RIMVirtCreateHidDesc.c)
 *     RIMRemoveFromActiveDevices @ 0x1C01B9190 (RIMRemoveFromActiveDevices.c)
 *     RIMTransformCoordinatesFromDigitizer @ 0x1C01BE1E0 (RIMTransformCoordinatesFromDigitizer.c)
 *     RIMTransformDimensionFromDigitizer @ 0x1C01BE2D0 (RIMTransformDimensionFromDigitizer.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C01BF13C (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMFreeHidTLCInfo @ 0x1C01BF540 (RIMFreeHidTLCInfo.c)
 *     RIMIDECreateHIDDesc @ 0x1C01C16CC (RIMIDECreateHIDDesc.c)
 *     rimObsStartStopDeviceRead @ 0x1C01DD4D4 (rimObsStartStopDeviceRead.c)
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
