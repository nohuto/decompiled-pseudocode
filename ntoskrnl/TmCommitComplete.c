/*
 * XREFs of TmCommitComplete @ 0x1403D2870
 * Callers:
 *     CmKtmNotification @ 0x140734290 (CmKtmNotification.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmCommitComplete(PKENLISTMENT Enlistment, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_TmCommitComplete(Enlistment, TmVirtualClock);
}
