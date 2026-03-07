char __fastcall CRoundedRectangleShape::ContainsOnlyPolygons(CRoundedRectangleShape *this)
{
  __int64 v1; // rcx
  bool HasAnyRoundedCorners; // al
  char v3; // cl

  v1 = *((_QWORD *)this + 2);
  if ( *(float *)(v1 + 64) > 0.0 )
    return 1;
  HasAnyRoundedCorners = CRoundedRectangleGeometryData::HasAnyRoundedCorners((CRoundedRectangleGeometryData *)(v1 + 16));
  v3 = 0;
  if ( !HasAnyRoundedCorners )
    return 1;
  return v3;
}
