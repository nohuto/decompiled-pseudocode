/*
 * XREFs of ApplyEdgeFlagsWorker_196608_65536_131072_ @ 0x1801A12DC
 * Callers:
 *     ApplyEdgeFlags @ 0x1801A18E8 (ApplyEdgeFlags.c)
 * Callees:
 *     _o_ceil_0 @ 0x1800E7EC0 (_o_ceil_0.c)
 */

float __fastcall ApplyEdgeFlagsWorker_196608_65536_131072_(int a1, float a2, float a3)
{
  int v3; // ecx

  v3 = a1 & 0x30000;
  switch ( v3 )
  {
    case 65536:
      a2 = a2 - a3;
      break;
    case 131072:
      a2 = a2 + a3;
      break;
    case 196608:
      return a2;
  }
  o_ceil_0();
  return (float)(int)(a2 - 0.5);
}
