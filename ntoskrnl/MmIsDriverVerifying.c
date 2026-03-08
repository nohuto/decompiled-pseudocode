/*
 * XREFs of MmIsDriverVerifying @ 0x140303C10
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x1402F0CC4 (IopCompleteUnloadOrDelete.c)
 *     ViDifCheckCallbackInterception @ 0x140303BC8 (ViDifCheckCallbackInterception.c)
 *     VfIsVerificationEnabled @ 0x1403AED70 (VfIsVerificationEnabled.c)
 *     NtLockFile @ 0x1406B1EB0 (NtLockFile.c)
 *     IopWriteFile @ 0x1406B3E10 (IopWriteFile.c)
 *     NtQueryInformationFile @ 0x1406EAEB0 (NtQueryInformationFile.c)
 *     IopQueryInformation @ 0x140757E40 (IopQueryInformation.c)
 *     NtUnlockFile @ 0x14075F620 (NtUnlockFile.c)
 *     IopGetBasicInformationFile @ 0x140784190 (IopGetBasicInformationFile.c)
 *     IopParseDevice @ 0x1407B6A30 (IopParseDevice.c)
 *     IopCloseFile @ 0x1407BACE0 (IopCloseFile.c)
 *     IopXxxControlFile @ 0x1407C1720 (IopXxxControlFile.c)
 *     IopReadFile @ 0x1407E0C40 (IopReadFile.c)
 *     VfGetPristineDispatchRoutine @ 0x140ACA1FC (VfGetPristineDispatchRoutine.c)
 *     VfGetPristineDriverInit @ 0x140ACA24C (VfGetPristineDriverInit.c)
 *     VfDevObjPostAddDevice @ 0x140ACF174 (VfDevObjPostAddDevice.c)
 *     VfDevObjPreAddDevice @ 0x140ACF1C8 (VfDevObjPreAddDevice.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x140ACFBD0 (IovUtilIsVerifiedDeviceStack.c)
 * Callees:
 *     VfDriverIsKernelImageAddress @ 0x140AC7714 (VfDriverIsKernelImageAddress.c)
 */

LOGICAL __stdcall MmIsDriverVerifying(struct _DRIVER_OBJECT *DriverObject)
{
  __int64 v1; // rdx
  struct _DRIVER_OBJECT *v2; // r8
  _DWORD *DriverSection; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = DriverObject;
  if ( ((VfRuleClasses & 0x400000) == 0 || (unsigned int)VfDriverIsKernelImageAddress(retaddr, v1, DriverObject))
    && (DriverSection = v2->DriverSection) != 0LL )
  {
    return (DriverSection[26] >> 25) & 1;
  }
  else
  {
    return 0;
  }
}
