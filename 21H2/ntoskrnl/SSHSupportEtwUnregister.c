/*
 * XREFs of SSHSupportEtwUnregister @ 0x1408FBC18
 * Callers:
 *     SshpUninitialize @ 0x140A945A4 (SshpUninitialize.c)
 * Callees:
 *     EtwUnregister @ 0x140760390 (EtwUnregister.c)
 */

NTSTATUS SSHSupportEtwUnregister()
{
  return EtwUnregister(SshpTraceHandle);
}
