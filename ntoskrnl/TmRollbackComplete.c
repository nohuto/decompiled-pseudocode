/*
 * XREFs of TmRollbackComplete @ 0x1403D2BB0
 * Callers:
 *     CmKtmNotification @ 0x140734290 (CmKtmNotification.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmRollbackComplete(PKENLISTMENT Enlistment, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_TmRollbackComplete(Enlistment, TmVirtualClock);
}
