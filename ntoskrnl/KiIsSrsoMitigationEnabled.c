/*
 * XREFs of KiIsSrsoMitigationEnabled @ 0x14040ADAC
 * Callers:
 *     KiUpdateSpeculationControl @ 0x1402BEF60 (KiUpdateSpeculationControl.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiIsSrsoMitigationEnabled(_QWORD *a1)
{
  return (*a1 & 0x1800000200000LL) == 0x200000;
}
