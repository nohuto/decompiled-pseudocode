/*
 * XREFs of SymCryptCpuFeaturesNeverPresent @ 0x140259650
 * Callers:
 *     SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater @ 0x1403FB2A4 (SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater.c)
 *     SymCryptSha256AppendBlocks @ 0x1403FB460 (SymCryptSha256AppendBlocks.c)
 *     SymCryptParallelSha256Process @ 0x1403FD830 (SymCryptParallelSha256Process.c)
 *     SymCryptFdefRawMul @ 0x14040B4A4 (SymCryptFdefRawMul.c)
 *     SymCryptFdefRawSquare @ 0x14040B5F0 (SymCryptFdefRawSquare.c)
 *     SymCryptFdefDecideModulusType @ 0x14040B698 (SymCryptFdefDecideModulusType.c)
 *     SymCryptFdefMontgomeryReduce @ 0x14040CE04 (SymCryptFdefMontgomeryReduce.c)
 * Callees:
 *     HalSystemVectorDispatchEntry @ 0x140203DC0 (HalSystemVectorDispatchEntry.c)
 */

__int64 SymCryptCpuFeaturesNeverPresent()
{
  return HalSystemVectorDispatchEntry();
}
