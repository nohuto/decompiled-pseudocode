/*
 * XREFs of HalpIsHvIptSupported @ 0x140509370
 * Callers:
 *     HalpProcGetFeatureBits @ 0x14037CB74 (HalpProcGetFeatureBits.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x14037333C (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

char __fastcall HalpIsHvIptSupported(__int64 a1, __int64 a2)
{
  char v2; // r10

  if ( HalpIsMicrosoftCompatibleHvLoaded(a1, a2) )
  {
    _RAX = 0x40000000LL;
    __asm { cpuid }
    if ( (unsigned int)_RAX >= 0x4000000B )
    {
      _RAX = 1073741827LL;
      __asm { cpuid }
      if ( (_RDX & 0x8000000) != 0 )
        return 1;
    }
  }
  return v2;
}
