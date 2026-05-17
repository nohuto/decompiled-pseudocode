/*
 * XREFs of DbgUiDebugActiveProcess @ 0x1800CC930
 * Callers:
 *     <none>
 * Callees:
 *     NtDebugActiveProcess @ 0x18009EE90 (NtDebugActiveProcess.c)
 *     ZwRemoveProcessDebug @ 0x1800A0330 (ZwRemoveProcessDebug.c)
 *     DbgUiIssueRemoteBreakin @ 0x1800CC9C0 (DbgUiIssueRemoteBreakin.c)
 */

__int64 __fastcall DbgUiDebugActiveProcess(__int64 a1)
{
  int active; // ebx

  active = NtDebugActiveProcess();
  if ( active >= 0 )
  {
    active = DbgUiIssueRemoteBreakin(a1);
    if ( active < 0 )
      ZwRemoveProcessDebug();
  }
  return (unsigned int)active;
}
