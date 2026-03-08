/*
 * XREFs of ?CleanupChannelObject@DXG_GUEST_REMOTEOBJECTCHANNEL@@UEAAXW4_HMGRENTRY_TYPE@@PEAX@Z @ 0x1C035C760
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

char DXG_GUEST_REMOTEOBJECTCHANNEL::CleanupChannelObject()
{
  WdLogSingleEntry1(1LL, 236LL);
  return DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"FALSE", 236LL, 0LL, 0LL, 0LL, 0LL);
}
