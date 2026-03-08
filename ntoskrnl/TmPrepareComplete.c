/*
 * XREFs of TmPrepareComplete @ 0x1403D2A50
 * Callers:
 *     CmKtmNotification @ 0x140734290 (CmKtmNotification.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmPrepareComplete(PKENLISTMENT Enlistment, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_TmPrepareComplete(Enlistment, TmVirtualClock);
}
