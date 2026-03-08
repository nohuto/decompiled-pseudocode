/*
 * XREFs of MiValidateXfgUserCallTarget @ 0x1406540E8
 * Callers:
 *     MiDisableXfgOnPatchedFunctions @ 0x140640170 (MiDisableXfgOnPatchedFunctions.c)
 *     MiCfgMarkValidEntries @ 0x14075C3DC (MiCfgMarkValidEntries.c)
 * Callees:
 *     CfgAddressToBitState @ 0x1406540A4 (CfgAddressToBitState.c)
 *     MiIsProcessXfgEnabled @ 0x140A40FF8 (MiIsProcessXfgEnabled.c)
 */

_BOOL8 __fastcall MiValidateXfgUserCallTarget(unsigned __int64 a1, const signed __int64 **a2)
{
  _KPROCESS *Process; // rbx

  Process = KeGetCurrentThread()->ApcState.Process;
  return (unsigned int)CfgAddressToBitState(a1, *a2) == 2 && (unsigned int)MiIsProcessXfgEnabled(Process) != 0;
}
