struct IInteractionResource *__fastcall CInteraction::GetNextSibling(CInteraction *this)
{
  return (struct IInteractionResource *)((*((_QWORD *)this + 20) + 64LL) & -(__int64)(*((_QWORD *)this + 20) != 0LL));
}
