/*
 * XREFs of TmReadOnlyEnlistment @ 0x1403D2AD0
 * Callers:
 *     CmKtmNotification @ 0x140734290 (CmKtmNotification.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmReadOnlyEnlistment(PKENLISTMENT Enlistment, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_TmReadOnlyEnlistment(Enlistment, TmVirtualClock);
}
