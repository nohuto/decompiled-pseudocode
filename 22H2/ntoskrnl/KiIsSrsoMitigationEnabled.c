/*
 * XREFs of KiIsSrsoMitigationEnabled @ 0x1403F2ADC
 * Callers:
 *     KiUpdateSpeculationControl @ 0x14021ECC0 (KiUpdateSpeculationControl.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiIsSrsoMitigationEnabled(_QWORD *a1)
{
  return (*a1 & 0x1800000200000LL) == 0x200000;
}
