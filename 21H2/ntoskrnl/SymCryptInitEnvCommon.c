/*
 * XREFs of SymCryptInitEnvCommon @ 0x1403EF74C
 * Callers:
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x1403EC19C (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 * Callees:
 *     SymCryptFatal @ 0x140515168 (SymCryptFatal.c)
 */

__int64 __fastcall SymCryptInitEnvCommon(int a1)
{
  char *i; // rax
  __int64 result; // rax

  if ( a1 != 6553605 )
    SymCryptFatal(1634955892LL);
  _InterlockedOr(&g_SymCryptFlags, 1u);
  for ( i = SymCryptBuildString; *i; ++i )
    ;
  result = (unsigned int)~g_SymCryptCpuFeaturesNotPresent;
  g_SymCryptCpuFeaturesPresentCheck = ~g_SymCryptCpuFeaturesNotPresent;
  return result;
}
