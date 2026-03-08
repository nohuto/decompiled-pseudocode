/*
 * XREFs of KeRestoreExtendedProcessorState @ 0x14036A3D0
 * Callers:
 *     SymCryptRestoreYmmEnvWindowsKernelmodeWin8_1nLater @ 0x1403ED880 (SymCryptRestoreYmmEnvWindowsKernelmodeWin8_1nLater.c)
 * Callees:
 *     KeRestoreExtendedAndSupervisorState @ 0x14036A3E8 (KeRestoreExtendedAndSupervisorState.c)
 */

void __stdcall KeRestoreExtendedProcessorState(PXSTATE_SAVE XStateSave)
{
  KeRestoreExtendedAndSupervisorState(XStateSave);
}
