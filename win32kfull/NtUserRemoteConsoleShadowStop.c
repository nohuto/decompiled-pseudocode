/*
 * XREFs of NtUserRemoteConsoleShadowStop @ 0x1C01DAAF0
 * Callers:
 *     <none>
 * Callees:
 *     xxxRemoteConsoleShadowStop @ 0x1C0206924 (xxxRemoteConsoleShadowStop.c)
 */

__int64 NtUserRemoteConsoleShadowStop()
{
  unsigned int v0; // ebx
  __int64 v1; // rcx

  EnterCrit(0LL, 0LL);
  v0 = xxxRemoteConsoleShadowStop();
  UserSessionSwitchLeaveCrit(v1);
  return v0;
}
