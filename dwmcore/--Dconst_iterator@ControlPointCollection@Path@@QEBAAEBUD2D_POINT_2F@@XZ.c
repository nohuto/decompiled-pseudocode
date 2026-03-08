/*
 * XREFs of ??Dconst_iterator@ControlPointCollection@Path@@QEBAAEBUD2D_POINT_2F@@XZ @ 0x1800D3D48
 * Callers:
 *     ?IsEmpty@CPathSegmentsShape@@UEBA_NXZ @ 0x1800D3C70 (-IsEmpty@CPathSegmentsShape@@UEBA_NXZ.c)
 *     ?Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z @ 0x1802ABE0C (-Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z.c)
 * Callees:
 *     ??A?$span@$$CBUD2D_POINT_2F@@$0?0@gsl@@QEBAAEBUD2D_POINT_2F@@_K@Z @ 0x1800D3D78 (--A-$span@$$CBUD2D_POINT_2F@@$0-0@gsl@@QEBAAEBUD2D_POINT_2F@@_K@Z.c)
 *     ?GetControlPoints@Segment@Path@@QEBA?AV?$span@$$CBUD2D_POINT_2F@@$0?0@gsl@@XZ @ 0x1800D3DFC (-GetControlPoints@Segment@Path@@QEBA-AV-$span@$$CBUD2D_POINT_2F@@$0-0@gsl@@XZ.c)
 */

__int64 __fastcall Path::ControlPointCollection::const_iterator::operator*(__int64 a1)
{
  __int64 ControlPoints; // rax
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  ControlPoints = Path::Segment::GetControlPoints(*(_QWORD *)a1, v4);
  return gsl::span<D2D_POINT_2F const,-1>::operator[](ControlPoints, *(unsigned int *)(a1 + 16));
}
