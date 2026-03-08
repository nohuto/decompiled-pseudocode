/*
 * XREFs of TmCommitEnlistment @ 0x1403D2890
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
