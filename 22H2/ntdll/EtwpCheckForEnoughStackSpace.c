/*
 * XREFs of EtwpCheckForEnoughStackSpace @ 0x180110C54
 * Callers:
 *     EtwpWriteToPrivateBuffers @ 0x18005064C (EtwpWriteToPrivateBuffers.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     RtlResetStackOverflow @ 0x1800DE694 (RtlResetStackOverflow.c)
 */

char EtwpCheckForEnoughStackSpace()
{
  void *v0; // rsp

  v0 = alloca(2176LL);
  return 1;
}
