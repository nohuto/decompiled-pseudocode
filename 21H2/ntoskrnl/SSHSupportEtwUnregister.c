/*
 * XREFs of SSHSupportEtwUnregister @ 0x1408FBAB8
 * Callers:
 *     SshpUninitialize @ 0x140A935A4 (SshpUninitialize.c)
 * Callees:
 *     EtwUnregister @ 0x1407601D0 (EtwUnregister.c)
 */

NTSTATUS SSHSupportEtwUnregister()
{
  return EtwUnregister(SshpTraceHandle);
}
