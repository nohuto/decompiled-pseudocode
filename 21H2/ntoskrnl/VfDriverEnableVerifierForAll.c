/*
 * XREFs of VfDriverEnableVerifierForAll @ 0x1409C87B8
 * Callers:
 *     VfAddVerifierEntry @ 0x1409EC9D8 (VfAddVerifierEntry.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402EE5A0 (KeReleaseMutex.c)
 *     RtlImageNtHeaderEx @ 0x14031C980 (RtlImageNtHeaderEx.c)
 *     MmIsSessionAddress @ 0x140349110 (MmIsSessionAddress.c)
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14034BF60 (ExAcquireResourceSharedLite.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     VfDriverLock @ 0x1409C25B8 (VfDriverLock.c)
 *     VfUtilIsProtectedDriver @ 0x1409C688C (VfUtilIsProtectedDriver.c)
 *     VfDriverEnableVerifier @ 0x1409C8620 (VfDriverEnableVerifier.c)
 *     VfSuspectDriversAllocateEntry @ 0x1409D9828 (VfSuspectDriversAllocateEntry.c)
 */

__int64 VfDriverEnableVerifierForAll()
{
  int v0; // edi
  PVOID *i; // rbx
  unsigned __int64 v2; // rbp
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
    if ( !(unsigned int)VfUtilIsProtectedDriver((PCUNICODE_STRING)(i + 11)) )
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
        v0 = VfDriverEnableVerifier(Entry, (__int64)i, &v6);
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
