void __fastcall CCompositionCubeMap::ReleaseResources(CCompositionCubeMap *this)
{
  unsigned int v1; // esi
  char *i; // rdi
  __int64 v4; // r14
  __int64 v5; // rbp
  struct CResource *v6; // rdx

  v1 = 0;
  for ( i = (char *)this + 88; v1 < *((_DWORD *)this + 28); ++v1 )
  {
    v4 = *(_QWORD *)i;
    v5 = 32LL * v1;
    v6 = *(struct CResource **)(*(_QWORD *)i + v5);
    if ( v6 )
    {
      CResource::UnRegisterNotifierInternal(this, v6);
      *(_QWORD *)(v4 + 32LL * v1) = 0LL;
      Microsoft::WRL::ComPtr<CCompositionSurfaceBitmap>::InternalRelease((CResource **)(v5 + *(_QWORD *)i + 8LL));
    }
  }
  *((_DWORD *)i + 6) = 0;
  DynArrayImpl<1>::ShrinkToSize((__int64)i, 0x20u);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 18);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 17);
}
