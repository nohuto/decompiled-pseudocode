/*
 * XREFs of VfAddVerifierEntry @ 0x140A9C668
 * Callers:
 *     NtSetSystemInformation @ 0x1407D6120 (NtSetSystemInformation.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     MmReleaseLoadLock @ 0x1406F5AF0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406F5B50 (MmAcquireLoadLock.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     MmEnableOrDisableVerifierForDriver @ 0x140A812D0 (MmEnableOrDisableVerifierForDriver.c)
 *     VfInitSystemNoRebootNeeded @ 0x140A82328 (VfInitSystemNoRebootNeeded.c)
 *     VfDriverEnableVerifierForAll @ 0x140A89C30 (VfDriverEnableVerifierForAll.c)
 *     VfDriverLock @ 0x140A89D58 (VfDriverLock.c)
 *     VfSuspectDriversAllocateEntry @ 0x140A9A588 (VfSuspectDriversAllocateEntry.c)
 */

__int64 __fastcall VfAddVerifierEntry(const void **String2)
{
  unsigned int v2; // edi
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  struct _KTHREAD *Lock; // rbx
  __int64 Entry; // rax
  void *v9; // rbx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = 0;
  DestinationString = 0LL;
  if ( (_DWORD)InitSafeBootMode )
  {
    v2 = -1073738742;
LABEL_13:
    if ( ViWdmThunksWithIatIndex )
    {
      ExFreePoolWithTag(ViWdmThunksWithIatIndex, 0x6D4D7644u);
      ViWdmThunksWithIatIndex = 0LL;
    }
    return v2;
  }
  if ( ViWdmThunksWithIatIndex )
    return 3221228555LL;
  VfDriverLock();
  VfInitSystemNoRebootNeeded(v4, 0, v5, v6);
  ViDriversLoadLockOwner = 0LL;
  KeReleaseMutex(&ViDriversLoadLock, 0);
  ViWdmThunksWithIatIndex = (PVOID)ExAllocatePool2(64LL, 24LL * (unsigned int)ViNumberOfWdmThunks, 0x6D4D7644u);
  if ( ViWdmThunksWithIatIndex )
  {
    RtlInitUnicodeString(&DestinationString, L"*");
    if ( RtlEqualUnicodeString(&DestinationString, (PCUNICODE_STRING)String2, 1u) )
    {
      Lock = MmAcquireLoadLock();
      v2 = VfDriverEnableVerifierForAll();
      MmReleaseLoadLock((__int64)Lock);
    }
    else
    {
      Entry = VfSuspectDriversAllocateEntry(String2);
      v9 = (void *)Entry;
      if ( Entry )
      {
        v2 = MmEnableOrDisableVerifierForDriver(Entry, &v11, 1);
        if ( !v11 )
          ExFreePoolWithTag(v9, 0);
      }
      else
      {
        v2 = -1073741670;
      }
    }
    goto LABEL_13;
  }
  return (unsigned int)-1073741801;
}
