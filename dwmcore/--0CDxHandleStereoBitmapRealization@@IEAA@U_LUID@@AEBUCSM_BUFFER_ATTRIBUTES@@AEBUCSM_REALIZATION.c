CDxHandleStereoBitmapRealization *__fastcall CDxHandleStereoBitmapRealization::CDxHandleStereoBitmapRealization(
        CDxHandleStereoBitmapRealization *this,
        struct _LUID a2,
        const struct CSM_BUFFER_ATTRIBUTES *a3,
        const struct CSM_REALIZATION_INFO *a4)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  CComposition *v10; // rcx
  __int64 v12; // [rsp+28h] [rbp-30h]

  *((_QWORD *)this + 2) = &CDxHandleStereoBitmapRealization::`vbtable';
  *((_QWORD *)this + 41) = &CDxHandleStereoBitmapRealization::`vbtable'{for `CDeviceResource'};
  *((_QWORD *)this + 46) = &CDxHandleStereoBitmapRealization::`vbtable'{for `ISwapChainRealization'};
  *((_QWORD *)this + 69) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 72) = &CDxHandleYUVBitmapRealization::`vbtable'{for `IBitmapRealization'};
  LOBYTE(v12) = 1;
  *((_QWORD *)this + 75) = &CDxHandleYUVBitmapRealization::`vbtable'{for `IDeviceResource'};
  CDxHandleBitmapRealization::CDxHandleBitmapRealization(
    (__int64)this,
    0LL,
    *(_QWORD *)&a2,
    (__int64)a3,
    (__int64)a4,
    v12,
    1,
    0LL,
    0);
  *(_QWORD *)this = &CDxHandleStereoBitmapRealization::`vftable'{for `CMILCOMBaseT<IUnknown>'};
  *((_QWORD *)this + 40) = &CDxHandleStereoBitmapRealization::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 45) = &CDxHandleStereoBitmapRealization::`vftable'{for `ISwapChainRealization'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 4LL) + 16) = &CDxHandleStereoBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 8LL) + 16) = &CDxHandleStereoBitmapRealization::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 12LL) + 16) = &CDxHandleStereoBitmapRealization::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 16LL) + 16) = &CDxHandleStereoBitmapRealization::`vftable'{for `CBitmapRealization'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 20LL) + 16) = &CDxHandleStereoBitmapRealization::`vftable'{for `IDeviceResource'};
  v5 = *(int *)(*((_QWORD *)this + 2) + 4LL);
  *(_DWORD *)((char *)this + v5 + 12) = v5 - 496;
  v6 = *(int *)(*((_QWORD *)this + 2) + 8LL);
  *(_DWORD *)((char *)this + v6 + 12) = v6 - 512;
  v7 = *(int *)(*((_QWORD *)this + 2) + 12LL);
  *(_DWORD *)((char *)this + v7 + 12) = v7 - 528;
  v8 = *(int *)(*((_QWORD *)this + 2) + 16LL);
  *(_DWORD *)((char *)this + v8 + 12) = v8 - 552;
  v9 = *(int *)(*((_QWORD *)this + 2) + 20LL);
  *(_DWORD *)((char *)this + v9 + 12) = v9 - 576;
  *((_QWORD *)this + 50) = 0LL;
  CD2DBitmapCache::CD2DBitmapCache((CDxHandleStereoBitmapRealization *)((char *)this + 408), 1);
  CComposition::AdjustStereoEntityCount(v10, 1);
  return this;
}
