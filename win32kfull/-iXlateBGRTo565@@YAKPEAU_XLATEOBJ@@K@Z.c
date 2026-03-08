/*
 * XREFs of ?iXlateBGRTo565@@YAKPEAU_XLATEOBJ@@K@Z @ 0x1C0125FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall iXlateBGRTo565(struct _XLATEOBJ *a1, unsigned int a2)
{
  return (a2 & 0xF8 | ((a2 & 0xFC00 | (a2 >> 3) & 0x1F0000) >> 2)) >> 3;
}
