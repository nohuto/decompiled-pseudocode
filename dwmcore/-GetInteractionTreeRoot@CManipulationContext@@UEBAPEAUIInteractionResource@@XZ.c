struct IInteractionResource *__fastcall CManipulationContext::GetInteractionTreeRoot(CManipulationContext *this)
{
  return (struct IInteractionResource *)((*((_QWORD *)this + 6) + 64LL) & -(__int64)(*((_QWORD *)this + 6) != 0LL));
}
