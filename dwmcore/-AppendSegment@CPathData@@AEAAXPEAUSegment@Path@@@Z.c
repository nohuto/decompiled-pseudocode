void __fastcall CPathData::AppendSegment(CPathData *this, struct Path::Segment *a2)
{
  char v4; // al
  unsigned int Size; // eax
  gsl::details *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r8
  _QWORD v9[4]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v10[5]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v11; // [rsp+80h] [rbp+8h] BYREF

  if ( *(_BYTE *)a2 )
    v4 = *((_BYTE *)this + 49);
  else
    v4 = 0;
  *((_BYTE *)a2 + 1) = v4;
  *((_BYTE *)this + 49) = 0;
  Size = Path::Segment::GetSize(*(_BYTE *)a2);
  gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)v9, Size);
  v7 = v9[0];
  if ( v9[0] == -1LL )
  {
    gsl::details::terminate(v6);
    __debugbreak();
  }
  v8 = *((_QWORD *)this + 3);
  v9[0] = a2;
  v9[1] = (char *)a2 + v7;
  v9[2] = (char *)a2 + v7;
  v10[1] = (char *)a2 + v7;
  v10[0] = a2;
  v10[2] = a2;
  std::vector<unsigned char>::insert<gsl::details::span_iterator<unsigned char const>,0>(
    (__int64 *)this + 2,
    &v11,
    v8,
    (__int64)v10,
    (__int64)v9);
}
