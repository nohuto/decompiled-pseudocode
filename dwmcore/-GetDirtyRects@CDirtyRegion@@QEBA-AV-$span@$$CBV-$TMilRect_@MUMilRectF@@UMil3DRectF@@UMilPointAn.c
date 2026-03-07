gsl::details *__fastcall CDirtyRegion::GetDirtyRects(__int64 a1, gsl::details *a2)
{
  __int64 v3; // rdi
  bool v4; // zf

  if ( *(_BYTE *)(a1 + 4420) )
  {
    *(_QWORD *)a2 = 1LL;
    *((_QWORD *)a2 + 1) = a1 + 4400;
    if ( a1 != -4400 )
      return a2;
LABEL_6:
    gsl::details::terminate((gsl::details *)a1);
    JUMPOUT(0x1800C1ECDLL);
  }
  v3 = a1 + 2660;
  gsl::details::extent_type<-1>::extent_type<-1>(a2, *(unsigned int *)(a1 + 2820));
  v4 = *(_QWORD *)a2 == -1LL;
  *((_QWORD *)a2 + 1) = v3;
  if ( v4 || !v3 && *(_QWORD *)a2 )
    goto LABEL_6;
  return a2;
}
