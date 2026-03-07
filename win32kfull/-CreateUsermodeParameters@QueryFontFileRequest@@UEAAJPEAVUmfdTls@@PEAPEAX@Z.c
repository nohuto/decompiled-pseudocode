__int64 __fastcall QueryFontFileRequest::CreateUsermodeParameters(
        QueryFontFileRequest *this,
        struct UmfdTls *a2,
        void **a3)
{
  unsigned int v5; // r10d
  int v6; // eax
  unsigned int v7; // eax
  _DWORD *v8; // rax

  v5 = *((_DWORD *)this + 13);
  v6 = -1;
  if ( v5 + 7 >= v5 )
    v6 = v5 + 7;
  v7 = v6 & 0xFFFFFFF8;
  if ( v5 + 7 < v5 )
    return 3221225495LL;
  if ( v7 + 32 < 0x20 )
    return 3221225495LL;
  v8 = UmfdTls::CommitUMBuffer(a2, v7 + 32, 1);
  if ( !v8 )
    return 3221225495LL;
  if ( *((_QWORD *)this + 7) )
    *((_QWORD *)this + 9) = v8 + 8;
  *(_QWORD *)v8 = **((_QWORD **)this + 5);
  v8[2] = *((_DWORD *)this + 12);
  v8[3] = *((_DWORD *)this + 13);
  *((_QWORD *)v8 + 2) = *((_QWORD *)this + 9);
  *a3 = v8;
  return 0LL;
}
