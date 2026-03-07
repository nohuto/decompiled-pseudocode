void __fastcall CDataStreamWriter::Recycle(CDataStreamWriter *this)
{
  CDataStreamWriter **v1; // rdx
  CDataStreamWriter **v2; // r10
  char *v3; // r9
  CDataStreamWriter *v4; // r11

  v1 = *(CDataStreamWriter ***)this;
  if ( *(CDataStreamWriter **)this != this )
  {
    v2 = (CDataStreamWriter **)*((_QWORD *)this + 1);
    if ( v1[1] != this
      || *v2 != this
      || (*v2 = (CDataStreamWriter *)v1,
          v3 = (char *)this + 16,
          v1[1] = (CDataStreamWriter *)v2,
          v4 = (CDataStreamWriter *)*((_QWORD *)this + 3),
          *(CDataStreamWriter **)(*((_QWORD *)this + 2) + 8LL) != (CDataStreamWriter *)((char *)this + 16))
      || *(char **)v4 != v3
      || *((CDataStreamWriter ***)*v1 + 1) != v1
      || *v2 != (CDataStreamWriter *)v1 )
    {
      __fastfail(3u);
    }
    *(_QWORD *)v4 = v1;
    *((_QWORD *)this + 3) = v1[1];
    *(_QWORD *)v1[1] = v3;
    v1[1] = v4;
  }
  *((_QWORD *)this + 1) = this;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *(_QWORD *)this = this;
}
