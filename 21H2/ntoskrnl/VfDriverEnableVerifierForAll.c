/*
 * XREFs of VfDriverEnableVerifierForAll @ 0x140A89C30
 * Callers:
 *     VfAddVerifierEntry @ 0x140A9C668 (VfAddVerifierEntry.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     RtlImageNtHeaderEx @ 0x1402FD9C0 (RtlImageNtHeaderEx.c)
 *     MmIsSessionAddress @ 0x140359DE0 (MmIsSessionAddress.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     VfUtilIsProtectedDriver @ 0x140A81E5C (VfUtilIsProtectedDriver.c)
 *     VfDriverEnableVerifier @ 0x140A89AB0 (VfDriverEnableVerifier.c)
 *     VfDriverLock @ 0x140A89D58 (VfDriverLock.c)
 *     VfSuspectDriversAllocateEntry @ 0x140A9A588 (VfSuspectDriversAllocateEntry.c)
 */

__int64 VfDriverEnableVerifierForAll()
{
  int v0; // edi
  PVOID *i; // rbx
  unsigned __int64 v2; // rsi
  __int64 Entry; // rax
  void *v4; // rsi
  int v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = 0LL;
  v0 = 0;
  v6 = 0;
  VfDriverLock();
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  for ( i = *(PVOID **)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
  {
    if ( !(unsigned int)VfUtilIsProtectedDriver() )
    {
      v2 = (unsigned __int64)i[6];
      if ( MmIsSessionAddress(v2) || (int)RtlImageNtHeaderEx(1, v2, 0LL, &v7) >= 0 )
      {
        Entry = VfSuspectDriversAllocateEntry(i + 11);
        v4 = (void *)Entry;
        if ( !Entry )
        {
          v0 = -1073741670;
          break;
        }
        v6 = 0;
        v0 = VfDriverEnableVerifier(Entry, i, &v6);
        if ( !v6 )
          ExFreePoolWithTag(v4, 0);
        if ( v0 < 0 )
          break;
      }
    }
  }
  ExReleaseResourceLite(&PsLoadedModuleResource);
  ViDriversLoadLockOwner = 0LL;
  KeReleaseMutex(&ViDriversLoadLock, 0);
  return (unsigned int)v0;
}
