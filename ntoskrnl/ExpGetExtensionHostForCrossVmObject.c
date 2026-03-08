/*
 * XREFs of ExpGetExtensionHostForCrossVmObject @ 0x140A03088
 * Callers:
 *     ExpAcquireCrossVmMutant @ 0x140A02D7C (ExpAcquireCrossVmMutant.c)
 *     ExpObCloseCrossVmEvent @ 0x140A030E0 (ExpObCloseCrossVmEvent.c)
 *     ExpObCloseCrossVmMutant @ 0x140A03150 (ExpObCloseCrossVmMutant.c)
 *     ExpObDeleteCrossVmEvent @ 0x140A031C0 (ExpObDeleteCrossVmEvent.c)
 *     ExpObDeleteCrossVmMutant @ 0x140A03210 (ExpObDeleteCrossVmMutant.c)
 *     ExpPulseCrossVmEvent @ 0x140A03254 (ExpPulseCrossVmEvent.c)
 *     ExpQueryCrossVmEvent @ 0x140A032B0 (ExpQueryCrossVmEvent.c)
 *     ExpReleaseCrossVmMutant @ 0x140A0331C (ExpReleaseCrossVmMutant.c)
 *     ExpResetCrossVmEvent @ 0x140A03378 (ExpResetCrossVmEvent.c)
 *     ExpSetCrossVmEvent @ 0x140A033D4 (ExpSetCrossVmEvent.c)
 * Callees:
 *     ExGetExtensionTable @ 0x1402C57F0 (ExGetExtensionTable.c)
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
