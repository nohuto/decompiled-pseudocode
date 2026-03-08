/*
 * XREFs of ?FromD2D1ExtendMode@ExtendMode@@YA?AW4Enum@1@W4D2D1_EXTEND_MODE@@@Z @ 0x1800107CC
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x1800102A0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 * Callees:
 *     <none>
 */

char __fastcall ExtendMode::FromD2D1ExtendMode(int a1)
{
  int v2; // ecx

  if ( !a1 )
    return 1;
  v2 = a1 - 1;
  if ( !v2 )
    return 2;
  if ( v2 != 1 )
    return 1;
  return 3;
}
