void __fastcall CBackdropVisualImage::~CBackdropVisualImage(CBackdropVisualImage *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  void **v4; // rbx
  void **v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  void **v8; // rbx
  __int64 v9; // r8
  void *v10; // rcx
  bool v11; // zf
  char *v12; // [rsp+30h] [rbp+8h] BYREF
  char *v13; // [rsp+38h] [rbp+10h] BYREF

  *(_QWORD *)this = &CBackdropVisualImage::`vftable'{for `CImageSource'};
  *((_QWORD *)this + 9) = &CBackdropVisualImage::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)this + 11) = &CCachedVisualImage::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 4LL) + 64) = &CBackdropVisualImage::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 64) = &CBackdropVisualImage::`vftable'{for `IPixelFormat's `CImageSource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 12LL) + 64) = &CBackdropVisualImage::`vftable'{for `IPixelFormat's `IBitmapRealization'};
  v2 = *(int *)(*((_QWORD *)this + 8) + 4LL);
  *(_DWORD *)((char *)this + v2 + 60) = v2 - 1936;
  v3 = *(int *)(*((_QWORD *)this + 8) + 8LL);
  *(_DWORD *)((char *)this + v3 + 60) = v3 - 1952;
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 12LL) + 60) = *(_DWORD *)(*((_QWORD *)this + 8) + 12LL)
                                                                          - 1976;
  v4 = (void **)DwmDbg::DbgString::DbgString(&v12, word_180338FC0);
  v5 = (void **)DwmDbg::DbgString::DbgString(&v13, "BVI-Destroy");
  CBackdropVisualImage::LogEtwEvent((__int64)this, v5, v4);
  v6 = *((_QWORD *)this + 245);
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<std::pair<CVisual const *,CVisualTreePath const>>>(v6, *((_QWORD *)this + 246));
    std::_Deallocate<16,0>(
      *((_QWORD *)this + 245),
      (*((_QWORD *)this + 247) - *((_QWORD *)this + 245)) & 0xFFFFFFFFFFFFFFC0uLL);
    *((_QWORD *)this + 245) = 0LL;
    *((_QWORD *)this + 246) = 0LL;
    *((_QWORD *)this + 247) = 0LL;
  }
  v7 = detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *>>::size((__int64)this + 1904);
  if ( v7 )
    detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *>>::clear_region(
      (__int64)this + 1904,
      0LL,
      v7);
  detail::pointer_buffer_impl<CBlurredBackdropCache *>::~pointer_buffer_impl<CBlurredBackdropCache *>((_QWORD *)this + 238);
  v8 = (void **)((char *)this + 1792);
  v9 = (__int64)(*((_QWORD *)this + 225) - *((_QWORD *)this + 224)) >> 4;
  if ( v9 )
    detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,4,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)this + 224,
      0LL,
      v9);
  v10 = *v8;
  v11 = *((_QWORD *)this + 224) == (_QWORD)this + 1816;
  *v8 = 0LL;
  if ( v11 )
    v10 = 0LL;
  operator delete(v10);
  CCachedVisualImage::~CCachedVisualImage(this);
}
