/*
 * XREFs of ?Delete@GroupedFGBoostProp@@UEAAXXZ @ 0x1C000CD70
 * Callers:
 *     <none>
 * Callees:
 *     ?deRefAll@GroupedFGBoostProp@@AEAAXXZ @ 0x1C000CDAC (-deRefAll@GroupedFGBoostProp@@AEAAXXZ.c)
 *     ?cleanUpAndReplace@GroupedFGBoostProp@@AEAAXKPEAPEAU_EPROCESS@@@Z @ 0x1C000CDF0 (-cleanUpAndReplace@GroupedFGBoostProp@@AEAAXKPEAPEAU_EPROCESS@@@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall GroupedFGBoostProp::Delete(GroupedFGBoostProp *this)
{
  GroupedFGBoostProp::deRefAll(this);
  GroupedFGBoostProp::cleanUpAndReplace(this, 0, 0LL);
  if ( this )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, this);
}
