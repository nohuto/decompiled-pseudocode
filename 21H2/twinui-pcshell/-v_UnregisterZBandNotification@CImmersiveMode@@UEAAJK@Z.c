/*
 * XREFs of ?v_UnregisterZBandNotification@CImmersiveMode@@UEAAJK@Z @ 0x1801D18D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unregister@AgileRegistrationList@@QEAAJK@Z @ 0x1801C42E4 (-Unregister@AgileRegistrationList@@QEAAJK@Z.c)
 */

__int64 __fastcall CImmersiveMode::v_UnregisterZBandNotification(RTL_SRWLOCK *this, int a2)
{
  AgileRegistrationList::Unregister(this + 22, a2);
  return 0LL;
}
