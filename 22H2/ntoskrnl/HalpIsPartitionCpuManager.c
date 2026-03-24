/*
 * XREFs of HalpIsPartitionCpuManager @ 0x1403AF37C
 * Callers:
 *     HalSocRequestConfigurationData @ 0x1403A179C (HalSocRequestConfigurationData.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x1403AF294 (HalpTimerInitializeHypervisorTimer.c)
 *     HalpInterruptRegisterController @ 0x1403B29D4 (HalpInterruptRegisterController.c)
 *     HalpCmcStartPolling @ 0x1403C53F8 (HalpCmcStartPolling.c)
 *     HalpMcUpdateInitialize @ 0x14079B080 (HalpMcUpdateInitialize.c)
 *     HalpMiscGetParameters @ 0x140A6CF88 (HalpMiscGetParameters.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1403A1898 (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 */

char __fastcall HalpIsPartitionCpuManager(__int64 a1)
{
  char v1; // r10

  if ( HalpIsMicrosoftCompatibleHvLoaded(a1) )
  {
    _RAX = 1073741827LL;
    __asm { cpuid }
    if ( (__PAIR64__(_RBX, _RAX) & 0x100000000000LL) != 0 )
      return 1;
  }
  return v1;
}
