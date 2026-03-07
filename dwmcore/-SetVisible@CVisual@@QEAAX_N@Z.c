void __fastcall CVisual::SetVisible(CVisual *this, char a2)
{
  char v3; // cl
  CVisual *v4; // rcx
  bool v5; // r8

  v3 = *((_BYTE *)this + 103);
  if ( a2 != (v3 & 1) )
  {
    *((_BYTE *)this + 103) = a2 | v3 & 0xFE;
    v4 = (CVisual *)*((_QWORD *)this + 11);
    if ( v4 )
    {
      if ( a2 )
      {
        CVisual::DirtyForVisibleChild(v4, this);
        v5 = 1;
      }
      else
      {
        CVisual::DirtyForInvisibleChild((CComposition **)v4, this);
        v5 = 0;
      }
      CVisual::UpdateBackdropCounts(*((CVisual **)this + 11), this, v5);
    }
  }
}
