/*
 * XREFs of SymCryptCpuidExFunc @ 0x1403D003C
 * Callers:
 *     SymCryptDetectCpuFeaturesByCpuid @ 0x1403EF468 (SymCryptDetectCpuFeaturesByCpuid.c)
 * Callees:
 *     SymCryptCpuidExFuncEnvWindowsKernelmodeWin8_1nLater @ 0x1403EBFD4 (SymCryptCpuidExFuncEnvWindowsKernelmodeWin8_1nLater.c)
 */

__int64 SymCryptCpuidExFunc()
{
  return SymCryptCpuidExFuncEnvWindowsKernelmodeWin8_1nLater();
}
