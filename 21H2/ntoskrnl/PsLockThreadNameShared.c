/*
 * XREFs of PsLockThreadNameShared @ 0x1403F8534
 * Callers:
 *     EtwpTraceThreadRundown @ 0x1403AE970 (EtwpTraceThreadRundown.c)
 *     EtwTraceThread @ 0x14068FC44 (EtwTraceThread.c)
 * Callees:
 *     PspLockThreadSecurityShared @ 0x140581784 (PspLockThreadSecurityShared.c)
 */

__int64 PsLockThreadNameShared()
{
  return PspLockThreadSecurityShared();
}
