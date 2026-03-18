/*
 * XREFs of ExpGetExtensionHostForCrossVmObject @ 0x140A05D78
 * Callers:
 *     ExpAcquireCrossVmMutant @ 0x140A05A6C (ExpAcquireCrossVmMutant.c)
 *     ExpObCloseCrossVmEvent @ 0x140A05DD0 (ExpObCloseCrossVmEvent.c)
 *     ExpObCloseCrossVmMutant @ 0x140A05E40 (ExpObCloseCrossVmMutant.c)
 *     ExpObDeleteCrossVmEvent @ 0x140A05EB0 (ExpObDeleteCrossVmEvent.c)
 *     ExpObDeleteCrossVmMutant @ 0x140A05F00 (ExpObDeleteCrossVmMutant.c)
 *     ExpPulseCrossVmEvent @ 0x140A05F44 (ExpPulseCrossVmEvent.c)
 *     ExpQueryCrossVmEvent @ 0x140A05FA0 (ExpQueryCrossVmEvent.c)
 *     ExpReleaseCrossVmMutant @ 0x140A0600C (ExpReleaseCrossVmMutant.c)
 *     ExpResetCrossVmEvent @ 0x140A06068 (ExpResetCrossVmEvent.c)
 *     ExpSetCrossVmEvent @ 0x140A060C4 (ExpSetCrossVmEvent.c)
 * Callees:
 *     ExGetExtensionTable @ 0x1402FA440 (ExGetExtensionTable.c)
 */

unsigned __int64 __fastcall ExpGetExtensionHostForCrossVmObject(__int64 a1, __int64 *a2)
{
  unsigned __int64 result; // rax
  __int64 v4; // rcx

  result = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostRoot);
  if ( result )
  {
    v4 = ExpCrossVmIntExtensionHostRoot;
LABEL_3:
    *a2 = v4;
    return result;
  }
  result = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostGuest);
  if ( result )
  {
    v4 = ExpCrossVmIntExtensionHostGuest;
    goto LABEL_3;
  }
  return result;
}
