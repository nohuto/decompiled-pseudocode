/*
 * XREFs of MiValidateXfgUserCallTarget @ 0x140656730
 * Callers:
 *     MiDisableXfgOnPatchedFunctions @ 0x1406425D0 (MiDisableXfgOnPatchedFunctions.c)
 *     MiCfgMarkValidEntries @ 0x1407A4C5C (MiCfgMarkValidEntries.c)
 * Callees:
 *     CfgAddressToBitState @ 0x1406566EC (CfgAddressToBitState.c)
 *     MiIsProcessXfgEnabled @ 0x140A43CCC (MiIsProcessXfgEnabled.c)
 */

_BOOL8 __fastcall MiValidateXfgUserCallTarget(unsigned __int64 a1, const signed __int64 **a2)
{
  _KPROCESS *Process; // rbx

  Process = KeGetCurrentThread()->ApcState.Process;
  return (unsigned int)CfgAddressToBitState(a1, *a2) == 2 && (unsigned int)MiIsProcessXfgEnabled(Process) != 0;
}
