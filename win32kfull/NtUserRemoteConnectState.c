/*
 * XREFs of NtUserRemoteConnectState @ 0x1C00DBB90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtUserRemoteConnectState()
{
  __int64 v0; // rcx
  unsigned int v1; // ebx

  EnterCrit(0LL, 0LL);
  v1 = 0;
  if ( gbNonServiceSession )
  {
    if ( gbVideoInitialized )
    {
      if ( gbExitInProgress )
      {
        v1 = 2;
      }
      else
      {
        v0 = (unsigned int)-gbConnected;
        v1 = 4 - (gbConnected != 0);
      }
    }
    else
    {
      v1 = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v0);
  return v1;
}
