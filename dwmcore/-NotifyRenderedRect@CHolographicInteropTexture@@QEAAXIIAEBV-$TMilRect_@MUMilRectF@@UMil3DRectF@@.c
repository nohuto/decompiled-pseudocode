void __fastcall CHolographicInteropTexture::NotifyRenderedRect(__int64 a1, __int64 a2, unsigned int a3, float *a4)
{
  RTL_SRWLOCK *v4; // rbx
  unsigned __int64 v5; // rbp
  int v8; // edx
  int v9; // ecx
  struct tagRECT v10; // [rsp+20h] [rbp-88h] BYREF
  void *v11[10]; // [rsp+30h] [rbp-78h] BYREF

  v4 = (RTL_SRWLOCK *)(a1 + 408);
  v5 = a3;
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 408));
  v8 = *(_DWORD *)(a1 + 260);
  v9 = *(_DWORD *)(a1 + 264);
  v10.left = (int)*a4 - v8;
  v10.right = (int)a4[2] - v8;
  v10.top = (int)a4[1] - v9;
  v10.bottom = (int)a4[3] - v9;
  FastRegion::CRegion::CRegion((FastRegion::CRegion *)v11, &v10);
  if ( *(_DWORD *)(a1 + 244) && (unsigned int)v5 < *(_DWORD *)(a1 + 248) )
  {
    if ( v5 >= 2 )
    {
      std::_Xout_of_range("invalid array<T, N> subscript");
      __debugbreak();
    }
    FastRegion::CRegion::Union(
      (const struct FastRegion::Internal::CRgnData **)(*(_QWORD *)(a1 + 8 * v5 + 208) + 16LL),
      (const struct FastRegion::Internal::CRgnData **)v11);
  }
  FastRegion::CRegion::FreeMemory(v11);
  ReleaseSRWLockExclusive(v4);
}
