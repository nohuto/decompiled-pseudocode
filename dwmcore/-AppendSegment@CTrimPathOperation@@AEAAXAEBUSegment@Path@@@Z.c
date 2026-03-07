void __fastcall CTrimPathOperation::AppendSegment(CTrimPathOperation *this, const struct Path::Segment *a2)
{
  CTrimPathOperation *v2; // rdi
  unsigned int Size; // eax
  gsl::details *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r8
  _QWORD v8[4]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v9[5]; // [rsp+50h] [rbp-28h] BYREF
  char v10; // [rsp+88h] [rbp+10h] BYREF

  v2 = this;
  LOBYTE(this) = *(_BYTE *)a2;
  Size = Path::Segment::GetSize(this);
  gsl::details::extent_type<-1>::extent_type<-1>(v8, Size);
  v6 = v8[0];
  if ( v8[0] == -1LL )
  {
    gsl::details::terminate(v5);
    JUMPOUT(0x1800157EELL);
  }
  v7 = *((_QWORD *)v2 + 1);
  v8[0] = a2;
  v8[1] = (char *)a2 + v6;
  v8[2] = (char *)a2 + v6;
  v9[1] = (char *)a2 + v6;
  v9[0] = a2;
  v9[2] = a2;
  std::vector<unsigned char>::insert<gsl::details::span_iterator<unsigned char const>,0>(
    (_DWORD)v2,
    (unsigned int)&v10,
    v7,
    (unsigned int)v9,
    (__int64)v8);
}
