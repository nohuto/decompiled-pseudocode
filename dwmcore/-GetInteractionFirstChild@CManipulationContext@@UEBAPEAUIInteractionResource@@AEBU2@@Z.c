/*
 * XREFs of ?GetInteractionFirstChild@CManipulationContext@@UEBAPEAUIInteractionResource@@AEBU2@@Z @ 0x1801296A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IInteractionResource *__fastcall CManipulationContext::GetInteractionFirstChild(
        CManipulationContext *this,
        const struct IInteractionResource *a2)
{
  return (struct IInteractionResource *)(*(__int64 (__fastcall **)(const struct IInteractionResource *))(*(_QWORD *)a2 + 104LL))(a2);
}
