/*
 * XREFs of SSHSupportEtwUnregister @ 0x14099F498
 * Callers:
 *     SshInitialize @ 0x140B46C1C (SshInitialize.c)
 * Callees:
 *     EtwUnregister @ 0x14076F9E0 (EtwUnregister.c)
 */

NTSTATUS SSHSupportEtwUnregister()
{
  return EtwUnregister(SshpTraceHandle);
}
