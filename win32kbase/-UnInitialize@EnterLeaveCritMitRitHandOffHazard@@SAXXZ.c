/*
 * XREFs of ?UnInitialize@EnterLeaveCritMitRitHandOffHazard@@SAXXZ @ 0x1C00D46DC
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C015C290 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     InitCreateUserCrit @ 0x1C031F55C (InitCreateUserCrit.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void EnterLeaveCritMitRitHandOffHazard::UnInitialize(void)
{
  if ( WPP_MAIN_CB.Dpc.DpcListEntry.Next )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)WPP_MAIN_CB.Dpc.DpcListEntry.Next);
    WPP_MAIN_CB.Dpc.DpcListEntry.Next = 0LL;
  }
}
