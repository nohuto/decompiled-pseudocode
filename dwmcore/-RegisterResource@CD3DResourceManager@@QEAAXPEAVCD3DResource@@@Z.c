void __fastcall CD3DResourceManager::RegisterResource(CD3DResourceManager *this, struct CD3DResource *a2)
{
  char *v2; // rax
  char **v4; // rcx
  char *v6; // rdx
  unsigned int v7; // edx

  v2 = (char *)this + 32;
  v4 = (char **)*((_QWORD *)this + 5);
  v6 = (char *)a2 + 32;
  if ( *v4 != v2 )
    __fastfail(3u);
  *(_QWORD *)v6 = v2;
  *((_QWORD *)v6 + 1) = v4;
  *v4 = v6;
  *((_QWORD *)v2 + 1) = v6;
  if ( (*(unsigned __int8 (__fastcall **)(struct CD3DResource *))(*(_QWORD *)a2 + 24LL))(a2) )
    *((_BYTE *)a2 + 69) = 1;
  if ( *((_BYTE *)a2 + 68) )
  {
    *((_BYTE *)a2 + 68) = 1;
    ++*((_DWORD *)this + 18);
    if ( *((_BYTE *)a2 + 69) )
      CD2DContext::AddHwProtectedResource((CD2DContext *)(*((_QWORD *)this + 10) + 16LL));
  }
  v7 = *((_DWORD *)this + 12) + *((_DWORD *)a2 + 16);
  *((_DWORD *)this + 12) = v7;
  if ( *((_DWORD *)this + 13) < v7 )
    *((_DWORD *)this + 13) = v7;
}
