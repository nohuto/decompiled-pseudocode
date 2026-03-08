/*
 * XREFs of ?Create@CDrawListPrimitive@@SAJAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IV?$span@G$0?0@gsl@@AEBUD2D_VECTOR_2F@@_NPEAPEAV1@@Z @ 0x180041FAC
 * Callers:
 *     ?UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z @ 0x180041868 (-UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z.c)
 *     ?Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@PEBVCShape@@AEBVCMILMatrix@@@Z @ 0x1800B12AC (-Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAn.c)
 *     ?CreateSkyBoxPrimitive@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAPEAVCDrawListPrimitive@@@Z @ 0x1802222C0 (-CreateSkyBoxPrimitive@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAPEAVCDrawLi.c)
 * Callees:
 *     PrimitiveStorage::Alloc_16_ @ 0x18005BB80 (PrimitiveStorage--Alloc_16_.c)
 *     ?Initialize@CDrawListPrimitive@@IEAAXAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IPEBGIAEBUD2D_VECTOR_2F@@_N@Z @ 0x18005BE70 (-Initialize@CDrawListPrimitive@@IEAAXAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@.c)
 *     ?AlignVertexCount@@YAXPEAUGeometryCounts@CDrawListPrimitive@@@Z @ 0x18007C24C (-AlignVertexCount@@YAXPEAUGeometryCounts@CDrawListPrimitive@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDrawListPrimitive::Create(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        size_t Size,
        char a6,
        __int64 *a7)
{
  int v7; // r14d
  int v8; // r15d
  unsigned int v9; // edi
  unsigned int v13; // ecx
  __int64 v14; // rbx
  int v16; // [rsp+38h] [rbp-40h]
  _DWORD v17[3]; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v18; // [rsp+4Ch] [rbp-2Ch]
  int v19; // [rsp+50h] [rbp-28h]

  v7 = a1;
  v8 = *(_DWORD *)a4;
  v17[0] = *(_DWORD *)(a1 + 12);
  v9 = 0;
  v17[1] = v17[0];
  v17[2] = a3;
  v18 = v8;
  v19 = 0;
  AlignVertexCount((struct CDrawListPrimitive::GeometryCounts *)v17);
  if ( v17[0] > 0x10000u || v18 > 0x1FFFE )
  {
    v17[0] = 0;
    v18 = 0;
  }
  v14 = PrimitiveStorage::Alloc_16_((struct CDrawListPrimitive::GeometryCounts *)v17);
  if ( v14 )
  {
    LOBYTE(v16) = a6;
    CDrawListPrimitive::Initialize(v14, v7, a2, a3, *(void **)(a4 + 8), v8, Size, v16);
    *a7 = v14;
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024882, 0x42u, 0LL);
  }
  return v9;
}
