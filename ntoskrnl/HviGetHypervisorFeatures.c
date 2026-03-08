/*
 * XREFs of HviGetHypervisorFeatures @ 0x14037F8A0
 * Callers:
 *     KiDetectHardwareSpecControlFeatures @ 0x14037EC84 (KiDetectHardwareSpecControlFeatures.c)
 *     HvlpTryConfigureInterface @ 0x14037FC60 (HvlpTryConfigureInterface.c)
 *     HvlGetSystemPasidCapabilities @ 0x140542050 (HvlGetSystemPasidCapabilities.c)
 *     HvlpDetermineEnlightenments @ 0x140546B64 (HvlpDetermineEnlightenments.c)
 *     KiIsHyperVCr3RspErrataPresent @ 0x140576E08 (KiIsHyperVCr3RspErrataPresent.c)
 *     HvipApertureDetectParameters @ 0x1405B38F0 (HvipApertureDetectParameters.c)
 *     HviGetIptFeatures @ 0x1406130AC (HviGetIptFeatures.c)
 *     HvlQueryDetailInfo @ 0x14093DEE8 (HvlQueryDetailInfo.c)
 *     KiInitializeKernel @ 0x140A89160 (KiInitializeKernel.c)
 *     HalpLbrInitialize @ 0x140A8E07C (HalpLbrInitialize.c)
 *     EtwpTraceSystemInitialization @ 0x140B41904 (EtwpTraceSystemInitialization.c)
 *     KiComputeDispatchInterruptCost @ 0x140B41CC8 (KiComputeDispatchInterruptCost.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x14037F140 (HviIsHypervisorMicrosoftCompatible.c)
 */

char __fastcall HviGetHypervisorFeatures(_DWORD *a1)
{
  LOBYTE(_RAX) = HviIsHypervisorMicrosoftCompatible();
  if ( (_BYTE)_RAX )
  {
    _RAX = 1073741827LL;
    __asm { cpuid }
    *a1 = _RAX;
    a1[1] = _RBX;
    a1[2] = _RCX;
    a1[3] = _RDX;
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
    *((_QWORD *)a1 + 1) = 0LL;
  }
  return _RAX;
}
