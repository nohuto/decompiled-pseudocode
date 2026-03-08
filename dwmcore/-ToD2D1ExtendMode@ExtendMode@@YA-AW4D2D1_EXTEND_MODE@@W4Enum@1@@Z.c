/*
 * XREFs of ?ToD2D1ExtendMode@ExtendMode@@YA?AW4D2D1_EXTEND_MODE@@W4Enum@1@@Z @ 0x1800B6FEC
 * Callers:
 *     ?Generate@CGradientBrush@@AEAAJPEAVCD3DDevice@@AEBVRetrievalParams@CGradientSource@@@Z @ 0x1800B6EBC (-Generate@CGradientBrush@@AEAAJPEAVCD3DDevice@@AEBVRetrievalParams@CGradientSource@@@Z.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@_N@Z @ 0x1801F7758 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExtendMode::ToD2D1ExtendMode(char a1)
{
  if ( !a1 || a1 == 1 )
    return 0LL;
  if ( a1 == 2 )
    return 1LL;
  if ( a1 != 3 )
    return 0LL;
  return 2LL;
}
