/*
 * XREFs of HalpIsMicrosoftCompatibleHvLoaded @ 0x14037858C
 * Callers:
 *     HalSocRequestConfigurationData @ 0x140378418 (HalSocRequestConfigurationData.c)
 *     HalpIsPartitionCpuManager @ 0x140378548 (HalpIsPartitionCpuManager.c)
 *     HalpArtAvailable @ 0x140378640 (HalpArtAvailable.c)
 *     HalSocRequestApi @ 0x140378A3C (HalSocRequestApi.c)
 *     HalpHvIsFrequencyAvailable @ 0x140379DAC (HalpHvIsFrequencyAvailable.c)
 *     HalpHvWatchdogDiscover @ 0x1403A3C70 (HalpHvWatchdogDiscover.c)
 *     HalpWdatDiscover @ 0x1403A4388 (HalpWdatDiscover.c)
 *     HalpCmcStartPolling @ 0x1403B42D8 (HalpCmcStartPolling.c)
 *     HalpHvIsX2ApicRecommended @ 0x14050B248 (HalpHvIsX2ApicRecommended.c)
 *     HalpIsHvIptSupported @ 0x14050B450 (HalpIsHvIptSupported.c)
 *     HalpIsHvUsedForReboot @ 0x14050B4B8 (HalpIsHvUsedForReboot.c)
 *     HalpInterruptGetIrtInfo @ 0x140820AF0 (HalpInterruptGetIrtInfo.c)
 *     HalpLoadMicrocode @ 0x140934BE0 (HalpLoadMicrocode.c)
 *     HalpInitializeProfiling @ 0x140A913E4 (HalpInitializeProfiling.c)
 *     HalpMiscGetParameters @ 0x140B6B158 (HalpMiscGetParameters.c)
 * Callees:
 *     HalpIsHvPresent @ 0x1403785CC (HalpIsHvPresent.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
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
