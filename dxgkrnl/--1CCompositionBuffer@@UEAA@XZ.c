void __fastcall CCompositionBuffer::~CCompositionBuffer(CCompositionBuffer *this)
{
  bool v1; // zf
  char *v3; // rbx
  char **v4; // rax
  char **v5; // rcx
  void (__fastcall ***v6)(_QWORD); // rcx

  v1 = *((_DWORD *)this + 68) == 0;
  *(_QWORD *)this = &CCompositionBuffer::`vftable';
  if ( !v1 )
  {
    v3 = (char *)this + 256;
    while ( 1 )
    {
      v4 = (char **)*((_QWORD *)v3 + 1);
      if ( *v4 != v3 || (v5 = (char **)v4[1], *v5 != (char *)v4) )
        __fastfail(3u);
      *((_QWORD *)v3 + 1) = v5;
      *v5 = v3;
      if ( v4 == (char **)v3 )
        break;
      if ( v4 != (char **)8 )
        (*(void (__fastcall **)(char **, __int64))*(v4 - 1))(v4 - 1, 1LL);
    }
    *((_DWORD *)this + 68) = 0;
  }
  v6 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 35);
  if ( v6 )
    (**v6)(v6);
}
