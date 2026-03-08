/*
 * XREFs of ?ClipRectAndEdgeFlags@@YA?AW4D2D1_EDGE_FLAGS@@AEBUD2D_RECT_F@@W41@01PEAU2@PEAW41@@Z @ 0x1800D9524
 * Callers:
 *     ?EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x1800108C0 (-EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18005F2F0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@PEBVMatrix3x3@@M@Z @ 0x1800D9444 (-AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@PEBVMatrix3x3@@M@Z.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@_N@Z @ 0x1801F7758 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ClipRectAndEdgeFlags(__int64 a1, int a2, __int64 a3, int a4, _OWORD *a5, _DWORD *a6)
{
  char v7; // al
  float v8; // xmm1_4
  unsigned int v9; // ecx
  float v10; // xmm0_4
  __int64 result; // rax
  __int128 v12; // [rsp+0h] [rbp-18h]

  if ( (float)(*(float *)a3 - *(float *)a1) > 0.0000011920929 )
  {
    LODWORD(v12) = *(_DWORD *)a3;
    v7 = 1;
  }
  else
  {
    LODWORD(v12) = *(_DWORD *)a1;
    v7 = 0;
  }
  v8 = *(float *)(a1 + 4);
  v9 = v7 != 0 ? 0x3000000 : 0;
  if ( (float)(*(float *)(a3 + 4) - v8) <= 0.0000011920929 )
  {
    *((float *)&v12 + 1) = v8;
  }
  else
  {
    DWORD1(v12) = *(_DWORD *)(a3 + 4);
    v9 |= 3u;
  }
  v10 = *(float *)(a1 + 8) - *(float *)(a3 + 8);
  if ( v10 > 0.0000011920929 )
    DWORD2(v12) = *(_DWORD *)(a3 + 8);
  else
    DWORD2(v12) = *(_DWORD *)(a1 + 8);
  result = v9 | 0x300;
  if ( v10 <= 0.0000011920929 )
    result = v9;
  if ( (float)(*(float *)(a1 + 12) - *(float *)(a3 + 12)) > 0.0000011920929 )
  {
    HIDWORD(v12) = *(_DWORD *)(a3 + 12);
    result = (unsigned int)result | 0x30000;
  }
  else
  {
    HIDWORD(v12) = *(_DWORD *)(a1 + 12);
  }
  *a5 = v12;
  *a6 = a4 & result | a2 & ~(_DWORD)result;
  return result;
}
