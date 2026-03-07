__int64 __fastcall gsl::span<D2D_POINT_2F const,-1>::operator[](gsl::details *a1, unsigned __int64 a2)
{
  if ( a2 >= *(_QWORD *)a1 )
  {
    gsl::details::terminate(a1);
    JUMPOUT(0x1800D3D94LL);
  }
  return *((_QWORD *)a1 + 1) + 8 * a2;
}
