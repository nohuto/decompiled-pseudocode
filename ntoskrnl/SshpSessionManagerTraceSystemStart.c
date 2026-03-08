/*
 * XREFs of SshpSessionManagerTraceSystemStart @ 0x140860848
 * Callers:
 *     SshpSessionManagerInitialize @ 0x140B71F74 (SshpSessionManagerInitialize.c)
 * Callees:
 *     SshpSessionManagerSendControlEvent @ 0x1408717B8 (SshpSessionManagerSendControlEvent.c)
 */

__int64 SshpSessionManagerTraceSystemStart()
{
  return SshpSessionManagerSendControlEvent(SLEEPSTUDY_EVT_SYSTEM_STARTED_CONTROL_EVENT, 0LL, 0LL);
}
