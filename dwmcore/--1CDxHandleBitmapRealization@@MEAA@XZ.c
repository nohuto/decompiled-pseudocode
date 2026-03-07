void __fastcall CDxHandleBitmapRealization::~CDxHandleBitmapRealization(CDxHandleBitmapRealization *this)
{
  CDeviceResource *v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  void *v7; // rcx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct Windows::Devices::Display::Core::IDisplaySurface *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx

  v2 = (CDxHandleBitmapRealization *)((char *)this + 320);
  *(_QWORD *)this = &CDxHandleBitmapRealization::`vftable'{for `CMILCOMBaseT<IUnknown>'};
  *((_QWORD *)this + 40) = &CDxHandleBitmapRealization::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 45) = &CDxHandleBitmapRealization::`vftable'{for `ISwapChainRealization'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 4LL) + 16) = &CDxHandleBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 8LL) + 16) = &CDxHandleBitmapRealization::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 12LL) + 16) = &CDxHandleBitmapRealization::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 16LL) + 16) = &CDxHandleBitmapRealization::`vftable'{for `CBitmapRealization'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 20LL) + 16) = &CDxHandleBitmapRealization::`vftable'{for `IDeviceResource'};
  v3 = *(int *)(*((_QWORD *)this + 2) + 4LL);
  *(_DWORD *)((char *)this + v3 + 12) = v3 - 392;
  v4 = *(int *)(*((_QWORD *)this + 2) + 8LL);
  *(_DWORD *)((char *)this + v4 + 12) = v4 - 408;
  v5 = *(int *)(*((_QWORD *)this + 2) + 12LL);
  *(_DWORD *)((char *)this + v5 + 12) = v5 - 424;
  v6 = *(int *)(*((_QWORD *)this + 2) + 16LL);
  *(_DWORD *)((char *)this + v6 + 12) = v6 - 448;
  v7 = (void *)*(int *)(*((_QWORD *)this + 2) + 20LL);
  *(_DWORD *)((char *)this + (_QWORD)v7 + 12) = (_DWORD)v7 - 472;
  v8 = *((_DWORD *)this + 70);
  if ( v8 != DisplayId::None && v8 != DisplayId::All )
    --*((_DWORD *)g_pComposition + 108);
  if ( *((_BYTE *)this + 392) )
  {
    v7 = (void *)*((_QWORD *)this + 31);
    if ( v7 )
      CloseHandle(v7);
  }
  v9 = *((_QWORD *)this + 47);
  if ( v9 )
  {
    v10 = v9 + 16 + *(int *)(*(_QWORD *)(v9 + 16) + 8LL);
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v10 + 48LL))(
      v10,
      (char *)this + *(int *)(*((_QWORD *)this + 2) + 4LL) + 16);
  }
  v11 = (struct Windows::Devices::Display::Core::IDisplaySurface *)*((_QWORD *)this + 48);
  if ( v11 )
    CDDisplayManager::NotifyRealizationBitmapReleased((CDDisplayManager *)v7, v11);
  v12 = *((_QWORD *)this + 48);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)this + 47);
  CDeviceResource::~CDeviceResource(v2);
  v13 = *((_QWORD *)this + 36);
  if ( v13 )
    CMILRefCountBaseT<IUnknown>::InternalRelease(v13);
  CD2DBitmapCache::~CD2DBitmapCache(this);
}
