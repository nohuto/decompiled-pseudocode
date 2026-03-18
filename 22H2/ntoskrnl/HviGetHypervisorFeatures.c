/*
 * XREFs of HviGetHypervisorFeatures @ 0x140383390
 * Callers:
 *     KiDetectHardwareSpecControlFeatures @ 0x14038294C (KiDetectHardwareSpecControlFeatures.c)
 *     HvlpTryConfigureInterface @ 0x14038C800 (HvlpTryConfigureInterface.c)
 *     HvlGetSystemPasidCapabilities @ 0x1405444F0 (HvlGetSystemPasidCapabilities.c)
 *     HvlpDetermineEnlightenments @ 0x140549004 (HvlpDetermineEnlightenments.c)
 *     KiIsHyperVCr3RspErrataPresent @ 0x140579318 (KiIsHyperVCr3RspErrataPresent.c)
 *     HvipApertureDetectParameters @ 0x1405B5DA0 (HvipApertureDetectParameters.c)
 *     HviGetIptFeatures @ 0x14061555C (HviGetIptFeatures.c)
 *     HvlQueryDetailInfo @ 0x140940F08 (HvlQueryDetailInfo.c)
 *     KiInitializeKernel @ 0x140A8C770 (KiInitializeKernel.c)
 *     HalpLbrInitialize @ 0x140A9150C (HalpLbrInitialize.c)
 *     EtwpTraceSystemInitialization @ 0x140B381EC (EtwpTraceSystemInitialization.c)
 *     KiComputeDispatchInterruptCost @ 0x140B54AFC (KiComputeDispatchInterruptCost.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x140382E1C (HviIsHypervisorMicrosoftCompatible.c)
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
