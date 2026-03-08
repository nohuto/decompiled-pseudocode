/*
 * XREFs of HalpIsMicrosoftCompatibleHvLoaded @ 0x14037333C
 * Callers:
 *     HalSocRequestConfigurationData @ 0x1403731C8 (HalSocRequestConfigurationData.c)
 *     HalpIsPartitionCpuManager @ 0x1403732F8 (HalpIsPartitionCpuManager.c)
 *     HalpArtAvailable @ 0x1403733F0 (HalpArtAvailable.c)
 *     HalSocRequestApi @ 0x1403737EC (HalSocRequestApi.c)
 *     HalpHvIsFrequencyAvailable @ 0x140374AFC (HalpHvIsFrequencyAvailable.c)
 *     HalpWdatDiscover @ 0x140375F28 (HalpWdatDiscover.c)
 *     HalpHvWatchdogDiscover @ 0x1403A097C (HalpHvWatchdogDiscover.c)
 *     HalpCmcStartPolling @ 0x1403AF5E8 (HalpCmcStartPolling.c)
 *     HalpHvIsX2ApicRecommended @ 0x140509168 (HalpHvIsX2ApicRecommended.c)
 *     HalpIsHvIptSupported @ 0x140509370 (HalpIsHvIptSupported.c)
 *     HalpIsHvUsedForReboot @ 0x1405093D8 (HalpIsHvUsedForReboot.c)
 *     HalpInterruptGetIrtInfo @ 0x14080BB74 (HalpInterruptGetIrtInfo.c)
 *     HalpLoadMicrocode @ 0x140931BD0 (HalpLoadMicrocode.c)
 *     HalpInitializeProfiling @ 0x140A8DF54 (HalpInitializeProfiling.c)
 *     HalpMiscGetParameters @ 0x140B672C8 (HalpMiscGetParameters.c)
 * Callees:
 *     HalpIsHvPresent @ 0x14037337C (HalpIsHvPresent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

bool __fastcall HalpIsMicrosoftCompatibleHvLoaded(__int64 a1, __int64 a2)
{
  char v2; // bl

  v2 = 0;
  if ( (unsigned __int8)HalpIsHvPresent(a1, a2) )
  {
    _RAX = 1073741825LL;
    __asm { cpuid }
    return (_DWORD)_RAX == 824407624;
  }
  return v2;
}
