__int64 __fastcall QueryFontTreeRequest::CreateUsermodeParameters(
        QueryFontTreeRequest *this,
        UmfdUMBuffer **a2,
        void **a3)
{
  char *v5; // rax
  _QWORD *v6; // rdx
  char *v7; // rax

  v5 = (char *)UmfdTls::CommitUMBuffer(a2, 0x30u, 1);
  v6 = v5;
  if ( !v5 )
    return 3221225495LL;
  v7 = v5 + 40;
  *((_QWORD *)this + 10) = v7;
  v6[3] = v7;
  *v6 = *((_QWORD *)this + 5);
  v6[1] = **((_QWORD **)this + 6);
  *((_DWORD *)v6 + 4) = *((_DWORD *)this + 14);
  *((_DWORD *)v6 + 5) = *((_DWORD *)this + 15);
  *a3 = v6;
  return 0LL;
}
