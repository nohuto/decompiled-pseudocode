/*
 * XREFs of VfDriverEnableVerifierForAll @ 0x140AC7618
 * Callers:
 *     VfAddVerifierEntry @ 0x140ADA630 (VfAddVerifierEntry.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402046C0 (KeReleaseMutex.c)
 *     MmIsSessionAddress @ 0x140239ED0 (MmIsSessionAddress.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14025D790 (ExAcquireResourceSharedLite.c)
 *     RtlImageNtHeaderEx @ 0x14035E850 (RtlImageNtHeaderEx.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     VfUtilIsProtectedDriver @ 0x140ABF7CC (VfUtilIsProtectedDriver.c)
 *     VfDriverEnableVerifier @ 0x140AC7498 (VfDriverEnableVerifier.c)
 *     VfDriverLock @ 0x140AC773C (VfDriverLock.c)
 *     VfSuspectDriversAllocateEntry @ 0x140AD7394 (VfSuspectDriversAllocateEntry.c)
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
