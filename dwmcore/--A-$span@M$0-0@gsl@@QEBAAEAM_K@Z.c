__int64 __fastcall gsl::span<float,-1>::operator[](gsl::details *a1)
{
  if ( !*(_QWORD *)a1 )
  {
    gsl::details::terminate(a1);
    JUMPOUT(0x18023CD35LL);
  }
  return *((_QWORD *)a1 + 1);
}
