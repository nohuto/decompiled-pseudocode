CSectionBitmapRealization *__fastcall CSectionBitmapRealization::CSectionBitmapRealization(
        CSectionBitmapRealization *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_REALIZATION_INFO *a3,
        const struct CSM_SYSMEM_SECTION_INFO *a4)
{
  __int128 v6; // xmm0
  __int64 v7; // xmm1_8
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  CSectionBitmapRealization *result; // rax

  CBitmapRealization::CBitmapRealization((__int64)this, 0, *(_QWORD *)&g_luidZero, a2, (__int64)a3, 0LL, 0);
  v6 = *(_OWORD *)a4;
  v7 = *((_QWORD *)a4 + 2);
  *((_QWORD *)this + 40) = &ID2DBitmapCacheSource::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 41) + 4LL) + 328) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 41) + 8LL) + 328) = &CProcessAttributionObserver::`vftable';
  *(_QWORD *)this = &CSectionBitmapRealization::`vftable'{for `CMILCOMBaseT<IUnknown>'};
  *((_QWORD *)this + 40) = &CGDISectionBitmapRealization::`vftable'{for `ID2DBitmapCacheSource'};
  *((_QWORD *)this + 42) = &CGDISectionBitmapRealization::`vftable'{for `IPixelColor'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 4LL) + 16) = &CSectionBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 8LL) + 16) = &CSectionBitmapRealization::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 12LL) + 16) = &CSectionBitmapRealization::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 16LL) + 16) = &CSectionBitmapRealization::`vftable'{for `CBitmapRealization'};
  v8 = *(int *)(*((_QWORD *)this + 2) + 4LL);
  *(_DWORD *)((char *)this + v8 + 12) = v8 - 384;
  v9 = *(int *)(*((_QWORD *)this + 2) + 8LL);
  *(_DWORD *)((char *)this + v9 + 12) = v9 - 400;
  v10 = *(int *)(*((_QWORD *)this + 2) + 12LL);
  *(_DWORD *)((char *)this + v10 + 12) = v10 - 416;
  v11 = *(int *)(*((_QWORD *)this + 2) + 16LL);
  result = this;
  *(_DWORD *)((char *)this + v11 + 12) = v11 - 440;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_OWORD *)this + 22) = v6;
  *((_BYTE *)this + 384) = 1;
  *((_QWORD *)this + 46) = v7;
  return result;
}
