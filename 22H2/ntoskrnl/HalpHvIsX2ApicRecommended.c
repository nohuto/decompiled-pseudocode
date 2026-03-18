/*
 * XREFs of HalpHvIsX2ApicRecommended @ 0x14050B248
 * Callers:
 *     HalpInterruptGetX2ApicPolicy @ 0x140378BFC (HalpInterruptGetX2ApicPolicy.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x14037858C (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 */

bool __fastcall HalpHvIsX2ApicRecommended(__int64 a1, __int64 a2)
{
  if ( !HalpIsMicrosoftCompatibleHvLoaded(a1, a2) )
    return 0;
  _RAX = 1073741828LL;
  __asm { cpuid }
  return (_RAX & 0x80000) != 0;
}
