/*
 * XREFs of SSHSupportEtwUnregister @ 0x1408FBB08
 * Callers:
 *     SshpUninitialize @ 0x140A935A4 (SshpUninitialize.c)
 * Callees:
 *     EtwUnregister @ 0x14075F9C0 (EtwUnregister.c)
 */

NTSTATUS SSHSupportEtwUnregister()
{
  return EtwUnregister(SshpTraceHandle);
}
