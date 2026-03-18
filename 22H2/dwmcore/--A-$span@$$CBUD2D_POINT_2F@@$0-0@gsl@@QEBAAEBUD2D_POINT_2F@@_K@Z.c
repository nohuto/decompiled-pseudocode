/*
 * XREFs of ??A?$span@$$CBUD2D_POINT_2F@@$0?0@gsl@@QEBAAEBUD2D_POINT_2F@@_K@Z @ 0x1800D4828
 * Callers:
 *     ?UpdateCurrentEndPoint@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z @ 0x1800157D8 (-UpdateCurrentEndPoint@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z.c)
 *     ?CreateUVData@CCpuClipAntialiasSink@@QEBAXW4TemplateID@1@AEBUBounds@1@_KIV?$span@$$CBUPrimitiveUVDesc@@$0?0@gsl@@PEAPEAVUVData@1@@Z @ 0x18007CA00 (-CreateUVData@CCpuClipAntialiasSink@@QEBAXW4TemplateID@1@AEBUBounds@1@_KIV-$span@$$CBUPrimitiveU.c)
 *     ??Dconst_iterator@ControlPointCollection@Path@@QEBAAEBUD2D_POINT_2F@@XZ @ 0x1800D47F8 (--Dconst_iterator@ControlPointCollection@Path@@QEBAAEBUD2D_POINT_2F@@XZ.c)
 *     ?FillLightingData@CCpuClipAntialiasDrawListEntry@@QEBAXAEBUBounds@CCpuClipAntialiasSink@@_NAEBVCMILMatrix@@AEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x180201918 (-FillLightingData@CCpuClipAntialiasDrawListEntry@@QEBAXAEBUBounds@CCpuClipAntialiasSink@@_NAEBVC.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801B1FB0 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall gsl::span<D2D_POINT_2F const,-1>::operator[](gsl::details *a1, unsigned __int64 a2)
{
  if ( a2 >= *(_QWORD *)a1 )
  {
    gsl::details::terminate(a1);
    JUMPOUT(0x1800D4844LL);
  }
  return *((_QWORD *)a1 + 1) + 8 * a2;
}
