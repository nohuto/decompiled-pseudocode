bool __fastcall CGeometry::HasTransform(CGeometry *this)
{
  return *((_QWORD *)this + 10) != 0LL;
}
