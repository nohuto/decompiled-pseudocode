/*
 * XREFs of HalpIsHvPresent @ 0x1403785CC
 * Callers:
 *     HalSocRequestConfigurationData @ 0x140378418 (HalSocRequestConfigurationData.c)
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x14037858C (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpArtAvailable @ 0x140378640 (HalpArtAvailable.c)
 *     HalpTimerFindIdealPerformanceCounterSource @ 0x14037B460 (HalpTimerFindIdealPerformanceCounterSource.c)
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x1403AE820 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     HalpNmiReboot @ 0x14051BE10 (HalpNmiReboot.c)
 *     HalpProcInitSystem @ 0x140A8AEE0 (HalpProcInitSystem.c)
 *     HalpLbrInitialize @ 0x140A9150C (HalpLbrInitialize.c)
 *     HalpMiscGetParameters @ 0x140B6B158 (HalpMiscGetParameters.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 */

char HalpIsHvPresent()
{
  char v0; // r8

  v0 = byte_140C0995F;
  if ( byte_140C0995F == -1 )
  {
    v0 = 0;
    _RAX = 1LL;
    __asm { cpuid }
    if ( (int)_RCX < 0 )
    {
      _RAX = 1073741825LL;
      __asm { cpuid }
      v0 = (_DWORD)_RAX != 1986945624;
    }
    byte_140C0995F = v0;
  }
  return v0;
}
