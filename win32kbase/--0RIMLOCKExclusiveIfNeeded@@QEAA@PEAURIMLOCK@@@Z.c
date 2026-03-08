/*
 * XREFs of ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C0033950
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
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 */

RIMLOCKExclusiveIfNeeded *__fastcall RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
        RIMLOCKExclusiveIfNeeded *this,
        struct _KTHREAD **a2)
{
  *(_QWORD *)this = 0LL;
  if ( a2[1] != KeGetCurrentThread() )
  {
    *(_QWORD *)this = a2;
    RIMLockExclusive(a2);
  }
  return this;
}
