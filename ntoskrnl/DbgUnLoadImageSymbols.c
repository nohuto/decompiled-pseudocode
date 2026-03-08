/*
 * XREFs of DbgUnLoadImageSymbols @ 0x1405A5410
 * Callers:
 *     PopSaveHiberContext @ 0x140AA1810 (PopSaveHiberContext.c)
 *     PopShutdownSystem @ 0x140AA5DA4 (PopShutdownSystem.c)
 * Callees:
 *     DebugService2 @ 0x140420430 (DebugService2.c)
 */

__int64 DbgUnLoadImageSymbols()
{
  return DebugService2();
}
