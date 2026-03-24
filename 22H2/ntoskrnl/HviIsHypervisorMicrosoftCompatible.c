/*
 * XREFs of HviIsHypervisorMicrosoftCompatible @ 0x1403A9060
 * Callers:
 *     KiDetectHardwareSpecControlFeatures @ 0x1403A8B3C (KiDetectHardwareSpecControlFeatures.c)
 *     HviGetEnlightenmentInformation @ 0x1403A8FE0 (HviGetEnlightenmentInformation.c)
 *     HviGetHypervisorFeatures @ 0x1403A9020 (HviGetHypervisorFeatures.c)
 *     HvlpTryConfigureInterface @ 0x1403A9460 (HvlpTryConfigureInterface.c)
 *     HviGetPartitionIsolationType @ 0x1403F8C60 (HviGetPartitionIsolationType.c)
 *     HviGetHypervisorVersion @ 0x1405BEF80 (HviGetHypervisorVersion.c)
 *     HviGetImplementationLimits @ 0x1405BEFD0 (HviGetImplementationLimits.c)
 *     HviGetIptFeatures @ 0x1405BF018 (HviGetIptFeatures.c)
 * Callees:
 *     HviGetHypervisorInterface @ 0x1403A90B0 (HviGetHypervisorInterface.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 */

bool HviIsHypervisorMicrosoftCompatible()
{
  __int128 v1; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0LL;
  HviGetHypervisorInterface(&v1);
  return (_DWORD)v1 == 824407624;
}
