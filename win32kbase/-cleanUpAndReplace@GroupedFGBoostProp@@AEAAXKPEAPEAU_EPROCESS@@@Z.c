/*
 * XREFs of ?cleanUpAndReplace@GroupedFGBoostProp@@AEAAXKPEAPEAU_EPROCESS@@@Z @ 0x1C000CDF0
 * Callers:
 *     ?Delete@GroupedFGBoostProp@@UEAAXXZ @ 0x1C000CD70 (-Delete@GroupedFGBoostProp@@UEAAXXZ.c)
 *     ?SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x1C008EDE4 (-SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z.c)
 *     ?ClearGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@@Z @ 0x1C0153B9C (-ClearGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
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
