void __fastcall CDxHandleYUVBitmapRealization::~CDxHandleYUVBitmapRealization(CDxHandleYUVBitmapRealization *this)
{
  CDeviceResource *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // eax
  void *v10; // rcx
  __int64 v11; // rcx
  volatile signed __int32 *v12; // rcx
  volatile signed __int32 *v13; // rcx

  v2 = (CDxHandleYUVBitmapRealization *)((char *)this + 320);
  *(_QWORD *)this = &CDxHandleYUVBitmapRealization::`vftable'{for `CMILCOMBaseT<IUnknown>'};
  *((_QWORD *)this + 40) = &CDxHandleYUVBitmapRealization::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 45) = &CDxHandleYUVBitmapRealization::`vftable'{for `IYUVSwapChainRealization'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 4LL) + 16) = &CDxHandleYUVBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 8LL) + 16) = &CDxHandleYUVBitmapRealization::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 12LL) + 16) = &CDxHandleYUVBitmapRealization::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 16LL) + 16) = &CDxHandleYUVBitmapRealization::`vftable'{for `CBitmapRealization'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 20LL) + 16) = &CDxHandleYUVBitmapRealization::`vftable'{for `IDeviceResource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 24LL) + 16) = &CDxHandleYUVBitmapRealization::`vftable'{for `ISwapChainRealization'};
  v3 = *(int *)(*((_QWORD *)this + 2) + 4LL);
  *(_DWORD *)((char *)this + v3 + 12) = v3 - 384;
  v4 = *(int *)(*((_QWORD *)this + 2) + 8LL);
  *(_DWORD *)((char *)this + v4 + 12) = v4 - 400;
  v5 = *(int *)(*((_QWORD *)this + 2) + 12LL);
  *(_DWORD *)((char *)this + v5 + 12) = v5 - 416;
  v6 = *(int *)(*((_QWORD *)this + 2) + 16LL);
  *(_DWORD *)((char *)this + v6 + 12) = v6 - 440;
  v7 = *(int *)(*((_QWORD *)this + 2) + 20LL);
  *(_DWORD *)((char *)this + v7 + 12) = v7 - 464;
  v8 = *(int *)(*((_QWORD *)this + 2) + 24LL);
  *(_DWORD *)((char *)this + v8 + 12) = v8 - 488;
  v9 = *((_DWORD *)this + 70);
  if ( v9 != DisplayId::None && v9 != DisplayId::All )
    --*((_DWORD *)g_pComposition + 108);
  v10 = (void *)*((_QWORD *)this + 31);
  if ( v10 )
    CloseHandle(v10);
  CDxHandleYUVBitmapRealization::ReleaseTexture(this);
  v11 = *((_QWORD *)this + 48);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v12 = (volatile signed __int32 *)*((_QWORD *)this + 47);
  if ( v12 )
    CMILRefCountBaseT<IDeviceResource>::InternalRelease(v12);
  CDeviceResource::~CDeviceResource(v2);
  v13 = (volatile signed __int32 *)*((_QWORD *)this + 36);
  if ( v13 )
    CMILRefCountBaseT<IUnknown>::InternalRelease(v13);
  CD2DBitmapCache::~CD2DBitmapCache(this);
}
