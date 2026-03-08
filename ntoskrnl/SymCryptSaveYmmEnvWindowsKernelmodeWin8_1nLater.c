/*
 * XREFs of SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater @ 0x1403ED898
 * Callers:
 *     SymCryptSaveYmm @ 0x14056AE14 (SymCryptSaveYmm.c)
 * Callees:
 *     SymCryptCpuFeaturesNeverPresent @ 0x1402FCE2C (SymCryptCpuFeaturesNeverPresent.c)
 *     KeSaveExtendedProcessorState @ 0x14036A5E0 (KeSaveExtendedProcessorState.c)
 *     SymCryptFatal @ 0x14056ADB4 (SymCryptFatal.c)
 */

__int64 __fastcall SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater(PXSTATE_SAVE XStateSave)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( (((unsigned __int8)g_SymCryptCpuFeaturesNotPresent | (unsigned __int8)SymCryptCpuFeaturesNeverPresent()) & 0x10) != 0 )
    SymCryptFatal(544042361LL);
  if ( KeGetCurrentIrql() <= 2u )
  {
    if ( KeSaveExtendedProcessorState(4uLL, XStateSave) < 0 )
      return 32776;
    return v2;
  }
  else
  {
    return 32776;
  }
}
