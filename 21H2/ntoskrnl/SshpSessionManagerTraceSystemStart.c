/*
 * XREFs of SshpSessionManagerTraceSystemStart @ 0x140829294
 * Callers:
 *     SshpSessionManagerInitialize @ 0x140B01B6C (SshpSessionManagerInitialize.c)
 * Callees:
 *     SshpSessionManagerSendControlEvent @ 0x140811238 (SshpSessionManagerSendControlEvent.c)
 */

__int64 SshpSessionManagerTraceSystemStart()
{
  return SshpSessionManagerSendControlEvent((__int64)SLEEPSTUDY_EVT_SYSTEM_STARTED_CONTROL_EVENT, 0, 0LL);
}
