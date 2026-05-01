/*
 * XREFs of ?OverrideDecayTime@PositionAdjustmentHistory@@UEAAXK@Z @ 0x18008DE90
 * Callers:
 *     ?set@?QIEvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Windows@@EvaluationState@EvaluateItemEventArgs@2345@W7E$AAAXW4SwitchItemInclusion@2345@@Z @ 0x18016C5F0 (-set@-QIEvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Windows@@EvaluationState@Eva.c)
 * Callees:
 *     <none>
 */

void __fastcall PositionAdjustmentHistory::OverrideDecayTime(PositionAdjustmentHistory *this, int a2)
{
  *((_DWORD *)this + 12) = a2;
}
