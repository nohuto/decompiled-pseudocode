char __fastcall CRectangleGeometry::IsSameGeometry(CRectangleGeometry *this, const struct CGeometry *a2)
{
  char v2; // bl

  v2 = 0;
  if ( a2 && (*(unsigned __int8 (__fastcall **)(const struct CGeometry *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 138LL) )
    return CRoundedRectangleGeometryData::operator==((__int64)this + 144, (__int64)a2 + 144) != 0;
  return v2;
}
