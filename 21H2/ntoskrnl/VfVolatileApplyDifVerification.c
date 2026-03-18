/*
 * XREFs of VfVolatileApplyDifVerification @ 0x140A9CA48
 * Callers:
 *     NtSetSystemInformation @ 0x1407D6120 (NtSetSystemInformation.c)
 * Callees:
 *     MmEnableOrDisableVerifierForDriver @ 0x140A812D0 (MmEnableOrDisableVerifierForDriver.c)
 *     VfSuspectDifRemoveEntry @ 0x140A9A540 (VfSuspectDifRemoveEntry.c)
 *     VfSuspectDriversAllocateEntry @ 0x140A9A588 (VfSuspectDriversAllocateEntry.c)
 */

__int64 __fastcall VfVolatileApplyDifVerification(const void **a1)
{
  unsigned int v2; // ebx
  __int64 Entry; // rax
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  if ( (_DWORD)InitSafeBootMode )
  {
    return (unsigned int)-1073738742;
  }
  else
  {
    Entry = VfSuspectDriversAllocateEntry(a1);
    if ( Entry )
    {
      v2 = MmEnableOrDisableVerifierForDriver(Entry, &v5, 2);
      if ( !v5 )
        VfSuspectDifRemoveEntry((const UNICODE_STRING *)a1);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v2;
}
