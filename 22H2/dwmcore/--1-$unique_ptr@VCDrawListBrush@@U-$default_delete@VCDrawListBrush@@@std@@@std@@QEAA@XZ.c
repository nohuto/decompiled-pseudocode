/*
 * XREFs of ??1?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x1800563DC
 * Callers:
 *     ?FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBVMILMatrix3x2@@@Z @ 0x180053B58 (-FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV-$span@$$CBUMil.c)
 *     ?GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180057590 (-GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x180094C7C (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(
        __int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<CShape>::operator()((__int64)a1, *a1);
  return result;
}
