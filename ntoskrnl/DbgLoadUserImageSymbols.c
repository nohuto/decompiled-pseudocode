/*
 * XREFs of DbgLoadUserImageSymbols @ 0x1405A52E4
 * Callers:
 *     MiLoadUserSymbols @ 0x140A2DE34 (MiLoadUserSymbols.c)
 * Callees:
 *     DebugService2 @ 0x140420430 (DebugService2.c)
 */

__int64 DbgLoadUserImageSymbols()
{
  return DebugService2();
}
