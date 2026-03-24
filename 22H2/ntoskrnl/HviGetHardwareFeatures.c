/*
 * XREFs of HviGetHardwareFeatures @ 0x1405BEEB0
 * Callers:
 *     HvlSvmGetSystemCapabilities @ 0x1404F6CE0 (HvlSvmGetSystemCapabilities.c)
 *     HvlpDetermineEnlightenments @ 0x1404FA044 (HvlpDetermineEnlightenments.c)
 *     HvipApertureDetectParameters @ 0x1405946C4 (HvipApertureDetectParameters.c)
 *     HviIsIommuInUse @ 0x1405BF0C0 (HviIsIommuInUse.c)
 *     HvlQueryDetailInfo @ 0x14088E378 (HvlQueryDetailInfo.c)
 *     HvlQueryVsmProtectionInfo @ 0x14088E494 (HvlQueryVsmProtectionInfo.c)
 *     EtwpTraceSystemInitialization @ 0x140A41CF8 (EtwpTraceSystemInitialization.c)
 *     HalpIommuInitDiscard @ 0x140A44FE8 (HalpIommuInitDiscard.c)
 *     HalpInterruptInitDiscard @ 0x140A72AD4 (HalpInterruptInitDiscard.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     HviGetHypervisorVendorAndMaxFunction @ 0x1405BEF30 (HviGetHypervisorVendorAndMaxFunction.c)
 */

__int64 __fastcall HviGetHardwareFeatures(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF

  v10 = 0LL;
  HviGetHypervisorVendorAndMaxFunction(&v10, a2, a3, a4);
  _RAX = 1073741830LL;
  if ( (unsigned int)v10 < 0x40000006 )
  {
    result = 0LL;
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  else
  {
    __asm { cpuid }
    *(_DWORD *)a1 = result;
    *(_DWORD *)(a1 + 4) = _RBX;
    *(_DWORD *)(a1 + 8) = _RCX;
    *(_DWORD *)(a1 + 12) = _RDX;
  }
  return result;
}
