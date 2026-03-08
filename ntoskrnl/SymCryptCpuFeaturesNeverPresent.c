/*
 * XREFs of SymCryptCpuFeaturesNeverPresent @ 0x1402FCE2C
 * Callers:
 *     SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater @ 0x1403ED898 (SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater.c)
 *     SymCryptSha256AppendBlocks @ 0x1403EDA50 (SymCryptSha256AppendBlocks.c)
 *     SymCryptParallelSha256Process @ 0x1403EFFF0 (SymCryptParallelSha256Process.c)
 *     SymCryptFdefRawMul @ 0x1403FE01C (SymCryptFdefRawMul.c)
 *     SymCryptFdefRawSquare @ 0x1403FE168 (SymCryptFdefRawSquare.c)
 *     SymCryptFdefDecideModulusType @ 0x1403FE210 (SymCryptFdefDecideModulusType.c)
 *     SymCryptFdefMontgomeryReduce @ 0x1403FF8C4 (SymCryptFdefMontgomeryReduce.c)
 * Callees:
 *     PdcCreateWatchdogAroundClientCall @ 0x1402992F0 (PdcCreateWatchdogAroundClientCall.c)
 */

__int64 SymCryptCpuFeaturesNeverPresent()
{
  return PdcCreateWatchdogAroundClientCall();
}
