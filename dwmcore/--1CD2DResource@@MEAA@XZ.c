void __fastcall CD2DResource::~CD2DResource(CD2DResource *this)
{
  __int64 v2; // rcx
  CD2DResourceManager *v3; // rcx
  CD2DResource **v4; // r8
  CD2DResource **v5; // rdx
  __int64 v6; // rcx

  *(_QWORD *)this = &CD2DResource::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 4LL) + 16) = &CD2DResource::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 8LL) + 16) = &CD2DResource::`vftable'{for `IDeviceResource'};
  v2 = *(int *)(*((_QWORD *)this + 2) + 4LL);
  *(_DWORD *)((char *)this + v2 + 12) = v2 - 72;
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 8LL) + 12) = *(_DWORD *)(*((_QWORD *)this + 2) + 8LL) - 88;
  if ( *((_BYTE *)this + 32) )
  {
    v3 = (CD2DResourceManager *)*((_QWORD *)this + 3);
    v4 = (CD2DResource **)*((_QWORD *)this + 5);
    if ( v4[1] != (CD2DResource *)((char *)this + 40)
      || (v5 = (CD2DResource **)*((_QWORD *)this + 6), *v5 != (CD2DResource *)((char *)this + 40)) )
    {
      __fastfail(3u);
    }
    *v5 = (CD2DResource *)v4;
    v4[1] = (CD2DResource *)v5;
    CD2DResourceManager::UnmanageResource(v3, this);
  }
  v6 = *((_QWORD *)this + 7);
  if ( v6 )
  {
    std::_Deallocate<16,0>(v6, (*((_QWORD *)this + 9) - v6) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
  }
}
