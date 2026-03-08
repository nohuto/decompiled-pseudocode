/*
 * XREFs of KeSaveExtendedProcessorState @ 0x14036A5E0
 * Callers:
 *     SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater @ 0x1403ED898 (SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater.c)
 *     DifKeSaveExtendedProcessorStateWrapper @ 0x1405E3440 (DifKeSaveExtendedProcessorStateWrapper.c)
 * Callees:
 *     KeSaveExtendedAndSupervisorState @ 0x14036A62C (KeSaveExtendedAndSupervisorState.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

NTSTATUS __stdcall KeSaveExtendedProcessorState(ULONG64 Mask, PXSTATE_SAVE XStateSave)
{
  bool v2; // zf

  if ( (KeFeatureBits & 0x800000) != 0 )
    v2 = (~MEMORY[0xFFFFF780000003D8] & Mask) == 0;
  else
    v2 = (Mask & 0xFFFFFFFFFFFFFFFCuLL) == 0;
  if ( !v2 )
    KeBugCheckEx(0x131u, 0LL, KeFeatureBits & 0x800000, (unsigned int)Mask, HIDWORD(Mask));
  return KeSaveExtendedAndSupervisorState(Mask);
}
