/*
 * XREFs of ViDriverReApplyVerifierForAll @ 0x1409C8B18
 * Callers:
 *     VfDriverInitSuccess @ 0x1409C27BC (VfDriverInitSuccess.c)
 * Callees:
 *     KeReleaseMutex @ 0x14035F9C0 (KeReleaseMutex.c)
 *     RtlEqualUnicodeString @ 0x140601410 (RtlEqualUnicodeString.c)
 *     VfDriverLock @ 0x1409C25C8 (VfDriverLock.c)
 *     VfThunkApplyDriverAddedThunks @ 0x1409D8AB4 (VfThunkApplyDriverAddedThunks.c)
 *     VfSuspectDriversIsLoaded @ 0x140A93DAC (VfSuspectDriversIsLoaded.c)
 */

void __fastcall ViDriverReApplyVerifierForAll(__int64 **a1)
{
  __int64 *i; // rbx

  if ( ViVerifierDriverAddedThunkListHead )
  {
    for ( i = *a1; i != (__int64 *)a1; i = (__int64 *)*i )
    {
      if ( !RtlEqualUnicodeString(&VfKernelImageName, (PCUNICODE_STRING)(i + 11), 1u) && (i[13] & 0x2000000) != 0 )
      {
        VfDriverLock();
        if ( (unsigned int)VfSuspectDriversIsLoaded(i + 11) )
          VfThunkApplyDriverAddedThunks(i);
        ViDriversLoadLockOwner = 0LL;
        KeReleaseMutex((PRKMUTEX)&ViDriversLoadLock, 0);
      }
    }
  }
}
