/*
 * XREFs of ?DecomposeRectangleEdgeFlags@@YAXW4D2D1_EDGE_FLAGS@@PEAW41@111@Z @ 0x1800F9A60
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18005F2F0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?CalcGeometryCountsForRectangle@Mesh@@CAXAEBUMeshDesc@1@PEA_K1@Z @ 0x1801FC264 (-CalcGeometryCountsForRectangle@Mesh@@CAXAEBUMeshDesc@1@PEA_K1@Z.c)
 *     ?AddEdgeFlags@CPolygonMapStrategy@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@PEBVMatrix3x3@@M@Z @ 0x1801FC384 (-AddEdgeFlags@CPolygonMapStrategy@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@PEBVMat.c)
 * Callees:
 *     <none>
 */

int *__fastcall DecomposeRectangleEdgeFlags(int a1, int *a2, int *a3, int *a4, int *a5)
{
  int v6; // ecx
  int v7; // r10d
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // r11d
  int *result; // rax

  v6 = a1 & 0x3000000;
  v7 = 3;
  if ( v6 == 0x1000000 )
  {
    v8 = 1;
  }
  else if ( v6 == 0x2000000 )
  {
    v8 = 2;
  }
  else
  {
    v8 = 3;
    if ( v6 != 50331648 )
      v8 = 0;
  }
  *a2 = v8;
  switch ( a1 & 3 )
  {
    case 1:
      v9 = 1;
      break;
    case 2:
      v9 = 2;
      break;
    case 3:
      v9 = 3;
      break;
    default:
      v9 = 0;
      break;
  }
  *a3 = v9;
  v10 = a1 & 0x300;
  if ( v10 == 256 )
  {
    v11 = 1;
  }
  else if ( v10 == 512 )
  {
    v11 = 2;
  }
  else
  {
    v11 = 3;
    if ( v10 != 768 )
      v11 = 0;
  }
  *a4 = v11;
  v12 = a1 & 0x30000;
  if ( v12 == 0x10000 )
  {
    v7 = 1;
  }
  else if ( v12 == 0x20000 )
  {
    v7 = 2;
  }
  else if ( v12 != 196608 )
  {
    v7 = 0;
  }
  result = a5;
  *a5 = v7;
  return result;
}
