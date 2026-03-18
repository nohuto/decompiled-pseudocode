/*
 * XREFs of ViDifCheckCallbackInterception @ 0x14020A54C
 * Callers:
 *     VfDifCaptureIoCallbacks @ 0x140209F48 (VfDifCaptureIoCallbacks.c)
 *     VfDifCaptureDriverEntry @ 0x140209F6C (VfDifCaptureDriverEntry.c)
 *     IovAttachDeviceToDeviceStack @ 0x140AC1FA4 (IovAttachDeviceToDeviceStack.c)
 * Callees:
 *     MmIsDriverVerifying @ 0x14020A590 (MmIsDriverVerifying.c)
 *     VfIsRuleClassEnabled @ 0x140ABE5F0 (VfIsRuleClassEnabled.c)
 *     VfUtilEqualUnicodeString @ 0x140AC366C (VfUtilEqualUnicodeString.c)
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
