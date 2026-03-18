/*
 * XREFs of NtUserRemoteShadowStop @ 0x1C01D9D80
 * Callers:
 *     <none>
 * Callees:
 *     xxxRemoteShadowStop @ 0x1C0204350 (xxxRemoteShadowStop.c)
 */

__int64 NtUserRemoteShadowStop()
{
  unsigned int v0; // ebx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9

  EnterCrit(0LL, 0LL);
  v0 = xxxRemoteShadowStop();
  UserSessionSwitchLeaveCrit(v2, v1, v3, v4);
  return v0;
}
