/*
 * XREFs of NtUserRemoteShadowSetup @ 0x1C01FBF50
 * Callers:
 *     <none>
 * Callees:
 *     xxxRemoteShadowSetup @ 0x1C0220E00 (xxxRemoteShadowSetup.c)
 */

__int64 NtUserRemoteShadowSetup()
{
  unsigned int v0; // ebx
  __int64 v1; // rcx

  EnterCrit(0LL, 0LL);
  v0 = xxxRemoteShadowSetup();
  UserSessionSwitchLeaveCrit(v1);
  return v0;
}
