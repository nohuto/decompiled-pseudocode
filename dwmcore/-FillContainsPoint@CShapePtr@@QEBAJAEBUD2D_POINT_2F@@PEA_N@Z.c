__int64 __fastcall CShapePtr::FillContainsPoint(CShape **this, const struct D2D_POINT_2F *a2, bool *a3)
{
  CShape *v3; // rcx
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rcx

  v3 = *this;
  v4 = -2003292412;
  if ( v3 )
  {
    v5 = CShape::FillContainsPoint(v3, a2, a3);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x16Cu, 0LL);
  }
  return v4;
}
