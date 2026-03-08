/*
 * XREFs of ?ProcessChannelMessage@DXG_GUEST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1C035D7C0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXG_GUEST_REMOTEOBJECTCHANNEL::ProcessChannelMessage(DXG_GUEST_REMOTEOBJECTCHANNEL *this, void *a2)
{
  WdLogSingleEntry1(1LL, 222LL);
  DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"FALSE", 222LL, 0LL, 0LL, 0LL, 0LL);
  return 0LL;
}
