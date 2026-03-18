/*
 * XREFs of SSHSupportEtwUnregister @ 0x1409A0CB8
 * Callers:
 *     SshInitialize @ 0x140B03360 (SshInitialize.c)
 * Callees:
 *     EtwUnregister @ 0x1406B7470 (EtwUnregister.c)
 */

NTSTATUS SSHSupportEtwUnregister()
{
  return EtwUnregister(SshpTraceHandle);
}
