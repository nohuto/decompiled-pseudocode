/*
 * XREFs of ?iXlateBGRTo555@@YAKPEAU_XLATEOBJ@@K@Z @ 0x1C0125F90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall iXlateBGRTo555(struct _XLATEOBJ *a1, unsigned int a2)
{
  return (a2 & 0xF8 | ((a2 & 0xF800 | (a2 >> 3) & 0x1F0000) >> 3)) >> 3;
}
