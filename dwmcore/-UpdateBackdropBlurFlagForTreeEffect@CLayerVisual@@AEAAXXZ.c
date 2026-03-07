void __fastcall CLayerVisual::UpdateBackdropBlurFlagForTreeEffect(CLayerVisual *this, __int64 a2)
{
  CBrush **v2; // rax
  const struct CBackdropBrush *v3; // rbx
  unsigned __int8 v5; // bp
  char v6; // di
  struct CBrushRenderingGraph *BrushGraph; // rax

  v2 = (CBrush **)*((_QWORD *)this + 89);
  v3 = 0LL;
  v5 = 0;
  v6 = 0;
  if ( v2 )
  {
    if ( *v2 )
    {
      BrushGraph = CBrush::GetBrushGraph(*v2, a2);
      if ( BrushGraph )
      {
        v6 = *((_BYTE *)BrushGraph + 196);
        v3 = (const struct CBackdropBrush *)*((_QWORD *)BrushGraph + 26);
        v5 = *((_BYTE *)BrushGraph + 198);
      }
    }
  }
  *((_BYTE *)this + 102) ^= (*((_BYTE *)this + 102) ^ (4 * v6)) & 4;
  CVisual::UpdateHasBackdropInputFlag((CVisual **)this, v3);
  CVisual::UpdateHasWindowBackdropInputFlag((CVisual **)this, v5);
}
