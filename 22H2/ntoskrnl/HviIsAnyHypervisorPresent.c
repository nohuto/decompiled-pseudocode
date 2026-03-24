/*
 * XREFs of HviIsAnyHypervisorPresent @ 0x1403A5310
 * Callers:
 *     KiRestoreFeatureBits @ 0x140383E20 (KiRestoreFeatureBits.c)
 *     KiDetectHardwareSpecControlFeatures @ 0x1403A8B3C (KiDetectHardwareSpecControlFeatures.c)
 *     HviGetHypervisorInterface @ 0x1403A90B0 (HviGetHypervisorInterface.c)
 *     HviIsHypervisorVendorMicrosoft @ 0x1403AA5F0 (HviIsHypervisorVendorMicrosoft.c)
 *     HvlPhase1Initialize @ 0x1403CF458 (HvlPhase1Initialize.c)
 *     KiIsBranchConfusionPresent @ 0x1403F28F0 (KiIsBranchConfusionPresent.c)
 *     KiIsTsaMitigationSupported @ 0x1403F2B5C (KiIsTsaMitigationSupported.c)
 *     KiIsTsaPresent @ 0x1403F2BD8 (KiIsTsaPresent.c)
 *     KiDetectAmdNonArchSsbdSupport @ 0x14051B518 (KiDetectAmdNonArchSsbdSupport.c)
 *     PopIsRunningInVm @ 0x140568C40 (PopIsRunningInVm.c)
 *     HviGetHypervisorVendorAndMaxFunction @ 0x1405BEF30 (HviGetHypervisorVendorAndMaxFunction.c)
 *     HvlPhase0Initialize @ 0x140791B8C (HvlPhase0Initialize.c)
 *     KiSetFeatureBits @ 0x14099C42C (KiSetFeatureBits.c)
 *     VfFilterAttach @ 0x1409E4F04 (VfFilterAttach.c)
 *     PoInitSystem @ 0x140A3ED78 (PoInitSystem.c)
 *     KeInitSystem @ 0x140A4C33C (KeInitSystem.c)
 *     KiIntSteerInit @ 0x140A4D1CC (KiIntSteerInit.c)
 *     InitializeDynamicPartitioningPolicy @ 0x140A73288 (InitializeDynamicPartitioningPolicy.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 */

bool HviIsAnyHypervisorPresent()
{
  char v1; // r8

  _RAX = 1LL;
  v1 = 0;
  __asm { cpuid }
  if ( (int)_RCX < 0 )
  {
    _RAX = 1073741825LL;
    __asm { cpuid }
    return (_DWORD)_RAX != 1986945624;
  }
  return v1;
}
