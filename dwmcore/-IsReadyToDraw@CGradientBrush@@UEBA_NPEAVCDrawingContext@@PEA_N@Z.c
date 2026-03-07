bool __fastcall CGradientBrush::IsReadyToDraw(CGradientBrush *this, struct CDrawingContext *a2, bool *a3)
{
  *a3 = *((_QWORD *)this + 21) == *((_QWORD *)this + 22);
  return *((_QWORD *)this + 21) != *((_QWORD *)this + 22);
}
