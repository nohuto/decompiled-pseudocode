char __fastcall DirectComposition::CNineGridBrushMarshaler::TryGetBrushSourceNoRef(
        DirectComposition::CNineGridBrushMarshaler *this,
        int a2,
        struct DirectComposition::CBrushMarshaler **a3)
{
  if ( a2 )
  {
    *a3 = 0LL;
    return 0;
  }
  else
  {
    *a3 = (struct DirectComposition::CBrushMarshaler *)*((_QWORD *)this + 9);
    return 1;
  }
}
