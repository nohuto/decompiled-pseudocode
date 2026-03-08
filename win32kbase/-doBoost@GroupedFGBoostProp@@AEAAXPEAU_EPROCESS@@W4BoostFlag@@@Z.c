/*
 * XREFs of ?doBoost@GroupedFGBoostProp@@AEAAXPEAU_EPROCESS@@W4BoostFlag@@@Z @ 0x1C008F0C8
 * Callers:
 *     ?doImmediateBoostAll@GroupedFGBoostProp@@AEAAXW4BoostFlag@@@Z @ 0x1C008F05C (-doImmediateBoostAll@GroupedFGBoostProp@@AEAAXW4BoostFlag@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GroupedFGBoostProp::doBoost(__int64 a1, __int64 a2, int a3)
{
  return PsSetProcessPriorityByClass(a2, a3 == 1);
}
