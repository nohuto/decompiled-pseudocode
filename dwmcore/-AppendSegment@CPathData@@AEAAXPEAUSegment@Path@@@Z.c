/*
 * XREFs of ?AppendSegment@CPathData@@AEAAXPEAUSegment@Path@@@Z @ 0x18027CA74
 * Callers:
 *     ?AddArc@CPathData@@EEAAXPEBUD2D1_ARC_SEGMENT@@@Z @ 0x18027C7A0 (-AddArc@CPathData@@EEAAXPEBUD2D1_ARC_SEGMENT@@@Z.c)
 *     ?AddBezier@CPathData@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@@Z @ 0x18027C820 (-AddBezier@CPathData@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@@Z.c)
 *     ?AddBeziers@CPathData@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x18027C870 (-AddBeziers@CPathData@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ?AddLine@CPathData@@EEAAXUD2D_POINT_2F@@@Z @ 0x18027C8F0 (-AddLine@CPathData@@EEAAXUD2D_POINT_2F@@@Z.c)
 *     ?AddLines@CPathData@@EEAAXPEBUD2D_POINT_2F@@I@Z @ 0x18027C940 (-AddLines@CPathData@@EEAAXPEBUD2D_POINT_2F@@I@Z.c)
 *     ?AddQuadraticBezier@CPathData@@EEAAXPEBUD2D1_QUADRATIC_BEZIER_SEGMENT@@@Z @ 0x18027C9B0 (-AddQuadraticBezier@CPathData@@EEAAXPEBUD2D1_QUADRATIC_BEZIER_SEGMENT@@@Z.c)
 *     ?AddQuadraticBeziers@CPathData@@EEAAXPEBUD2D1_QUADRATIC_BEZIER_SEGMENT@@I@Z @ 0x18027CA10 (-AddQuadraticBeziers@CPathData@@EEAAXPEBUD2D1_QUADRATIC_BEZIER_SEGMENT@@I@Z.c)
 *     ?BeginFigure@CPathData@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z @ 0x18027CB20 (-BeginFigure@CPathData@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z.c)
 *     ?EndFigure@CPathData@@EEAAXW4D2D1_FIGURE_END@@@Z @ 0x18027CB90 (-EndFigure@CPathData@@EEAAXW4D2D1_FIGURE_END@@@Z.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x1800254CC (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ??$insert@V?$span_iterator@$$CBE@details@gsl@@$0A@@?$vector@EV?$allocator@E@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@V?$span_iterator@$$CBE@details@gsl@@1@Z @ 0x1800AB5B0 (--$insert@V-$span_iterator@$$CBE@details@gsl@@$0A@@-$vector@EV-$allocator@E@std@@@std@@QEAA-AV-$.c)
 *     ?GetSize@Segment@Path@@SAIW4SegmentType@2@@Z @ 0x1800F1F18 (-GetSize@Segment@Path@@SAIW4SegmentType@2@@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801AEDB0 (-terminate@details@gsl@@YAXXZ.c)
 */

void __fastcall CPathData::AppendSegment(CPathData *this, struct Path::Segment *a2)
{
  char v4; // al
  unsigned int Size; // eax
  gsl::details *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r8
  _QWORD v9[4]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v10[5]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v11; // [rsp+80h] [rbp+8h] BYREF

  if ( *(_BYTE *)a2 )
    v4 = *((_BYTE *)this + 49);
  else
    v4 = 0;
  *((_BYTE *)a2 + 1) = v4;
  *((_BYTE *)this + 49) = 0;
  Size = Path::Segment::GetSize(*(_BYTE *)a2);
  gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)v9, Size);
  v7 = v9[0];
  if ( v9[0] == -1LL )
  {
    gsl::details::terminate(v6);
    __debugbreak();
  }
  v8 = *((_QWORD *)this + 3);
  v9[0] = a2;
  v9[1] = (char *)a2 + v7;
  v9[2] = (char *)a2 + v7;
  v10[1] = (char *)a2 + v7;
  v10[0] = a2;
  v10[2] = a2;
  std::vector<unsigned char>::insert<gsl::details::span_iterator<unsigned char const>,0>(
    (__int64 *)this + 2,
    &v11,
    v8,
    (__int64)v10,
    (__int64)v9);
}
