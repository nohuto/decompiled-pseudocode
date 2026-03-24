/*
 * XREFs of ApplyEdgeFlagsWorker_50331648_16777216_33554432_ @ 0x1801A1338
 * Callers:
 *     ApplyEdgeFlags @ 0x1801A18E8 (ApplyEdgeFlags.c)
 * Callees:
 *     _o_ceil_0 @ 0x1800E7EC0 (_o_ceil_0.c)
 */

float __fastcall ApplyEdgeFlagsWorker_50331648_16777216_33554432_(int a1, float a2, float a3)
{
  int v3; // ecx

  v3 = a1 & 0x3000000;
  switch ( v3 )
  {
    case 16777216:
      a2 = a2 - a3;
      break;
    case 33554432:
      a2 = a2 + a3;
      break;
    case 50331648:
      return a2;
  }
  o_ceil_0();
  return (float)(int)(a2 - 0.5);
}
