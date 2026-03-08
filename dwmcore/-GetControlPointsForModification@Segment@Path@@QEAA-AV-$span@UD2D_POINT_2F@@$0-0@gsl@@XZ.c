/*
 * XREFs of ?GetControlPointsForModification@Segment@Path@@QEAA?AV?$span@UD2D_POINT_2F@@$0?0@gsl@@XZ @ 0x18027CFD8
 * Callers:
 *     ?Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z @ 0x1802ABE0C (-Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x1800254CC (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?GetControlPoints@Segment@Path@@QEBA?AV?$span@$$CBUD2D_POINT_2F@@$0?0@gsl@@XZ @ 0x1800D3DFC (-GetControlPoints@Segment@Path@@QEBA-AV-$span@$$CBUD2D_POINT_2F@@$0-0@gsl@@XZ.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801AEDB0 (-terminate@details@gsl@@YAXXZ.c)
 */

gsl::details *__fastcall Path::Segment::GetControlPointsForModification(_BYTE *a1, gsl::details *a2)
{
  gsl::details *v3; // rcx
  bool v4; // zf
  __int64 v5; // rax
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]

  Path::Segment::GetControlPoints(a1, &v7);
  gsl::details::extent_type<-1>::extent_type<-1>(a2, v7);
  v4 = *(_QWORD *)a2 == -1LL;
  v5 = v8;
  *((_QWORD *)a2 + 1) = v8;
  if ( v4 || !v5 && *(_QWORD *)a2 )
  {
    gsl::details::terminate(v3);
    JUMPOUT(0x18027D020LL);
  }
  return a2;
}
