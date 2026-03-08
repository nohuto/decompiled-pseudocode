/*
 * XREFs of TmSinglePhaseReject @ 0x1403D2C30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmSinglePhaseReject(PKENLISTMENT Enlistment, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_TmSinglePhaseReject(Enlistment, TmVirtualClock);
}
