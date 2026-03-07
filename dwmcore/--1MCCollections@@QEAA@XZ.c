void __fastcall MCCollections::~MCCollections(MCCollections *this)
{
  void *v2; // rcx
  void *v3; // rcx
  _DWORD *v4; // rdi
  int i; // esi
  int j; // edi
  void *v7; // rcx

  v2 = (void *)*((_QWORD *)this + 5);
  if ( v2 )
  {
    operator delete(v2);
    *((_QWORD *)this + 5) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 6);
  if ( v3 )
  {
    operator delete(v3);
    *((_QWORD *)this + 6) = 0LL;
  }
  *((_DWORD *)this + 14) = 0;
  v4 = (_DWORD *)((char *)this + 32);
  if ( *((_QWORD *)this + 3) )
  {
    for ( i = 0; i < *v4; ++i )
      Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)(*((_QWORD *)this + 3) + 8LL * i));
    operator delete(*((void **)this + 3));
    *((_QWORD *)this + 3) = 0LL;
  }
  *v4 = 0;
  *((_DWORD *)this + 9) = 0;
  if ( *(_QWORD *)this )
  {
    for ( j = 0; j < *((_DWORD *)this + 4); ++j )
      Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)(*((_QWORD *)this + 1) + 8LL * j));
    operator delete(*(void **)this);
    *(_QWORD *)this = 0LL;
  }
  v7 = (void *)*((_QWORD *)this + 1);
  if ( v7 )
  {
    operator delete(v7);
    *((_QWORD *)this + 1) = 0LL;
  }
  *((_DWORD *)this + 4) = 0;
}
