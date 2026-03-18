/*
 * XREFs of NtUserRemotePassthruEnable @ 0x1C01FBDA0
 * Callers:
 *     <none>
 * Callees:
 *     xxxRemotePassthruEnable @ 0x1C0220C50 (xxxRemotePassthruEnable.c)
 */

__int64 NtUserRemotePassthruEnable()
{
  unsigned int v0; // ebx
  __int64 v1; // rcx

  EnterCrit(0LL, 0LL);
  v0 = xxxRemotePassthruEnable();
  UserSessionSwitchLeaveCrit(v1);
  return v0;
}
