/*
 * XREFs of SeValidateImageHeader @ 0x1406C3C44
 * Callers:
 *     MiValidateSectionCreate @ 0x1406C32C0 (MiValidateSectionCreate.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     SepScheduleImageVerificationCallbacks @ 0x140770A84 (SepScheduleImageVerificationCallbacks.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SeValidateImageHeader(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  if ( qword_140C1DB00 )
  {
    if ( (a9 & 1) != 0 )
      _InterlockedCompareExchange(&dword_140CEC9E4, 0, 0);
    return (unsigned int)((__int64 (__fastcall *)(__int64, __int64))qword_140C1DB00)(a1, a2);
  }
  else
  {
    return (unsigned int)-1073740760;
  }
}
