/*
 * XREFs of SSHSupportEtwRegister @ 0x1408455A0
 * Callers:
 *     SshInitialize @ 0x140B03360 (SshInitialize.c)
 * Callees:
 *     EtwRegister @ 0x1406D2350 (EtwRegister.c)
 */

NTSTATUS SSHSupportEtwRegister()
{
  return EtwRegister(&SLEEPSTUDY_ETW_PROVIDER, 0LL, 0LL, &SshpTraceHandle);
}
