/*
 * XREFs of ?AlignVertexCount@@YAXPEAUGeometryCounts@CDrawListPrimitive@@@Z @ 0x18007C24C
 * Callers:
 *     ?Create@CDrawListPrimitive@@SAJAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IV?$span@G$0?0@gsl@@AEBUD2D_VECTOR_2F@@_NPEAPEAV1@@Z @ 0x180041FAC (-Create@CDrawListPrimitive@@SAJAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV.c)
 *     ?Create@CCpuClipAntialiasDrawListEntry@@SAJAEBUCpuClipAntialiasEntryParams@@$$QEAV?$unique_ptr@VUVData@CCpuClipAntialiasSink@@U?$default_delete@VUVData@CCpuClipAntialiasSink@@@std@@@std@@PEAPEAV1@@Z @ 0x18007BFD8 (-Create@CCpuClipAntialiasDrawListEntry@@SAJAEBUCpuClipAntialiasEntryParams@@$$QEAV-$unique_ptr@V.c)
 *     ?CreateInstanced@CDrawListPrimitive@@SAJAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@IV?$span@$$CBG$0?0@gsl@@V?$span@UInstance_Pos4_QRot_ColorDW_Size2@@$0?0@4@_NW4Enum@ParticleSortMode@@PEAPEAV1@@Z @ 0x1801FE9E0 (-CreateInstanced@CDrawListPrimitive@@SAJAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@.c)
 * Callees:
 *     <none>
 */

void __fastcall AlignVertexCount(struct CDrawListPrimitive::GeometryCounts *a1)
{
  int v1; // eax
  bool v2; // zf

  if ( (*(_DWORD *)a1 & 1) != 0 )
  {
    v1 = *(_DWORD *)a1 - (*(_DWORD *)a1 & 1) + 2;
    v2 = *((_DWORD *)a1 + 1) == 0;
    *(_DWORD *)a1 = v1;
    if ( !v2 )
      *((_DWORD *)a1 + 1) = v1;
  }
}
