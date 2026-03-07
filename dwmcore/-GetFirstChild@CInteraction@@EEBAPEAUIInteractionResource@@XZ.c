struct IInteractionResource *__fastcall CInteraction::GetFirstChild(CInteraction *this)
{
  return (struct IInteractionResource *)((*((_QWORD *)this + 22) + 64LL) & -(__int64)(*((_QWORD *)this + 22) != 0LL));
}
