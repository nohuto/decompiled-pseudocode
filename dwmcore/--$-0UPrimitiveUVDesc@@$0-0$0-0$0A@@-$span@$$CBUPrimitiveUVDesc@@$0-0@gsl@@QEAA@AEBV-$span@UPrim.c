_QWORD *__fastcall gsl::span<PrimitiveUVDesc const,-1>::span<PrimitiveUVDesc const,-1>(_QWORD *a1, _QWORD *a2)
{
  __int64 *v4; // rax
  gsl::details *v5; // rcx
  __int64 v6; // rax
  char v8; // [rsp+30h] [rbp+8h] BYREF

  v4 = (__int64 *)gsl::details::extent_type<-1>::extent_type<-1>(&v8, *a2);
  v5 = (gsl::details *)a2[1];
  v6 = *v4;
  *a1 = v6;
  a1[1] = v5;
  if ( v6 == -1 || !v5 && v6 )
  {
    gsl::details::terminate(v5);
    JUMPOUT(0x180025282LL);
  }
  return a1;
}
