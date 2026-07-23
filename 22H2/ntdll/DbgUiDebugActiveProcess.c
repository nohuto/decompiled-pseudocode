/*
 * XREFs of DbgUiDebugActiveProcess @ 0x1800CC930
 * Callers:
 *     <none>
 * Callees:
 *     NtDebugActiveProcess @ 0x18009EE90 (NtDebugActiveProcess.c)
 *     ZwRemoveProcessDebug @ 0x1800A0330 (ZwRemoveProcessDebug.c)
 *     DbgUiIssueRemoteBreakin @ 0x1800CC9C0 (DbgUiIssueRemoteBreakin.c)
 */

NTSTATUS __cdecl DbgUiDebugActiveProcess(HANDLE Process)
{
  int active; // ebx

  active = NtDebugActiveProcess(Process, NtCurrentTeb()->DbgSsReserved[1]);
  if ( active >= 0 )
  {
    active = DbgUiIssueRemoteBreakin(Process);
    if ( active < 0 )
      ZwRemoveProcessDebug(Process, NtCurrentTeb()->DbgSsReserved[1]);
  }
  return active;
}
