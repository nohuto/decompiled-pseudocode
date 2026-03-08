/*
 * XREFs of ApplyEdgeFlagsWorker_768_256_512_ @ 0x1801FC754
 * Callers:
 *     ApplyEdgeFlags @ 0x1801FCAE8 (ApplyEdgeFlags.c)
 * Callees:
 *     <none>
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
  return (float)(((int)(float)(a2 * 256.0) + 127) >> 8);
}
