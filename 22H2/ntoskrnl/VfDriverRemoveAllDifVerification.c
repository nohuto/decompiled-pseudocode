/*
 * XREFs of VfDriverRemoveAllDifVerification @ 0x1405CEF30
 * Callers:
 *     VfDriverProcessUnload @ 0x1405CEEB0 (VfDriverProcessUnload.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14023D660 (ExAcquireResourceSharedLite.c)
 *     RtlEqualUnicodeString @ 0x1406DA3A0 (RtlEqualUnicodeString.c)
 *     VfDriverLock @ 0x140ACB73C (VfDriverLock.c)
 *     VfDriverUnlock @ 0x140ACB860 (VfDriverUnlock.c)
 *     VfSuspectRemoveDifVolatileVerification @ 0x140ADBC74 (VfSuspectRemoveDifVolatileVerification.c)
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
