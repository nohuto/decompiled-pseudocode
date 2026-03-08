/*
 * XREFs of NtUserGetDeviceChangeInfo @ 0x1C01D20E0
 * Callers:
 *     <none>
 * Callees:
 *     xxxGetDeviceChangeInfo @ 0x1C01B3C0C (xxxGetDeviceChangeInfo.c)
 */

__int64 NtUserGetDeviceChangeInfo()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  unsigned int v3; // ebx
  __int64 v4; // rcx

  EnterCrit(0LL, 0LL);
  v3 = xxxGetDeviceChangeInfo(v1, v0, v2);
  UserSessionSwitchLeaveCrit(v4);
  return v3;
}
