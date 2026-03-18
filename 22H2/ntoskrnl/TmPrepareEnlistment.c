/*
 * XREFs of TmPrepareEnlistment @ 0x1403D7F90
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
