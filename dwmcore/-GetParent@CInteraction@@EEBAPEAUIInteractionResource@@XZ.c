struct IInteractionResource *__fastcall CInteraction::GetParent(CInteraction *this)
{
  return (struct IInteractionResource *)((*((_QWORD *)this + 19) + 64LL) & -(__int64)(*((_QWORD *)this + 19) != 0LL));
}
