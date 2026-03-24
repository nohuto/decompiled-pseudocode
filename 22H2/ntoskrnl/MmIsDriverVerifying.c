/*
 * XREFs of MmIsDriverVerifying @ 0x14037D940
 * Callers:
 *     ViDifCheckCallbackInterception @ 0x14037D908 (ViDifCheckCallbackInterception.c)
 *     VfIsVerificationEnabled @ 0x1403A6B10 (VfIsVerificationEnabled.c)
 *     VfGetPristineDispatchRoutine @ 0x1409D0CDC (VfGetPristineDispatchRoutine.c)
 *     VfGetPristineDriverInit @ 0x1409D0D2C (VfGetPristineDriverInit.c)
 *     VfDevObjPostAddDevice @ 0x1409D60B4 (VfDevObjPostAddDevice.c)
 *     VfDevObjPreAddDevice @ 0x1409D6108 (VfDevObjPreAddDevice.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x1409D6B18 (IovUtilIsVerifiedDeviceStack.c)
 * Callees:
 *     <none>
 */

LOGICAL __stdcall MmIsDriverVerifying(struct _DRIVER_OBJECT *DriverObject)
{
  _DWORD *DriverSection; // rax

  DriverSection = DriverObject->DriverSection;
  return DriverSection && (DriverSection[26] & 0x2000000) != 0;
}
