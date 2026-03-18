/*
 * XREFs of HalpIsXboxNanovisorPresent @ 0x140378C6C
 * Callers:
 *     HalpHvVpStartEnabled @ 0x140377BA0 (HalpHvVpStartEnabled.c)
 *     HalpApicSetupRegisterAccess @ 0x14037826C (HalpApicSetupRegisterAccess.c)
 *     HalpHvIsFrequencyAvailable @ 0x140379DAC (HalpHvIsFrequencyAvailable.c)
 *     HalpIsHvUsedForReboot @ 0x14050B4B8 (HalpIsHvUsedForReboot.c)
 *     HalpHvStartVirtualProcessor @ 0x14050BDB0 (HalpHvStartVirtualProcessor.c)
 *     HalpHvStartProcessor @ 0x14051B428 (HalpHvStartProcessor.c)
 *     HaliAcpiMachineStateInit @ 0x14085E4B0 (HaliAcpiMachineStateInit.c)
 *     HalpMiscGetParameters @ 0x140B6B158 (HalpMiscGetParameters.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 */

char HalpIsXboxNanovisorPresent()
{
  char v0; // r8

  v0 = byte_140C0995E;
  if ( byte_140C0995E == -1 )
  {
    v0 = 0;
    _RAX = 1LL;
    __asm { cpuid }
    if ( (int)_RCX < 0 )
    {
      _RAX = 1073741825LL;
      __asm { cpuid }
      v0 = (_DWORD)_RAX == 1986945624;
    }
    byte_140C0995E = v0;
  }
  return v0;
}
