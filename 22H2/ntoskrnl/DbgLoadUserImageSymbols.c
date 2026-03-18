/*
 * XREFs of DbgLoadUserImageSymbols @ 0x1405A7774
 * Callers:
 *     MiLoadUserSymbols @ 0x140A30B64 (MiLoadUserSymbols.c)
 * Callees:
 *     DebugService2 @ 0x1404287C0 (DebugService2.c)
 */

__int64 DbgLoadUserImageSymbols()
{
  return DebugService2();
}
