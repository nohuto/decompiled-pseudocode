/*
 * XREFs of VfVolatileRemoveDifVerification @ 0x140A9CB44
 * Callers:
 *     NtSetSystemInformation @ 0x1407D6120 (NtSetSystemInformation.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     MmEnableOrDisableVerifierForDriver @ 0x140A812D0 (MmEnableOrDisableVerifierForDriver.c)
 *     ViSuspectDriversLookupEntry @ 0x140A9AF40 (ViSuspectDriversLookupEntry.c)
 */

__int64 __fastcall VfVolatileRemoveDifVerification(const UNICODE_STRING *a1)
{
  __int64 result; // rax
  __int64 v2; // rbx
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  if ( !(_QWORD)ViVerifierDriverAddedThunkListHead || !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0 )
    return 3221228668LL;
  result = ViSuspectDriversLookupEntry(a1);
  v2 = result;
  if ( result )
  {
    if ( (VfOptionFlags & 0x800) == 0 )
      return MmEnableOrDisableVerifierForDriver(v2, &v3, 4);
    if ( VfDifRunningWithoutReboot )
      return MmEnableOrDisableVerifierForDriver(v2, &v3, 4);
    if ( ViWdmThunksWithIatIndex )
      return MmEnableOrDisableVerifierForDriver(v2, &v3, 4);
    ViWdmThunksWithIatIndex = (PVOID)ExAllocatePool2(64LL, 24LL * (unsigned int)ViNumberOfWdmThunks, 0x6D4D7644u);
    if ( ViWdmThunksWithIatIndex )
      return MmEnableOrDisableVerifierForDriver(v2, &v3, 4);
    else
      return 3221225495LL;
  }
  return result;
}
