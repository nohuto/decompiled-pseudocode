/*
 * XREFs of SshSessionManagerTraceSystemStop @ 0x1409A0FA4
 * Callers:
 *     PopGracefulShutdown @ 0x140A6AEC0 (PopGracefulShutdown.c)
 * Callees:
 *     SshpSessionManagerSendControlEvent @ 0x140811238 (SshpSessionManagerSendControlEvent.c)
 */

__int64 SshSessionManagerTraceSystemStop()
{
  return SshpSessionManagerSendControlEvent((__int64)SLEEPSTUDY_EVT_SYSTEM_STOPPED_CONTROL_EVENT, 0, 0LL);
}
