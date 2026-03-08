/*
 * XREFs of HalpIsPartitionCpuManager @ 0x1403732F8
 * Callers:
 *     HalSocRequestConfigurationData @ 0x1403731C8 (HalSocRequestConfigurationData.c)
 *     HalpInterruptRegisterController @ 0x140373AE4 (HalpInterruptRegisterController.c)
 *     HalMcFinishMicrocode @ 0x1403ABA24 (HalMcFinishMicrocode.c)
 *     HalpCmcStartPolling @ 0x1403AF5E8 (HalpCmcStartPolling.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x1403B13E0 (HalpTimerInitializeHypervisorTimer.c)
 *     HalpMcUpdateInitialize @ 0x14080A96C (HalpMcUpdateInitialize.c)
 *     HalpMiscGetParameters @ 0x140B672C8 (HalpMiscGetParameters.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x14037333C (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
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
