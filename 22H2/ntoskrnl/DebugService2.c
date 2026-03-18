/*
 * XREFs of DebugService2 @ 0x1404287C0
 * Callers:
 *     DbgLoadImageSymbols @ 0x14020AAA0 (DbgLoadImageSymbols.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x14020B834 (DbgUnLoadImageSymbolsUnicode.c)
 *     KiBugcheckUnloadDebugSymbols @ 0x140569BF8 (KiBugcheckUnloadDebugSymbols.c)
 *     DbgCommandString @ 0x1405A7710 (DbgCommandString.c)
 *     DbgLoadUserImageSymbols @ 0x1405A7774 (DbgLoadUserImageSymbols.c)
 *     DbgUnLoadImageSymbols @ 0x1405A78A0 (DbgUnLoadImageSymbols.c)
 * Callees:
 *     <none>
 */

__int64 DebugService2()
{
  __asm { int     2Dh; Windows NT - debugging services: eax = type }
  __debugbreak();
  return DebugService2AfterInt3();
}
