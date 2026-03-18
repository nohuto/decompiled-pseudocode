/*
 * XREFs of DbgUnLoadImageSymbols @ 0x1405A78A0
 * Callers:
 *     PopSaveHiberContext @ 0x140AA4A40 (PopSaveHiberContext.c)
 *     PopShutdownSystem @ 0x140AA8FD4 (PopShutdownSystem.c)
 * Callees:
 *     DebugService2 @ 0x1404287C0 (DebugService2.c)
 */

__int64 DbgUnLoadImageSymbols()
{
  return DebugService2();
}
