/*
 * XREFs of ?ToD2D1InterpolationMode@InterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@1@@Z @ 0x1801F91A8
 * Callers:
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@_N@Z @ 0x1801F7758 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InterpolationMode::ToD2D1InterpolationMode(char a1)
{
  if ( !a1 )
    return 0LL;
  if ( a1 == 2 )
    return 3LL;
  return 1LL;
}
