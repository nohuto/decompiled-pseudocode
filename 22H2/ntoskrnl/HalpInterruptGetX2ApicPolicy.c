/*
 * XREFs of HalpInterruptGetX2ApicPolicy @ 0x1403A194C
 * Callers:
 *     HalSocRequestConfigurationData @ 0x1403A179C (HalSocRequestConfigurationData.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 */

bool HalpInterruptGetX2ApicPolicy()
{
  int v5; // ecx

  _RAX = 1LL;
  __asm { cpuid }
  v5 = _RCX & 0x200000;
  return HalpInterruptX2ApicPolicy && !HalpHvCpuManager && v5;
}
