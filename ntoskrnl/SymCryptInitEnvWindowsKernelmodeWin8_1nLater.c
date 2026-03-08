/*
 * XREFs of SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x1403ED7C0
 * Callers:
 *     SymCryptInit @ 0x1403B1860 (SymCryptInit.c)
 *     KeInitSystem @ 0x140B42FB8 (KeInitSystem.c)
 * Callees:
 *     RtlGetEnabledExtendedFeatures @ 0x1403AF370 (RtlGetEnabledExtendedFeatures.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     SymCryptDetectCpuFeaturesByCpuid @ 0x1403F0764 (SymCryptDetectCpuFeaturesByCpuid.c)
 *     SymCryptInitEnvCommon @ 0x1403F08DC (SymCryptInitEnvCommon.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     SymCryptFatal @ 0x14056ADB4 (SymCryptFatal.c)
 *     RtlGetVersion @ 0x1407A1380 (RtlGetVersion.c)
 */

__int64 __fastcall SymCryptInitEnvWindowsKernelmodeWin8_1nLater(unsigned int a1)
{
  __int64 result; // rax
  struct _OSVERSIONINFOW VersionInformation; // [rsp+20h] [rbp-138h] BYREF

  memset(&VersionInformation.dwMajorVersion, 0, 0x110uLL);
  result = (unsigned int)g_SymCryptFlags;
  if ( (g_SymCryptFlags & 1) == 0 )
  {
    VersionInformation.dwOSVersionInfoSize = 276;
    if ( RtlGetVersion(&VersionInformation) < 0 )
      SymCryptFatal(1853059702LL);
    if ( VersionInformation.dwMajorVersion < 6
      || VersionInformation.dwMajorVersion == 6 && VersionInformation.dwMinorVersion < 3 )
    {
      SymCryptFatal(1853059702LL);
    }
    SymCryptDetectCpuFeaturesByCpuid(1LL);
    if ( (RtlGetEnabledExtendedFeatures(0xFFFFFFFFFFFFFFFFuLL) & 4) == 0 )
      g_SymCryptCpuFeaturesNotPresent |= 0x10u;
    g_SymCryptCpuFeaturesNotPresent &= ~0x20u;
    return SymCryptInitEnvCommon(a1);
  }
  return result;
}
