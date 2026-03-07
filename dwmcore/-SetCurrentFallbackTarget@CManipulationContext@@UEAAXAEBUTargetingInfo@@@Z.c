void __fastcall CManipulationContext::SetCurrentFallbackTarget(
        CManipulationContext *this,
        const struct TargetingInfo *a2)
{
  *((_DWORD *)this + 30) = *(_DWORD *)a2;
  Microsoft::WRL::ComPtr<IInteractionResource>::operator=(
    (__int64 (__fastcall ****)(_QWORD))this + 16,
    (_QWORD *)a2 + 1);
}
