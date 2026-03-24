/*
 * XREFs of SSHSupportEtwRegister @ 0x140796BE0
 * Callers:
 *     SshInitialize @ 0x140A40584 (SshInitialize.c)
 * Callees:
 *     EtwRegister @ 0x140762CB0 (EtwRegister.c)
 */

NTSTATUS SSHSupportEtwRegister()
{
  return EtwRegister(&SLEEPSTUDY_ETW_PROVIDER, 0LL, 0LL, &SshpTraceHandle);
}
