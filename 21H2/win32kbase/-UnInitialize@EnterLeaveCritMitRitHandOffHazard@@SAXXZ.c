/*
 * XREFs of ?UnInitialize@EnterLeaveCritMitRitHandOffHazard@@SAXXZ @ 0x1C00C5CFC
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C01481B0 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     InitCreateUserCrit @ 0x1C02E3F18 (InitCreateUserCrit.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void EnterLeaveCritMitRitHandOffHazard::UnInitialize(void)
{
  if ( EnterLeaveCritMitRitHandOffHazard::_spkSem )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)EnterLeaveCritMitRitHandOffHazard::_spkSem);
    EnterLeaveCritMitRitHandOffHazard::_spkSem = 0LL;
  }
}
