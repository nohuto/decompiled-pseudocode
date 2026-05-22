/*
 * XREFs of ?InvalidateFeatureStateCache@EnabledStateManager@details@wil@@AEAAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@@Z @ 0x18003DC04
 * Callers:
 *     ?OnStateChange@EnabledStateManager@details@wil@@QEAAXXZ @ 0x1800661C8 (-OnStateChange@EnabledStateManager@details@wil@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::EnabledStateManager::InvalidateFeatureStateCache(
        __int64 a1,
        volatile signed __int32 *a2,
        int a3)
{
  __int64 result; // rax

  result = a3 != 0 ? -5 : -2111;
  _InterlockedAnd(a2, result);
  return result;
}
