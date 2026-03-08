/*
 * XREFs of HalpHvIsFrequencyAvailable @ 0x140374AFC
 * Callers:
 *     HalSocRequestApi @ 0x1403737EC (HalSocRequestApi.c)
 *     HalpHvGetApicFrequency @ 0x140508FB0 (HalpHvGetApicFrequency.c)
 *     HalpHvGetTscFrequency @ 0x140508FE0 (HalpHvGetTscFrequency.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x14037333C (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpIsXboxNanovisorPresent @ 0x140373A1C (HalpIsXboxNanovisorPresent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

bool __fastcall HalpHvIsFrequencyAvailable(__int64 a1, __int64 a2)
{
  if ( !HalpIsMicrosoftCompatibleHvLoaded(a1, a2) )
    return HalpIsXboxNanovisorPresent() != 0;
  _RAX = 1073741827LL;
  __asm { cpuid }
  return (_RDX & 0x100) != 0;
}
