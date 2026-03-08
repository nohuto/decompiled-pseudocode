/*
 * XREFs of HalpIsHvPresent @ 0x14037337C
 * Callers:
 *     HalSocRequestConfigurationData @ 0x1403731C8 (HalSocRequestConfigurationData.c)
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x14037333C (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpArtAvailable @ 0x1403733F0 (HalpArtAvailable.c)
 *     HalpTimerFindIdealPerformanceCounterSource @ 0x140377AB0 (HalpTimerFindIdealPerformanceCounterSource.c)
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x1403A9AD0 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     HalpNmiReboot @ 0x1405198E0 (HalpNmiReboot.c)
 *     HalpProcInitSystem @ 0x140A878D0 (HalpProcInitSystem.c)
 *     HalpLbrInitialize @ 0x140A8E07C (HalpLbrInitialize.c)
 *     HalpMiscGetParameters @ 0x140B672C8 (HalpMiscGetParameters.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
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
