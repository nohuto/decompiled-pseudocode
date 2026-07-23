/*
 * XREFs of RtlSetLastWin32ErrorAndNtStatusFromNtStatus @ 0x1800518B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlNtStatusToDosError @ 0x180051950 (RtlNtStatusToDosError.c)
 */

void __cdecl RtlSetLastWin32ErrorAndNtStatusFromNtStatus(NTSTATUS Status)
{
  LONG v1; // eax

  v1 = RtlNtStatusToDosError(Status);
  RtlSetLastWin32Error(v1);
}
