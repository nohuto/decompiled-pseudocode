/*
 * XREFs of SSHSupportEtwRegister @ 0x140796DE0
 * Callers:
 *     SshInitialize @ 0x140A41584 (SshInitialize.c)
 * Callees:
 *     EtwRegister @ 0x140762E70 (EtwRegister.c)
 */

NTSTATUS SSHSupportEtwRegister()
{
  return EtwRegister(&SLEEPSTUDY_ETW_PROVIDER, 0LL, 0LL, &SshpTraceHandle);
}
