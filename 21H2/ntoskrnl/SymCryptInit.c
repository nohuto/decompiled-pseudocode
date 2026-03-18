/*
 * XREFs of SymCryptInit @ 0x1403DE98C
 * Callers:
 *     HvInitializeHashLibrary @ 0x140864754 (HvInitializeHashLibrary.c)
 * Callees:
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x1403FB1CC (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 */

__int64 SymCryptInit()
{
  return SymCryptInitEnvWindowsKernelmodeWin8_1nLater(6553616LL);
}
