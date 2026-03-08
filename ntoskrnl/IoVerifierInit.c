/*
 * XREFs of IoVerifierInit @ 0x140ABDCAC
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x140ABFCE8 (VfInitSystemNoRebootNeeded.c)
 *     ViIovInitialization @ 0x140AD9358 (ViIovInitialization.c)
 * Callees:
 *     IopUpdateFunctionPointers @ 0x140553FEC (IopUpdateFunctionPointers.c)
 *     IoVerifierCheckForSettingsChange @ 0x140ABDBF0 (IoVerifierCheckForSettingsChange.c)
 */

void __fastcall IoVerifierInit(char a1)
{
  if ( (MmVerifierData & 0x10) != 0 )
  {
    IopUpdateFunctionPointers(1, 1, 0);
    IoVerifierCheckForSettingsChange(a1);
  }
}
