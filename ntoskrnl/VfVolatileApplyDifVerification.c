/*
 * XREFs of VfVolatileApplyDifVerification @ 0x140ADAA10
 * Callers:
 *     NtSetSystemInformation @ 0x1407E1F30 (NtSetSystemInformation.c)
 * Callees:
 *     VfSuspectDifRemoveEntry @ 0x140AD734C (VfSuspectDifRemoveEntry.c)
 *     VfSuspectDriversAllocateEntry @ 0x140AD7394 (VfSuspectDriversAllocateEntry.c)
 *     MmEnableOrDisableVerifierForDriver @ 0x140AE503C (MmEnableOrDisableVerifierForDriver.c)
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
      v2 = MmEnableOrDisableVerifierForDriver(Entry, &v5, 2LL);
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
