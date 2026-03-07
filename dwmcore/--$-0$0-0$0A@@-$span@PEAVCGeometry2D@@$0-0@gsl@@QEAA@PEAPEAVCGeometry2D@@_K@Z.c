gsl::details *__fastcall gsl::span<CGeometry2D *,-1>::span<CGeometry2D *,-1>(gsl::details *a1, __int64 a2, __int64 a3)
{
  gsl::details *v5; // rcx
  bool v6; // zf

  gsl::details::extent_type<-1>::extent_type<-1>(a1, a3);
  v6 = *(_QWORD *)a1 == -1LL;
  *((_QWORD *)a1 + 1) = a2;
  if ( v6 || !a2 && *(_QWORD *)a1 )
  {
    gsl::details::terminate(v5);
    JUMPOUT(0x1801BAB08LL);
  }
  return a1;
}
