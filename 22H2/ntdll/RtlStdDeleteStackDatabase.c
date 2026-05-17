/*
 * XREFs of RtlStdDeleteStackDatabase @ 0x180101010
 * Callers:
 *     RtlpInitializeStackTraceDatabase @ 0x180101410 (RtlpInitializeStackTraceDatabase.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x18009D8A0 (ZwFreeVirtualMemory.c)
 */

__int64 RtlStdDeleteStackDatabase()
{
  return ZwFreeVirtualMemory();
}
