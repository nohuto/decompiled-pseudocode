/*
 * XREFs of SSHSupportEtwRegister @ 0x140791A70
 * Callers:
 *     SshInitialize @ 0x140A3F9B4 (SshInitialize.c)
 * Callees:
 *     EtwRegister @ 0x1407622D0 (EtwRegister.c)
 */

NTSTATUS SSHSupportEtwRegister()
{
  return EtwRegister(&SLEEPSTUDY_ETW_PROVIDER, 0LL, 0LL, &SshpTraceHandle);
}
