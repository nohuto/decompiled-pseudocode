gsl::details *__fastcall gsl::span<ParticleBindingData const,-1>::span<ParticleBindingData const,-1>(
        gsl::details *a1,
        __int64 *a2)
{
  __int64 v2; // rdi
  gsl::details *v4; // rcx
  bool v5; // zf

  v2 = *a2;
  gsl::details::extent_type<-1>::extent_type<-1>(a1, 0xAAAAAAAAAAAAAAABuLL * ((a2[1] - *a2) >> 3));
  v5 = *(_QWORD *)a1 == -1LL;
  *((_QWORD *)a1 + 1) = v2;
  if ( v5 || !v2 && *(_QWORD *)a1 )
  {
    gsl::details::terminate(v4);
    JUMPOUT(0x18023E1CELL);
  }
  return a1;
}
