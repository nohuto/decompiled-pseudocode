/*
 * XREFs of HalpIsMicrosoftCompatibleHvLoaded @ 0x1403A1898
 * Callers:
 *     HalSocRequestConfigurationData @ 0x1403A179C (HalSocRequestConfigurationData.c)
 *     HalSocRequestApi @ 0x1403A199C (HalSocRequestApi.c)
 *     HalpIsPartitionCpuManager @ 0x1403AF37C (HalpIsPartitionCpuManager.c)
 *     HalMcFinishMicrocode @ 0x1403AF500 (HalMcFinishMicrocode.c)
 *     HalpHvWatchdogDiscover @ 0x1403B3510 (HalpHvWatchdogDiscover.c)
 *     HalpArtAvailable @ 0x1403B35CC (HalpArtAvailable.c)
 *     HalpCmcStartPolling @ 0x1403C53F8 (HalpCmcStartPolling.c)
 *     HalpHvIsFrequencyAvailable @ 0x1403CEF28 (HalpHvIsFrequencyAvailable.c)
 *     HalpIsHvIptSupported @ 0x1404C22DC (HalpIsHvIptSupported.c)
 *     HalpIsHvUsedForReboot @ 0x1404C2344 (HalpIsHvUsedForReboot.c)
 *     HalpInterruptGetIrtInfo @ 0x1407B9C34 (HalpInterruptGetIrtInfo.c)
 *     HalpLoadMicrocode @ 0x140866070 (HalpLoadMicrocode.c)
 *     HalpInitializeProfiling @ 0x14099E74C (HalpInitializeProfiling.c)
 *     HalpMiscGetParameters @ 0x140A6CF88 (HalpMiscGetParameters.c)
 * Callees:
 *     HalpIsHvPresent @ 0x1403A18D8 (HalpIsHvPresent.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 */

bool __fastcall HalpIsMicrosoftCompatibleHvLoaded(__int64 a1)
{
  char v1; // bl

  v1 = 0;
  if ( (unsigned __int8)HalpIsHvPresent(a1) )
  {
    _RAX = 1073741825LL;
    __asm { cpuid }
    return (_DWORD)_RAX == 824407624;
  }
  return v1;
}
