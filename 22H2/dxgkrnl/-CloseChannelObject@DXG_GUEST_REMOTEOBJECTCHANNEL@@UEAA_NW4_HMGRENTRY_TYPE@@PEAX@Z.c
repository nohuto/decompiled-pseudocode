/*
 * XREFs of ?CloseChannelObject@DXG_GUEST_REMOTEOBJECTCHANNEL@@UEAA_NW4_HMGRENTRY_TYPE@@PEAX@Z @ 0x1C0361250
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 */

char DXG_GUEST_REMOTEOBJECTCHANNEL::CloseChannelObject()
{
  WdLogSingleEntry1(1LL, 248LL);
  DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"FALSE", 248LL, 0LL, 0LL, 0LL, 0LL);
  return 0;
}
