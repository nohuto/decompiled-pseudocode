void __fastcall CSnapshot::~CSnapshot(CSnapshot *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  unsigned int v4; // ecx
  __int64 v5; // r10
  __int64 v6; // r8
  unsigned int v7; // edx
  __int64 v8; // r9

  *(_QWORD *)this = &CSnapshot::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 4LL) + 64) = &CSnapshot::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 64) = &CSnapshot::`vftable'{for `IContent'};
  v2 = *(int *)(*((_QWORD *)this + 8) + 4LL);
  *(_DWORD *)((char *)this + v2 + 60) = v2 - 40;
  v3 = *(int *)(*((_QWORD *)this + 8) + 8LL);
  *(_DWORD *)((char *)this + v3 + 60) = v3 - 56;
  v4 = 0;
  v5 = *((_QWORD *)this + 9);
  if ( v5 )
  {
    v6 = *((_QWORD *)this + 2);
    v7 = *(_DWORD *)(v6 + 744);
    v8 = *(_QWORD *)(v6 + 720);
    if ( v7 )
    {
      do
      {
        if ( v5 == *(_QWORD *)(v8 + 8LL * v4) )
          break;
        ++v4;
      }
      while ( v4 < v7 );
    }
    if ( v4 < v7 )
    {
      while ( v4 < v7 - 1 )
      {
        *(_QWORD *)(v8 + 8LL * v4) = *(_QWORD *)(v8 + 8LL * (v4 + 1));
        ++v4;
        v7 = *(_DWORD *)(v6 + 744);
      }
      *(_DWORD *)(v6 + 744) = v7 - 1;
    }
  }
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)this + 9);
  CResource::~CResource(this);
}
