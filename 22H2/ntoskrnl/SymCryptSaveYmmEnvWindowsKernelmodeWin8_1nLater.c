/*
 * XREFs of SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater @ 0x1403F2DB8
 * Callers:
 *     SymCryptSaveYmm @ 0x14056D2A4 (SymCryptSaveYmm.c)
 * Callees:
 *     KeSaveExtendedProcessorState @ 0x14020DDB0 (KeSaveExtendedProcessorState.c)
 *     SymCryptCpuFeaturesNeverPresent @ 0x14036803C (SymCryptCpuFeaturesNeverPresent.c)
 *     SymCryptFatal @ 0x14056D244 (SymCryptFatal.c)
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
