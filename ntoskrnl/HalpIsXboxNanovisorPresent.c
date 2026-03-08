/*
 * XREFs of HalpIsXboxNanovisorPresent @ 0x140373A1C
 * Callers:
 *     HalpHvVpStartEnabled @ 0x140372950 (HalpHvVpStartEnabled.c)
 *     HalpApicSetupRegisterAccess @ 0x14037301C (HalpApicSetupRegisterAccess.c)
 *     HalpHvIsFrequencyAvailable @ 0x140374AFC (HalpHvIsFrequencyAvailable.c)
 *     HalpIsHvUsedForReboot @ 0x1405093D8 (HalpIsHvUsedForReboot.c)
 *     HalpHvStartVirtualProcessor @ 0x140509CD0 (HalpHvStartVirtualProcessor.c)
 *     HalpHvStartProcessor @ 0x140518EF8 (HalpHvStartProcessor.c)
 *     HaliAcpiMachineStateInit @ 0x14085A4F0 (HaliAcpiMachineStateInit.c)
 *     HalpMiscGetParameters @ 0x140B672C8 (HalpMiscGetParameters.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
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
