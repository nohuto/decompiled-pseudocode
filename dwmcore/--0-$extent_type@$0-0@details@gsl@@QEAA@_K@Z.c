gsl::details *__fastcall gsl::details::extent_type<-1>::extent_type<-1>(gsl::details *a1, __int64 a2)
{
  *(_QWORD *)a1 = a2;
  if ( a2 == -1 )
  {
    gsl::details::terminate(a1);
    JUMPOUT(0x1800254E7LL);
  }
  return a1;
}
