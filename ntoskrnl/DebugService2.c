/*
 * XREFs of DebugService2 @ 0x140420430
 * Callers:
 *     DbgLoadImageSymbols @ 0x14036C6D0 (DbgLoadImageSymbols.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x14036CBB4 (DbgUnLoadImageSymbolsUnicode.c)
 *     KiBugcheckUnloadDebugSymbols @ 0x140567758 (KiBugcheckUnloadDebugSymbols.c)
 *     DbgCommandString @ 0x1405A5280 (DbgCommandString.c)
 *     DbgLoadUserImageSymbols @ 0x1405A52E4 (DbgLoadUserImageSymbols.c)
 *     DbgUnLoadImageSymbols @ 0x1405A5410 (DbgUnLoadImageSymbols.c)
 * Callees:
 *     <none>
 */

__int64 DebugService2()
{
  __asm { int     2Dh; Windows NT - debugging services: eax = type }
  __debugbreak();
  return DebugService2AfterInt3();
}
