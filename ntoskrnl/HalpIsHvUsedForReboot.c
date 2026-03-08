/*
 * XREFs of HalpIsHvUsedForReboot @ 0x1405093D8
 * Callers:
 *     HalpMiscGetParameters @ 0x140B672C8 (HalpMiscGetParameters.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x14037333C (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpIsXboxNanovisorPresent @ 0x140373A1C (HalpIsXboxNanovisorPresent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

bool __fastcall HalpIsHvUsedForReboot(__int64 a1, __int64 a2)
{
  if ( !HalpIsMicrosoftCompatibleHvLoaded(a1, a2) )
    return HalpIsXboxNanovisorPresent() != 0;
  _RAX = 1073741828LL;
  __asm { cpuid }
  return (_RAX & 0x10) != 0;
}
