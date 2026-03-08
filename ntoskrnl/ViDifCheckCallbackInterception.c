/*
 * XREFs of ViDifCheckCallbackInterception @ 0x140303BC8
 * Callers:
 *     VfDifCaptureIoCallbacks @ 0x1403035C4 (VfDifCaptureIoCallbacks.c)
 *     VfDifCaptureDriverEntry @ 0x1403035E8 (VfDifCaptureDriverEntry.c)
 *     IovAttachDeviceToDeviceStack @ 0x140ABDFA4 (IovAttachDeviceToDeviceStack.c)
 * Callees:
 *     MmIsDriverVerifying @ 0x140303C10 (MmIsDriverVerifying.c)
 *     VfIsRuleClassEnabled @ 0x140ABA430 (VfIsRuleClassEnabled.c)
 *     VfUtilEqualUnicodeString @ 0x140ABF66C (VfUtilEqualUnicodeString.c)
 */

bool __fastcall ViDifCheckCallbackInterception(struct _DRIVER_OBJECT *a1)
{
  __int64 p_ServiceKeyName; // rbx

  p_ServiceKeyName = (__int64)&a1->DriverExtension->ServiceKeyName;
  return !KernelVerifier
      && (VfDifRunningWithoutReboot || MmIsDriverVerifying(a1))
      && VfXdvEnabled
      && (unsigned __int8)VfIsRuleClassEnabled(35LL)
      && !(unsigned int)VfUtilEqualUnicodeString(&VfRdbssServiceName, p_ServiceKeyName)
      && !(unsigned int)VfUtilEqualUnicodeString(&VfMupServiceName, p_ServiceKeyName)
      && !(unsigned int)VfUtilEqualUnicodeString(&VfCscServiceName, p_ServiceKeyName)
      && !(unsigned int)VfUtilEqualUnicodeString(&VfAmdkmpagServiceName, p_ServiceKeyName);
}
