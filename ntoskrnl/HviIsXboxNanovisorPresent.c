/*
 * XREFs of HviIsXboxNanovisorPresent @ 0x1402E4648
 * Callers:
 *     PpmIdleExecuteTransition @ 0x14022D7D0 (PpmIdleExecuteTransition.c)
 *     HalpTscSynchronization @ 0x140396C20 (HalpTscSynchronization.c)
 *     KiIntSteerDetermineSteeringEnabled @ 0x140B713C0 (KiIntSteerDetermineSteeringEnabled.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

char HviIsXboxNanovisorPresent()
{
  char v0; // r8

  v0 = byte_140C097E4;
  if ( byte_140C097E4 == -1 )
  {
    _RAX = 1LL;
    v0 = 0;
    __asm { cpuid }
    if ( (int)_RCX < 0 )
    {
      _RAX = 1073741825LL;
      __asm { cpuid }
      v0 = (_DWORD)_RAX == 1986945624;
    }
    byte_140C097E4 = v0;
  }
  return v0;
}
