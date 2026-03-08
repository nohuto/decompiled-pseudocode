/*
 * XREFs of ?iXlateBitfieldsToBitfields@@YAKPEAU_XLATEOBJ@@K@Z @ 0x1C02DE7C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall iXlateBitfieldsToBitfields(struct _XLATEOBJ *a1, unsigned int a2)
{
  unsigned int v3; // eax
  ULONG *pulXlate; // [rsp+30h] [rbp+8h] BYREF

  pulXlate = a1[1].pulXlate;
  v3 = XEPALOBJ::ulIndexToRGB((XEPALOBJ *)&pulXlate, a2);
  pulXlate = *(ULONG **)&a1[2].iUniq;
  return XEPALOBJ::ulDispatchGFPEFunction(&pulXlate, pulXlate[24], v3);
}
