/*
 * XREFs of TmPrepareEnlistment @ 0x1403D0D80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmPrepareEnlistment(PKENLISTMENT Enlistment, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_TmPrepareEnlistment(Enlistment, TmVirtualClock);
}
