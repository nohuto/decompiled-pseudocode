bool __fastcall CRegionGeometry::IsSupportedForCpuClipping(CRegionGeometry *this, bool *a2)
{
  if ( a2 )
    *a2 = 0;
  return (unsigned __int64)((__int64)(*((_QWORD *)this + 19) - *((_QWORD *)this + 18)) >> 4) <= 1;
}
