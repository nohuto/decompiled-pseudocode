void __fastcall CWindowBackgroundTreatment::UpdateBackdropFlags(CBrush **this, __int64 a2)
{
  struct CBrushRenderingGraph *BrushGraph; // rax
  CBrush *v4; // rdx

  BrushGraph = CBrush::GetBrushGraph(this[9], a2);
  v4 = 0LL;
  *((_BYTE *)this + 303) = 0;
  if ( BrushGraph )
  {
    if ( this != (CBrush **)-303LL )
      *((_BYTE *)this + 303) = *((_BYTE *)BrushGraph + 196);
    v4 = (CBrush *)*((_QWORD *)BrushGraph + 26);
  }
  this[38] = v4;
}
