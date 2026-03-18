/*
 * XREFs of HalpIsPartitionCpuManager @ 0x140378548
 * Callers:
 *     HalSocRequestConfigurationData @ 0x140378418 (HalSocRequestConfigurationData.c)
 *     HalpInterruptRegisterController @ 0x140378D34 (HalpInterruptRegisterController.c)
 *     HalMcFinishMicrocode @ 0x1403B0774 (HalMcFinishMicrocode.c)
 *     HalpCmcStartPolling @ 0x1403B42D8 (HalpCmcStartPolling.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x1403B6070 (HalpTimerInitializeHypervisorTimer.c)
 *     HalpMcUpdateInitialize @ 0x140820694 (HalpMcUpdateInitialize.c)
 *     HalpMiscGetParameters @ 0x140B6B158 (HalpMiscGetParameters.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x14037858C (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 */

char __fastcall HalpIsPartitionCpuManager(__int64 a1, __int64 a2)
{
  char v2; // r10

  if ( (unsigned __int8)HalpIsMicrosoftCompatibleHvLoaded(a1, a2) )
  {
    _RAX = 1073741827LL;
    __asm { cpuid }
    if ( (__PAIR64__(_RBX, _RAX) & 0x100000000000LL) != 0 )
      return 1;
  }
  return v2;
}
