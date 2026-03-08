/*
 * XREFs of ?IsReadyToDraw@CGradientBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800DC250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CGradientBrush::IsReadyToDraw(CGradientBrush *this, struct CDrawingContext *a2, bool *a3)
{
  *a3 = *((_QWORD *)this + 21) == *((_QWORD *)this + 22);
  return *((_QWORD *)this + 21) != *((_QWORD *)this + 22);
}
