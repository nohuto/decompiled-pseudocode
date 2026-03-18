/*
 * XREFs of RIMFreeQDCActivePathsData @ 0x1C0019774
 * Callers:
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1C001917C (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 *     RIMGetQDCActivePathsData @ 0x1C0019514 (RIMGetQDCActivePathsData.c)
 *     RIMOnDisplayStateChange @ 0x1C007298C (RIMOnDisplayStateChange.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C0177190 (RIMEnableMonitorMappingForDevice.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C018CC18 (RIMVirtCreatePointerDeviceInfo.c)
 *     rimInUserCritCreatePointerDeviceInfo @ 0x1C018E740 (rimInUserCritCreatePointerDeviceInfo.c)
 *     RIMFindMonitorForDigitizer @ 0x1C018F670 (RIMFindMonitorForDigitizer.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0194488 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall RIMFreeQDCActivePathsData(__int64 a1)
{
  void *v1; // rdx

  if ( a1 )
  {
    v1 = *(void **)(a1 + 8);
    if ( v1 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v1);
    *(_OWORD *)a1 = 0LL;
  }
}
