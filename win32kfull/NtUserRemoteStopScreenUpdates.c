/*
 * XREFs of NtUserRemoteStopScreenUpdates @ 0x1C01DADF0
 * Callers:
 *     <none>
 * Callees:
 *     xxxRemoteStopScreenUpdates @ 0x1C00F6E08 (xxxRemoteStopScreenUpdates.c)
 */

__int64 NtUserRemoteStopScreenUpdates()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 CurrentProcess; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rcx
  unsigned int v7; // ebx

  EnterCrit(0LL, 0LL);
  CurrentProcess = PsGetCurrentProcess(v1, v0, v2);
  v6 = gpepCSRSS;
  if ( CurrentProcess == gpepCSRSS )
  {
    if ( gfSwitchInProgress )
      v7 = -1073741823;
    else
      v7 = xxxRemoteStopScreenUpdates(gpepCSRSS, v4, v5);
  }
  else
  {
    v7 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
