/*
 * XREFs of ??A?$span@$$CBVCMilPoint2F@@$0?0@gsl@@QEBAAEBVCMilPoint2F@@_K@Z @ 0x180268248
 * Callers:
 *     ??$SetToBoundsOfUnorderedPointSet@VCMilPoint2F@@@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXV?$span@$$CBVCMilPoint2F@@$0?0@gsl@@@Z @ 0x1802680A4 (--$SetToBoundsOfUnorderedPointSet@VCMilPoint2F@@@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801AEDB0 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall gsl::span<CMilPoint2F const,-1>::operator[](gsl::details *a1, unsigned __int64 a2)
{
  if ( a2 >= *(_QWORD *)a1 )
  {
    gsl::details::terminate(a1);
    JUMPOUT(0x180268264LL);
  }
  return *((_QWORD *)a1 + 1) + 8 * a2;
}
