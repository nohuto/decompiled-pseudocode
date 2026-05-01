/*
 * XREFs of ?Register@CImmersiveMode@@UEAAJPEAUIActiveZBandNotification@@PEAK@Z @ 0x1801D07C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveMode::Register(RTL_SRWLOCK *this, struct IUnknown *a2, unsigned int *a3)
{
  return AgileRegistrationList::Register(this + 22, a2, a3);
}
