/*
 * XREFs of ?GetNextSibling@CInteraction@@EEBAPEAUIInteractionResource@@XZ @ 0x180208CA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IInteractionResource *__fastcall CInteraction::GetNextSibling(CInteraction *this)
{
  return (struct IInteractionResource *)((*((_QWORD *)this + 20) + 64LL) & -(__int64)(*((_QWORD *)this + 20) != 0LL));
}
