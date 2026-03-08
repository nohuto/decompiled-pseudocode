/*
 * XREFs of NtUserRemotePassthruDisable @ 0x1C01DAB30
 * Callers:
 *     <none>
 * Callees:
 *     RemotePassthruDisable @ 0x1C0205C9C (RemotePassthruDisable.c)
 */

__int64 NtUserRemotePassthruDisable()
{
  unsigned int v0; // ebx
  __int64 v1; // rcx

  EnterCrit(0LL, 0LL);
  v0 = RemotePassthruDisable();
  UserSessionSwitchLeaveCrit(v1);
  return v0;
}
