_QWORD *__fastcall gsl::span<PrimitiveUVDesc const,-1>::span<PrimitiveUVDesc const,-1>(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rdi
  gsl::details *v4; // rcx
  bool v5; // zf

  v2 = *a2;
  gsl::details::extent_type<-1>::extent_type<-1>(a1, 0x4EC4EC4EC4EC4EC5LL * ((a2[1] - *a2) >> 2));
  v5 = *a1 == -1LL;
  a1[1] = v2;
  if ( v5 || !v2 && *a1 )
  {
    gsl::details::terminate(v4);
    JUMPOUT(0x18001D01DLL);
  }
  return a1;
}
