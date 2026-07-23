/*
 * XREFs of TmCommitEnlistment @ 0x1403D0D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmCommitEnlistment(PKENLISTMENT Enlistment, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_TmCommitEnlistment(Enlistment, TmVirtualClock);
}
