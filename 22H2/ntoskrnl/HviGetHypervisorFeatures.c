/*
 * XREFs of HviGetHypervisorFeatures @ 0x1403A9020
 * Callers:
 *     KiDetectHardwareSpecControlFeatures @ 0x1403A8B3C (KiDetectHardwareSpecControlFeatures.c)
 *     HvlpTryConfigureInterface @ 0x1403A9460 (HvlpTryConfigureInterface.c)
 *     KiIsHyperVCr3RspErrataPresent @ 0x1403F2DE0 (KiIsHyperVCr3RspErrataPresent.c)
 *     HvlSvmGetSystemCapabilities @ 0x1404F6CE0 (HvlSvmGetSystemCapabilities.c)
 *     HvlpDetermineEnlightenments @ 0x1404FA044 (HvlpDetermineEnlightenments.c)
 *     PopIsRunningInVm @ 0x140568C40 (PopIsRunningInVm.c)
 *     HvipApertureDetectParameters @ 0x1405946C4 (HvipApertureDetectParameters.c)
 *     HviGetIptFeatures @ 0x1405BF018 (HviGetIptFeatures.c)
 *     HvlQueryDetailInfo @ 0x14088E378 (HvlQueryDetailInfo.c)
 *     KiInitializeKernel @ 0x14099CCF0 (KiInitializeKernel.c)
 *     HalpLbrInitialize @ 0x14099E874 (HalpLbrInitialize.c)
 *     EtwpTraceSystemInitialization @ 0x140A41CF8 (EtwpTraceSystemInitialization.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x1403A9060 (HviIsHypervisorMicrosoftCompatible.c)
 */

__int64 __fastcall HviGetHypervisorFeatures(_DWORD *a1)
{
  __int64 result; // rax

  result = HviIsHypervisorMicrosoftCompatible();
  if ( (_BYTE)result )
  {
    _RAX = 1073741827LL;
    __asm { cpuid }
    *a1 = result;
    a1[1] = _RBX;
    a1[2] = _RCX;
    a1[3] = _RDX;
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
    *((_QWORD *)a1 + 1) = 0LL;
  }
  return result;
}
