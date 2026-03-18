/*
 * XREFs of SSHSupportEtwRegister @ 0x140822BBC
 * Callers:
 *     SshInitialize @ 0x140B51AA0 (SshInitialize.c)
 * Callees:
 *     EtwRegister @ 0x14078DD90 (EtwRegister.c)
 */

NTSTATUS SSHSupportEtwRegister()
{
  return EtwRegister(&SLEEPSTUDY_ETW_PROVIDER, 0LL, 0LL, &SshpTraceHandle);
}
