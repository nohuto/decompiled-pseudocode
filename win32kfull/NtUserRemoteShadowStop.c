/*
 * XREFs of NtUserRemoteShadowStop @ 0x1C01DADB0
 * Callers:
 *     <none>
 * Callees:
 *     xxxRemoteShadowStop @ 0x1C0206F28 (xxxRemoteShadowStop.c)
 */

__int64 NtUserRemoteShadowStop()
{
  unsigned int v0; // ebx
  __int64 v1; // rcx

  EnterCrit(0LL, 0LL);
  v0 = xxxRemoteShadowStop();
  UserSessionSwitchLeaveCrit(v1);
  return v0;
}
