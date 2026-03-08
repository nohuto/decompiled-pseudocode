/*
 * XREFs of ??A?$span@$$CBUD2D_POINT_2F@@$0?0@gsl@@QEBAAEBUD2D_POINT_2F@@_K@Z @ 0x1800D3D78
 * Callers:
 *     ?UpdateCurrentEndPoint@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z @ 0x1800156E8 (-UpdateCurrentEndPoint@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z.c)
 *     ?CreateUVData@CCpuClipAntialiasSink@@QEBAXW4TemplateID@1@AEBUBounds@1@_KIV?$span@$$CBUPrimitiveUVDesc@@$0?0@gsl@@PEAPEAVUVData@1@@Z @ 0x18007C830 (-CreateUVData@CCpuClipAntialiasSink@@QEBAXW4TemplateID@1@AEBUBounds@1@_KIV-$span@$$CBUPrimitiveU.c)
 *     ??Dconst_iterator@ControlPointCollection@Path@@QEBAAEBUD2D_POINT_2F@@XZ @ 0x1800D3D48 (--Dconst_iterator@ControlPointCollection@Path@@QEBAAEBUD2D_POINT_2F@@XZ.c)
 *     ?FillLightingData@CCpuClipAntialiasDrawListEntry@@QEBAXAEBUBounds@CCpuClipAntialiasSink@@_NAEBVCMILMatrix@@AEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x1801FE598 (-FillLightingData@CCpuClipAntialiasDrawListEntry@@QEBAXAEBUBounds@CCpuClipAntialiasSink@@_NAEBVC.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801AEDB0 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall gsl::span<D2D_POINT_2F const,-1>::operator[](gsl::details *a1, unsigned __int64 a2)
{
  if ( a2 >= *(_QWORD *)a1 )
  {
    gsl::details::terminate(a1);
    JUMPOUT(0x1800D3D94LL);
  }
  return *((_QWORD *)a1 + 1) + 8 * a2;
}
