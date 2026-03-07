__int64 __fastcall CMeshGeometry2D::GetIndexCount(CMeshGeometry2D *this)
{
  return (__int64)(*((_QWORD *)this + 18) - *((_QWORD *)this + 17)) >> 2;
}
