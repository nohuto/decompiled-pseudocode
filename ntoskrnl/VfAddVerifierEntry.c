/*
 * XREFs of VfAddVerifierEntry @ 0x140ADA630
 * Callers:
 *     NtSetSystemInformation @ 0x1407E1F30 (NtSetSystemInformation.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402046C0 (KeReleaseMutex.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x1406EA560 (RtlEqualUnicodeString.c)
 *     MmAcquireLoadLock @ 0x1407D2360 (MmAcquireLoadLock.c)
 *     MmReleaseLoadLock @ 0x1407D2400 (MmReleaseLoadLock.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     VfInitSystemNoRebootNeeded @ 0x140ABFCE8 (VfInitSystemNoRebootNeeded.c)
 *     VfDriverEnableVerifierForAll @ 0x140AC7618 (VfDriverEnableVerifierForAll.c)
 *     VfDriverLock @ 0x140AC773C (VfDriverLock.c)
 *     VfSuspectDriversAllocateEntry @ 0x140AD7394 (VfSuspectDriversAllocateEntry.c)
 *     MmEnableOrDisableVerifierForDriver @ 0x140AE503C (MmEnableOrDisableVerifierForDriver.c)
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
        v2 = MmEnableOrDisableVerifierForDriver(Entry, &v11, 1LL);
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
