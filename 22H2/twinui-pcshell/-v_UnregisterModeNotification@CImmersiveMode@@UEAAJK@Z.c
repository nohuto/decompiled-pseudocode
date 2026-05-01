/*
 * XREFs of ?v_UnregisterModeNotification@CImmersiveMode@@UEAAJK@Z @ 0x1801D1700
 * Callers:
 *     <none>
 * Callees:
 *     ?Unregister@AgileRegistrationList@@QEAAJK@Z @ 0x1801C4134 (-Unregister@AgileRegistrationList@@QEAAJK@Z.c)
 */

__int64 __fastcall CImmersiveMode::v_UnregisterModeNotification(RTL_SRWLOCK *this, int a2)
{
  AgileRegistrationList::Unregister(this + 19, a2);
  return 0LL;
}
