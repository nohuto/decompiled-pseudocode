gsl::details *__fastcall CPathData::GetPathData(__int64 a1, gsl::details *a2)
{
  __int64 v2; // rdi
  gsl::details *v4; // rcx
  bool v5; // zf

  v2 = *(_QWORD *)(a1 + 16);
  gsl::details::extent_type<-1>::extent_type<-1>(a2, *(_QWORD *)(a1 + 24) - v2);
  v5 = *(_QWORD *)a2 == -1LL;
  *((_QWORD *)a2 + 1) = v2;
  if ( v5 || !v2 && *(_QWORD *)a2 )
  {
    gsl::details::terminate(v4);
    JUMPOUT(0x18023BA10LL);
  }
  return a2;
}
