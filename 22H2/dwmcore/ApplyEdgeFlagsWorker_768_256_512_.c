/*
 * XREFs of ApplyEdgeFlagsWorker_768_256_512_ @ 0x1801A1280
 * Callers:
 *     ApplyEdgeFlags @ 0x1801A18E8 (ApplyEdgeFlags.c)
 * Callees:
 *     _o_ceil_0 @ 0x1800E7EC0 (_o_ceil_0.c)
 */

float __fastcall ApplyEdgeFlagsWorker_768_256_512_(__int16 a1, float a2, float a3)
{
  int v3; // ecx

  v3 = a1 & 0x300;
  switch ( v3 )
  {
    case 256:
      a2 = a2 - a3;
      break;
    case 512:
      a2 = a2 + a3;
      break;
    case 768:
      return a2;
  }
  o_ceil_0();
  return (float)(int)(a2 - 0.5);
}
