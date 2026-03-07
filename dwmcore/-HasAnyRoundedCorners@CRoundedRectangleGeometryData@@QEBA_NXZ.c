char __fastcall CRoundedRectangleGeometryData::HasAnyRoundedCorners(CRoundedRectangleGeometryData *this)
{
  char v1; // r9
  __int64 v3; // rcx
  __int64 v4; // rcx

  if ( *((_BYTE *)this + 52) )
    return CRoundedRectangleGeometryData::IsRoundedCorner(this, 0LL);
  if ( *((float *)this + 4) > 0.0 && *((float *)this + 5) > 0.0
    || (unsigned __int8)CRoundedRectangleGeometryData::IsRoundedCorner(this, 1LL)
    || (unsigned __int8)CRoundedRectangleGeometryData::IsRoundedCorner(v3, 2LL)
    || (unsigned __int8)CRoundedRectangleGeometryData::IsRoundedCorner(v4, 3LL) )
  {
    return 1;
  }
  return v1;
}
