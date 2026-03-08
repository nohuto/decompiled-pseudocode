/*
 * XREFs of SeValidateImageHeader @ 0x1406A02B4
 * Callers:
 *     MiValidateSectionCreate @ 0x14069F890 (MiValidateSectionCreate.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     SepScheduleImageVerificationCallbacks @ 0x140793224 (SepScheduleImageVerificationCallbacks.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
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
        __int64 a9,
        char a10)
{
  if ( qword_140C375E0 )
  {
    if ( (a10 & 1) != 0 )
      _InterlockedCompareExchange(&dword_140D0C78C, 0, 0);
    return (unsigned int)((__int64 (__fastcall *)(__int64, __int64))qword_140C375E0)(a1, a2);
  }
  else
  {
    return (unsigned int)-1073740760;
  }
}
