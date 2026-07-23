/*
 * XREFs of PsUnlockThreadNameShared @ 0x1403F854C
 * Callers:
 *     EtwpTraceThreadRundown @ 0x1403AE970 (EtwpTraceThreadRundown.c)
 *     EtwTraceThread @ 0x14068FC44 (EtwTraceThread.c)
 * Callees:
 *     PspUnlockThreadSecurityShared @ 0x1405817AC (PspUnlockThreadSecurityShared.c)
 */

__int64 PsUnlockThreadNameShared()
{
  return PspUnlockThreadSecurityShared();
}
