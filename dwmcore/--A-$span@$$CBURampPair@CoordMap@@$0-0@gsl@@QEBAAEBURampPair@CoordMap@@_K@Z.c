__int64 __fastcall gsl::span<CoordMap::RampPair const,-1>::operator[](gsl::details *a1, unsigned __int64 a2)
{
  if ( a2 >= *(_QWORD *)a1 )
  {
    gsl::details::terminate(a1);
    JUMPOUT(0x18002591CLL);
  }
  return *((_QWORD *)a1 + 1) + 12 * a2;
}
