/*
 * XREFs of ?SetCurrentTarget@CManipulationContext@@UEAAXAEBUTargetingInfo@@@Z @ 0x1801297B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CManipulationContext::SetCurrentTarget(CManipulationContext *this, const struct TargetingInfo *a2)
{
  *((_DWORD *)this + 26) = *(_DWORD *)a2;
  Microsoft::WRL::ComPtr<IInteractionResource>::operator=(
    (__int64 (__fastcall ****)(_QWORD))this + 14,
    (_QWORD *)a2 + 1);
}
