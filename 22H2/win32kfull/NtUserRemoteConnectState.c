/*
 * XREFs of NtUserRemoteConnectState @ 0x1C00A4A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtUserRemoteConnectState()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned int v4; // ebx

  EnterCrit(0LL, 0LL);
  v4 = 0;
  if ( gbNonServiceSession )
  {
    if ( gbVideoInitialized )
    {
      if ( gbExitInProgress )
      {
        v4 = 2;
      }
      else
      {
        v1 = (unsigned int)-gbConnected;
        v4 = 4 - (gbConnected != 0);
      }
    }
    else
    {
      v4 = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v1, v0, v2, v3);
  return v4;
}
