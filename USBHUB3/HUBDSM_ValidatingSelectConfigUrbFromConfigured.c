/*
 * XREFs of HUBDSM_ValidatingSelectConfigUrbFromConfigured @ 0x1C00206B0
 * Callers:
 *     <none>
 * Callees:
 *     HUBPDO_ValidateSelectConfigUrb @ 0x1C0016970 (HUBPDO_ValidateSelectConfigUrb.c)
 */

__int64 __fastcall HUBDSM_ValidatingSelectConfigUrbFromConfigured(__int64 a1)
{
  return HUBPDO_ValidateSelectConfigUrb(*(_QWORD *)(a1 + 960));
}
