/*
 * XREFs of SymCryptCpuFeaturesNeverPresent @ 0x14024F050
 * Callers:
 *     SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater @ 0x1403EC274 (SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater.c)
 *     SymCryptSha256AppendBlocks @ 0x1403EC420 (SymCryptSha256AppendBlocks.c)
 *     SymCryptParallelSha256Process @ 0x1403EF244 (SymCryptParallelSha256Process.c)
 * Callees:
 *     HalSystemVectorDispatchEntry @ 0x140251020 (HalSystemVectorDispatchEntry.c)
 */

__int64 SymCryptCpuFeaturesNeverPresent()
{
  return HalSystemVectorDispatchEntry();
}
