CGDIBitmapRealization *__fastcall CGDIBitmapRealization::CGDIBitmapRealization(
        CGDIBitmapRealization *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_REALIZATION_INFO *a3)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  CGDIBitmapRealization *result; // rax
  __int64 v10; // [rsp+28h] [rbp-30h]

  *((_QWORD *)this + 2) = &CGDIBitmapRealization::`vbtable'{for `CDxHandleBitmapRealization'};
  *((_QWORD *)this + 41) = &CGDIBitmapRealization::`vbtable'{for `CDeviceResource'};
  *((_QWORD *)this + 46) = &CGDIBitmapRealization::`vbtable'{for `ISwapChainRealization'};
  *((_QWORD *)this + 51) = &CGDISectionBitmapRealization::`vbtable'{for `IGDIBitmapRealization'};
  *((_QWORD *)this + 60) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
  *((_QWORD *)this + 63) = &CGDISectionBitmapRealization::`vbtable'{for `IBitmapRealization'};
  *((_QWORD *)this + 66) = &CDxHandleBitmapRealization::`vbtable'{for `IDeviceResource'};
  LOBYTE(v10) = 0;
  CDxHandleBitmapRealization::CDxHandleBitmapRealization(
    (__int64)this,
    0LL,
    *(_QWORD *)&g_luidZero,
    (__int64)a2,
    (__int64)a3,
    v10,
    0,
    0LL,
    0);
  *(_QWORD *)this = &CGDIBitmapRealization::`vftable'{for `CMILCOMBaseT<IUnknown>'};
  *((_QWORD *)this + 40) = &CGDIBitmapRealization::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 45) = &CDxHandleBitmapRealization::`vftable'{for `ISwapChainRealization'};
  *((_QWORD *)this + 50) = &CGDIBitmapRealization::`vftable'{for `IGDIBitmapRealization'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 4LL) + 16) = &CGDIBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 8LL) + 16) = &CGDIBitmapRealization::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 12LL) + 16) = &CGDIBitmapRealization::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 16LL) + 16) = &CGDIBitmapRealization::`vftable'{for `CBitmapRealization'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 20LL) + 16) = &CGDIBitmapRealization::`vftable'{for `IDeviceResource'};
  v4 = *(int *)(*((_QWORD *)this + 2) + 4LL);
  *(_DWORD *)((char *)this + v4 + 12) = v4 - 424;
  v5 = *(int *)(*((_QWORD *)this + 2) + 8LL);
  *(_DWORD *)((char *)this + v5 + 12) = v5 - 440;
  v6 = *(int *)(*((_QWORD *)this + 2) + 12LL);
  *(_DWORD *)((char *)this + v6 + 12) = v6 - 456;
  v7 = *(int *)(*((_QWORD *)this + 2) + 16LL);
  *(_DWORD *)((char *)this + v7 + 12) = v7 - 480;
  v8 = *(int *)(*((_QWORD *)this + 2) + 20LL);
  result = this;
  *(_DWORD *)((char *)this + v8 + 12) = v8 - 504;
  *((_OWORD *)this + 26) = 0LL;
  return result;
}
