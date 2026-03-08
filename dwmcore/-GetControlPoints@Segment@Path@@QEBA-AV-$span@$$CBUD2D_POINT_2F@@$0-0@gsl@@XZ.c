/*
 * XREFs of ?GetControlPoints@Segment@Path@@QEBA?AV?$span@$$CBUD2D_POINT_2F@@$0?0@gsl@@XZ @ 0x1800D3DFC
 * Callers:
 *     ?UpdateCurrentEndPoint@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z @ 0x1800156E8 (-UpdateCurrentEndPoint@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z.c)
 *     ??Dconst_iterator@ControlPointCollection@Path@@QEBAAEBUD2D_POINT_2F@@XZ @ 0x1800D3D48 (--Dconst_iterator@ControlPointCollection@Path@@QEBAAEBUD2D_POINT_2F@@XZ.c)
 *     ??Econst_iterator@ControlPointCollection@Path@@QEAAAEAV012@XZ @ 0x1800D3D9C (--Econst_iterator@ControlPointCollection@Path@@QEAAAEAV012@XZ.c)
 *     ?GetControlPointsForModification@Segment@Path@@QEAA?AV?$span@UD2D_POINT_2F@@$0?0@gsl@@XZ @ 0x18027CFD8 (-GetControlPointsForModification@Segment@Path@@QEAA-AV-$span@UD2D_POINT_2F@@$0-0@gsl@@XZ.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801AEDB0 (-terminate@details@gsl@@YAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

_QWORD *__fastcall Path::Segment::GetControlPoints(_BYTE *a1, _QWORD *a2)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  switch ( *a1 )
  {
    case 0:
      goto LABEL_10;
    case 1:
      *a2 = 0LL;
      a2[1] = 0LL;
      return a2;
    case 2:
    case 3:
LABEL_10:
      *a2 = 1LL;
      break;
    case 4:
      *a2 = 2LL;
      break;
    case 5:
      *a2 = 3LL;
      break;
    default:
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
  }
  a2[1] = a1 + 8;
  if ( a1 == (_BYTE *)-8LL )
  {
    gsl::details::terminate((gsl::details *)0xFFFFFFFFFFFFFFF8LL);
    JUMPOUT(0x1800D3E6ALL);
  }
  return a2;
}
