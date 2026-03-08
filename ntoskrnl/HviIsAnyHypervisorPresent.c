/*
 * XREFs of HviIsAnyHypervisorPresent @ 0x14037F1D0
 * Callers:
 *     KiDetectHardwareSpecControlFeatures @ 0x14037EC84 (KiDetectHardwareSpecControlFeatures.c)
 *     KiIsBranchConfusionPresent @ 0x14037F118 (KiIsBranchConfusionPresent.c)
 *     HviGetHypervisorInterface @ 0x14037F18C (HviGetHypervisorInterface.c)
 *     HviIsHypervisorVendorMicrosoft @ 0x14037FCF0 (HviIsHypervisorVendorMicrosoft.c)
 *     HvlPhase1Initialize @ 0x140384654 (HvlPhase1Initialize.c)
 *     KiDetectAmdNonArchSsbdSupport @ 0x140571794 (KiDetectAmdNonArchSsbdSupport.c)
 *     KiRestoreFeatureBits @ 0x140574114 (KiRestoreFeatureBits.c)
 *     HviGetHypervisorVendorAndMaxFunction @ 0x140612FD4 (HviGetHypervisorVendorAndMaxFunction.c)
 *     HvlPhase0Initialize @ 0x14080D7C8 (HvlPhase0Initialize.c)
 *     KiSetFeatureBits @ 0x140A8A714 (KiSetFeatureBits.c)
 *     VfFilterAttach @ 0x140ADC20C (VfFilterAttach.c)
 *     KiComputeDispatchInterruptCost @ 0x140B41CC8 (KiComputeDispatchInterruptCost.c)
 *     KeInitSystem @ 0x140B42FB8 (KeInitSystem.c)
 *     InitializeDynamicPartitioningPolicy @ 0x140B45014 (InitializeDynamicPartitioningPolicy.c)
 *     PoInitSystem @ 0x140B45CAC (PoInitSystem.c)
 *     KiIntSteerDetermineSteeringEnabled @ 0x140B713C0 (KiIntSteerDetermineSteeringEnabled.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
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
