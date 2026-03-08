/*
 * XREFs of SSHSupportEtwRegister @ 0x1408101DC
 * Callers:
 *     SshInitialize @ 0x140B46C1C (SshInitialize.c)
 * Callees:
 *     EtwRegister @ 0x140690D20 (EtwRegister.c)
 */

NTSTATUS SSHSupportEtwRegister()
{
  return EtwRegister(&SLEEPSTUDY_ETW_PROVIDER, 0LL, 0LL, &SshpTraceHandle);
}
