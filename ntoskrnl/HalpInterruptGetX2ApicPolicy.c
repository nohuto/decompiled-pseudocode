/*
 * XREFs of HalpInterruptGetX2ApicPolicy @ 0x1403739AC
 * Callers:
 *     HalSocRequestConfigurationData @ 0x1403731C8 (HalSocRequestConfigurationData.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     HalpHvIsX2ApicRecommended @ 0x140509168 (HalpHvIsX2ApicRecommended.c)
 */

bool HalpInterruptGetX2ApicPolicy()
{
  char v0; // r11
  char v1; // r10

  v0 = 0;
  v1 = 0;
  _RAX = 1LL;
  __asm { cpuid }
  if ( (_RCX & 0x200000) != 0 && (HalpIommuX2ApicSupport || (unsigned __int8)HalpHvIsX2ApicRecommended(_RCX, _RDX)) )
    v1 = 1;
  return HalpInterruptX2ApicPolicy != v0 && HalpHvCpuManager == v0 && v1 != 0;
}
