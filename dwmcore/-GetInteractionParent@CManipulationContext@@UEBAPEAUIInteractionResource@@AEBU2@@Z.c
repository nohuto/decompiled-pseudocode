struct IInteractionResource *__fastcall CManipulationContext::GetInteractionParent(
        CManipulationContext *this,
        const struct IInteractionResource *a2)
{
  return (struct IInteractionResource *)(*(__int64 (__fastcall **)(const struct IInteractionResource *))(*(_QWORD *)a2 + 96LL))(a2);
}
