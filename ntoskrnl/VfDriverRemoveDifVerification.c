/*
 * XREFs of VfDriverRemoveDifVerification @ 0x140AC7778
 * Callers:
 *     MmEnableOrDisableVerifierForDriver @ 0x140AE503C (MmEnableOrDisableVerifierForDriver.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402046C0 (KeReleaseMutex.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14025D790 (ExAcquireResourceSharedLite.c)
 *     ExClearPoolFlags @ 0x14060487C (ExClearPoolFlags.c)
 *     RtlEqualUnicodeString @ 0x1406EA560 (RtlEqualUnicodeString.c)
 *     VfDriverLock @ 0x140AC773C (VfDriverLock.c)
 *     VfSuspectDifRemoveEntry @ 0x140AD734C (VfSuspectDifRemoveEntry.c)
 *     VfSuspectRemoveDifVolatileVerification @ 0x140AD7C74 (VfSuspectRemoveDifVolatileVerification.c)
 */

__int64 __fastcall VfDriverRemoveDifVerification(__int64 a1)
{
  unsigned int v2; // esi
  const UNICODE_STRING *v3; // rdi
  PVOID *i; // rbx

  v2 = 0;
  VfDriverLock();
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  v3 = (const UNICODE_STRING *)(a1 + 24);
  if ( RtlEqualUnicodeString(&VfKernelImageName, v3, 1u) )
  {
    if ( (VfRuleClasses & 8) != 0 || (VfRuleClasses & 1) != 0 )
      ExClearPoolFlags(8);
    VfSuspectDifRemoveEntry(v3);
    KernelVerifier = 0;
  }
  else
  {
    for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
    {
      if ( RtlEqualUnicodeString(v3, (PCUNICODE_STRING)(i + 11), 1u) )
      {
        v2 = VfSuspectRemoveDifVolatileVerification(i);
        break;
      }
    }
  }
  ExReleaseResourceLite(&PsLoadedModuleResource);
  ViDriversLoadLockOwner = 0LL;
  KeReleaseMutex(&ViDriversLoadLock, 0);
  return v2;
}
