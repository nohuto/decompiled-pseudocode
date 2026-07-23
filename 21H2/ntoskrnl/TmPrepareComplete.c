/*
 * XREFs of TmPrepareComplete @ 0x1403D0ED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmPrepareComplete(PKENLISTMENT Enlistment, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_TmPrepareComplete(Enlistment, TmVirtualClock);
}
