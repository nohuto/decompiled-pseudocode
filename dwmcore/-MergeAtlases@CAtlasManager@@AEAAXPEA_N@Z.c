void __fastcall CAtlasManager::MergeAtlases(CAtlasManager *this, bool *a2)
{
  __int64 v2; // r8
  bool v5; // bp
  unsigned int v6; // r10d
  __int64 i; // rax
  unsigned int v8; // r9d
  const struct CAtlasTexture *v9; // rbx
  int v10; // ecx
  CAtlasTexture **v11; // rdi
  int v12; // r14d
  CAtlasTexture **v13; // rsi
  unsigned int v14; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)this;
  v5 = 0;
  v6 = *(_DWORD *)(**(_QWORD **)this + 24LL);
  for ( i = *(_QWORD *)this + 8LL; i != *((_QWORD *)this + 1); i += 8LL )
  {
    v8 = *(_DWORD *)(*(_QWORD *)i + 24LL);
    if ( v8 < v6 )
    {
      v6 = *(_DWORD *)(*(_QWORD *)i + 24LL);
      v2 = i;
    }
    else if ( v8 == v6
           && v8 - *(_DWORD *)(*(_QWORD *)i + 28LL) < *(_DWORD *)(*(_QWORD *)v2 + 24LL)
                                                    - *(_DWORD *)(*(_QWORD *)v2 + 28LL) )
    {
      v2 = i;
    }
  }
  v9 = *(const struct CAtlasTexture **)v2;
  *(_QWORD *)v2 = 0LL;
  std::vector<std::unique_ptr<CAtlasTexture>>::erase(this, &v14);
  v10 = *((_DWORD *)v9 + 6);
  if ( v10 != *((_DWORD *)v9 + 7) )
  {
    v11 = *(CAtlasTexture ***)this;
    v12 = v10 + 1;
    v13 = (CAtlasTexture **)*((_QWORD *)this + 1);
    v14 = 1;
    if ( v11 != v13 )
    {
      v5 = 1;
      do
      {
        CAtlasTexture::CopyFrom(*v11, v9, &v14);
        if ( v14 == v12 )
          break;
        ++v11;
      }
      while ( v11 != v13 );
    }
    CAtlasTexture::PurgeAndNotify(v9);
  }
  *a2 = v5;
  CAtlasTexture::~CAtlasTexture(v9);
  operator delete(v9, 0x28uLL);
}
