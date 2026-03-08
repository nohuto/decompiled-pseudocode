/*
 * XREFs of HviIsHypervisorMicrosoftCompatible @ 0x14037F140
 * Callers:
 *     HviGetEnlightenmentInformation @ 0x14037E1E0 (HviGetEnlightenmentInformation.c)
 *     KiDetectHardwareSpecControlFeatures @ 0x14037EC84 (KiDetectHardwareSpecControlFeatures.c)
 *     HviGetHypervisorFeatures @ 0x14037F8A0 (HviGetHypervisorFeatures.c)
 *     HvlpTryConfigureInterface @ 0x14037FC60 (HvlpTryConfigureInterface.c)
 *     HviGetHypervisorVersion @ 0x14061301C (HviGetHypervisorVersion.c)
 *     HviGetImplementationLimits @ 0x140613064 (HviGetImplementationLimits.c)
 *     HviGetIptFeatures @ 0x1406130AC (HviGetIptFeatures.c)
 * Callees:
 *     HviGetHypervisorInterface @ 0x14037F18C (HviGetHypervisorInterface.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

bool HviIsHypervisorMicrosoftCompatible()
{
  __int128 v1; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0LL;
  HviGetHypervisorInterface(&v1);
  return (_DWORD)v1 == 824407624;
}
