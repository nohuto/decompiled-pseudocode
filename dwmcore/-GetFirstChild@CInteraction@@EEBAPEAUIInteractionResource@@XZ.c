/*
 * XREFs of ?GetFirstChild@CInteraction@@EEBAPEAUIInteractionResource@@XZ @ 0x18012DBF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IInteractionResource *__fastcall CInteraction::GetFirstChild(CInteraction *this)
{
  return (struct IInteractionResource *)((*((_QWORD *)this + 22) + 64LL) & -(__int64)(*((_QWORD *)this + 22) != 0LL));
}
