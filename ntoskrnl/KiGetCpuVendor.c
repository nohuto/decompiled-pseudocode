/*
 * XREFs of KiGetCpuVendor @ 0x140A85800
 * Callers:
 *     HvlpProcessIommu @ 0x1402FEE8C (HvlpProcessIommu.c)
 *     KiGetIptInfo @ 0x140397F50 (KiGetIptInfo.c)
 *     EtwSetPerformanceTraceInformation @ 0x1409DF094 (EtwSetPerformanceTraceInformation.c)
 *     EtwpAddMicroarchitecturalPmcToPmcGroup @ 0x1409DFEA4 (EtwpAddMicroarchitecturalPmcToPmcGroup.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x1409E01D4 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1409E1528 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x1409E183C (EtwpLoadMicroarchitecturalProfileSource.c)
 *     EtwpRemoveMicroarchitecturalPmcFromRegistry @ 0x1409E1EBC (EtwpRemoveMicroarchitecturalPmcFromRegistry.c)
 *     KiGetProcessorSignature @ 0x140A88C44 (KiGetProcessorSignature.c)
 *     KiIsNXSupported @ 0x140A8EA38 (KiIsNXSupported.c)
 *     PopIsMktmeEnabled @ 0x140AA040C (PopIsMktmeEnabled.c)
 *     KiInitializeNxSupportDiscard @ 0x140B6FE18 (KiInitializeNxSupportDiscard.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     strncmp @ 0x1403D3310 (strncmp.c)
 */

__int64 KiGetCpuVendor()
{
  struct _KPRCB *CurrentPrcb; // r8
  char Str1[16]; // [rsp+20h] [rbp-20h] BYREF

  _RAX = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  __asm { cpuid }
  CurrentPrcb->VendorString[0] = 0;
  *(_QWORD *)&Str1[4] = __PAIR64__(_RDX, _RBX);
  *(_DWORD *)&Str1[12] = _RCX;
  *(_QWORD *)CurrentPrcb->VendorString = __PAIR64__(_RDX, _RBX);
  *(_DWORD *)&CurrentPrcb->VendorString[8] = *(_DWORD *)&Str1[12];
  CurrentPrcb->VendorString[12] = 0;
  if ( !strncmp(&Str1[4], "AuthenticAMD", 0xCuLL) )
    return 1LL;
  if ( !strncmp(&Str1[4], "GenuineIntel", 0xCuLL) )
    return 2LL;
  if ( strncmp(&Str1[4], "CentaurHauls", 0xCuLL) )
  {
    if ( strncmp(&Str1[4], "HygonGenuine", 0xCuLL) )
      return strncmp(&Str1[4], "  Shanghai  ", 0xCuLL) == 0 ? 3 : 0;
    return 1LL;
  }
  return 3LL;
}
