/*
 * XREFs of ?cleanUpAndReplace@GroupedFGBoostProp@@AEAAXKPEAPEAU_EPROCESS@@@Z @ 0x1C000E4F0
 * Callers:
 *     ?Delete@GroupedFGBoostProp@@UEAAXXZ @ 0x1C000E470 (-Delete@GroupedFGBoostProp@@UEAAXXZ.c)
 *     ?SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x1C0064DF0 (-SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z.c)
 *     ?ClearGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@@Z @ 0x1C012CBB4 (-ClearGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall GroupedFGBoostProp::cleanUpAndReplace(GroupedFGBoostProp *this, int a2, struct _EPROCESS **a3)
{
  void *v5; // rdx

  v5 = (void *)*((_QWORD *)this + 4);
  if ( v5 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v5);
  *((_DWORD *)this + 6) = a2;
  *((_QWORD *)this + 4) = a3;
}
