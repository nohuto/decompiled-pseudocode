/*
 * XREFs of VfDriverRemoveAllDifVerification @ 0x1405FEBA0
 * Callers:
 *     VfDriverProcessUnload @ 0x1405FEB18 (VfDriverProcessUnload.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     VfDriverLock @ 0x140A89D58 (VfDriverLock.c)
 *     VfDriverUnlock @ 0x140A89E7C (VfDriverUnlock.c)
 *     VfSuspectRemoveDifVolatileVerification @ 0x140A9AEC0 (VfSuspectRemoveDifVolatileVerification.c)
 */

__int64 VfDriverRemoveAllDifVerification()
{
  __int64 i; // rdi
  PVOID *j; // rbx

  VfDriverLock();
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  for ( i = VfSuspectDriversList; (__int64 *)i != &VfSuspectDriversList; i = *(_QWORD *)i )
  {
    for ( j = (PVOID *)PsLoadedModuleList; j != &PsLoadedModuleList; j = (PVOID *)*j )
    {
      if ( ((_DWORD)j[13] & 0x2000000) != 0
        && RtlEqualUnicodeString((PCUNICODE_STRING)(i + 24), (PCUNICODE_STRING)(j + 11), 1u) )
      {
        VfSuspectRemoveDifVolatileVerification(j);
      }
    }
  }
  ExReleaseResourceLite(&PsLoadedModuleResource);
  return VfDriverUnlock();
}
