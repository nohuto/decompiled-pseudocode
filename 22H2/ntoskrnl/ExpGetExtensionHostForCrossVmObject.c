/*
 * XREFs of ExpGetExtensionHostForCrossVmObject @ 0x14095C740
 * Callers:
 *     ExpAcquireCrossVmMutant @ 0x14095C3EC (ExpAcquireCrossVmMutant.c)
 *     ExpObCloseCrossVmEvent @ 0x14095C790 (ExpObCloseCrossVmEvent.c)
 *     ExpObCloseCrossVmMutant @ 0x14095C800 (ExpObCloseCrossVmMutant.c)
 *     ExpObDeleteCrossVmEvent @ 0x14095C870 (ExpObDeleteCrossVmEvent.c)
 *     ExpObDeleteCrossVmMutant @ 0x14095C8C0 (ExpObDeleteCrossVmMutant.c)
 *     ExpPulseCrossVmEvent @ 0x14095C904 (ExpPulseCrossVmEvent.c)
 *     ExpQueryCrossVmEvent @ 0x14095C960 (ExpQueryCrossVmEvent.c)
 *     ExpReleaseCrossVmMutant @ 0x14095C9CC (ExpReleaseCrossVmMutant.c)
 *     ExpResetCrossVmEvent @ 0x14095CA28 (ExpResetCrossVmEvent.c)
 *     ExpSetCrossVmEvent @ 0x14095CA84 (ExpSetCrossVmEvent.c)
 * Callees:
 *     ExGetExtensionTable @ 0x1402F7618 (ExGetExtensionTable.c)
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
