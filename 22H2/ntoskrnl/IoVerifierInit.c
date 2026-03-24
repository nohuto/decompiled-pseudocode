/*
 * XREFs of IoVerifierInit @ 0x1409C477C
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x1409C6D50 (VfInitSystemNoRebootNeeded.c)
 *     VfInitBootDriversLoaded @ 0x140A4ED74 (VfInitBootDriversLoaded.c)
 * Callees:
 *     IopUpdateFunctionPointers @ 0x1405015D8 (IopUpdateFunctionPointers.c)
 *     IoVerifierCheckForSettingsChange @ 0x1409C46E4 (IoVerifierCheckForSettingsChange.c)
 */

__int64 __fastcall IoVerifierInit(char a1)
{
  __int64 result; // rax

  result = (unsigned int)MmVerifierData;
  if ( (MmVerifierData & 0x10) != 0 )
  {
    IopUpdateFunctionPointers(1, 1, 0);
    return IoVerifierCheckForSettingsChange(a1);
  }
  return result;
}
