/*
 * XREFs of NtUserRemotePassthruEnable @ 0x1C01D9B40
 * Callers:
 *     <none>
 * Callees:
 *     xxxRemotePassthruEnable @ 0x1C0204098 (xxxRemotePassthruEnable.c)
 */

__int64 NtUserRemotePassthruEnable()
{
  unsigned int v0; // ebx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9

  EnterCrit(0LL, 0LL);
  v0 = xxxRemotePassthruEnable();
  UserSessionSwitchLeaveCrit(v2, v1, v3, v4);
  return v0;
}
