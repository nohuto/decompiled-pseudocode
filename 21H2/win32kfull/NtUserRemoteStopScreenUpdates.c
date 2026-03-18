/*
 * XREFs of NtUserRemoteStopScreenUpdates @ 0x1C01FC020
 * Callers:
 *     <none>
 * Callees:
 *     xxxRemoteStopScreenUpdates @ 0x1C0123460 (xxxRemoteStopScreenUpdates.c)
 */

__int64 NtUserRemoteStopScreenUpdates()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 CurrentProcess; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rcx
  unsigned int v6; // ebx

  EnterCrit(0LL, 0LL);
  CurrentProcess = PsGetCurrentProcess(v1, v0);
  v5 = gpepCSRSS;
  if ( CurrentProcess == gpepCSRSS )
  {
    if ( gfSwitchInProgress )
      v6 = -1073741823;
    else
      v6 = xxxRemoteStopScreenUpdates(gpepCSRSS, v3, v4);
  }
  else
  {
    v6 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
