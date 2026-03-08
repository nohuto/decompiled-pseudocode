/*
 * XREFs of ?GetOpacity@CDrawingContext@@QEBAMXZ @ 0x180111620
 * Callers:
 *     ?FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBVMILMatrix3x2@@@Z @ 0x180078030 (-FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV-$span@$$CBUMil.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x1801D1120 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall CDrawingContext::GetOpacity(CDrawingContext *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 812);
  if ( v1 )
    return *(float *)(*((_QWORD *)this + 408) + 4LL * (unsigned int)(v1 - 1));
  else
    return *(float *)&FLOAT_1_0;
}
