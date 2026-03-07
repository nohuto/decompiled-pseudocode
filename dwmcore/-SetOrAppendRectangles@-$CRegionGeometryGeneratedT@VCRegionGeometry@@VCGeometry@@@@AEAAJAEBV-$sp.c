__int64 __fastcall CRegionGeometryGeneratedT<CRegionGeometry,CGeometry>::SetOrAppendRectangles(
        CRegionGeometry *this,
        _QWORD *a2,
        char a3)
{
  _QWORD *v4; // rcx

  v4 = (_QWORD *)((char *)this + 144);
  if ( !a3 )
    v4[1] = *v4;
  std::vector<tagRECT>::_Insert_range<tagRECT const *>(v4, *((_QWORD *)this + 19), a2[1], a2[1] + 16LL * *a2);
  CRegionGeometry::OnRectanglesChanged(this);
  return 0LL;
}
