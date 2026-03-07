__int64 __fastcall CRoundedRectangleShape::GetOutline(CRoundedRectangleShape *this, struct ID2D1GeometrySink *a2)
{
  unsigned int v2; // ebx
  struct ID2D1GeometrySink *v3; // rdx
  CShape *v4; // r8
  int Outline; // eax
  unsigned int v7; // ecx

  v2 = 0;
  if ( CRoundedRectangleGeometryData::HasIntersectingCorners((CRoundedRectangleGeometryData *)(*((_QWORD *)this + 2)
                                                                                             + 16LL)) )
  {
    Outline = CShape::GetOutline(v4, v3);
    v2 = Outline;
    if ( Outline < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, Outline, 0x103u, 0LL);
  }
  else
  {
    CRoundedRectangleShape::AddNonIntersectedD2DGeometry(v4, v3);
  }
  return v2;
}
