/*
 * XREFs of HUBPDO_CreateUnknownPdo @ 0x1C0080184
 * Callers:
 *     HUBDSM_CreatingUnknownChildPDOAndReportingToPnp @ 0x1C00234C0 (HUBDSM_CreatingUnknownChildPDOAndReportingToPnp.c)
 * Callees:
 *     HUBPDO_CreatePdoInternal @ 0x1C007EDF4 (HUBPDO_CreatePdoInternal.c)
 */

__int64 __fastcall HUBPDO_CreateUnknownPdo(_QWORD *a1)
{
  *(_DWORD *)(a1[1] + 1424LL) = 2;
  return HUBPDO_CreatePdoInternal(a1, 0);
}
