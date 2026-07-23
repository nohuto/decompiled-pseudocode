/*
 * XREFs of LdrCallEnclave @ 0x1800CCB00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __cdecl LdrCallEnclave(PENCLAVE_ROUTINE Routine, ULONG Flags, PVOID *RoutineParamReturn)
{
  return LdrpIssueEnclaveCall(Routine, Flags, RoutineParamReturn);
}
