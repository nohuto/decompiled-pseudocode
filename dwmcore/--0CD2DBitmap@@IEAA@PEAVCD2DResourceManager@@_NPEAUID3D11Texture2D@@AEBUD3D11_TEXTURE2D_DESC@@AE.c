__int64 __fastcall CD2DBitmap::CD2DBitmap(
        __int64 a1,
        struct CD2DResourceManager *a2,
        bool a3,
        __int64 a4,
        __int64 a5,
        _OWORD *a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  __int64 v10; // rdi
  __int128 v13; // xmm1
  __int64 result; // rax

  v10 = a1 + 16;
  if ( a10 )
  {
    *(_QWORD *)v10 = &CD2DBitmap::`vbtable'{for `CD2DResource'};
    *(_QWORD *)(a1 + 88) = &CD2DBitmap::`vbtable'{for `ID2DBitmap'};
    *(_QWORD *)(a1 + 104) = &CD2DBitmap::`vbtable'{for `ID2DBitmapCacheSource'};
    *(_QWORD *)(a1 + 280) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
    *(_QWORD *)(a1 + 304) = &CD2DBitmap::`vbtable'{for `IPixelFormat'};
    *(_QWORD *)(a1 + 328) = &CSecondaryD2DBitmap::`vbtable'{for `IDeviceSurface'};
    *(_QWORD *)(a1 + 352) = &CSecondaryD2DBitmap::`vbtable'{for `IDeviceTexture'};
  }
  CD2DResource::CD2DResource((CD2DResource *)a1, a2, a3);
  *(_QWORD *)(a1 + 96) = &ID2DBitmapCacheSource::`vftable';
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 104) + 4LL) + a1 + 104) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 104) + 8LL) + a1 + 104) = &CProcessAttributionObserver::`vftable';
  *(_QWORD *)a1 = &CD2DBitmap::`vftable'{for `CD2DResource'};
  *(_QWORD *)(a1 + 80) = &CD2DBitmap::`vftable'{for `ID2DBitmap'};
  *(_QWORD *)(a1 + 96) = &CD2DBitmap::`vftable'{for `ID2DBitmapCacheSource'};
  *(_QWORD *)(a1 + 112) = &CSecondaryD2DBitmap::`vftable'{for `IBitmapUnlock'};
  *(_QWORD *)(*(int *)(*(_QWORD *)v10 + 4LL) + a1 + 16) = &CD2DBitmap::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)v10 + 8LL) + a1 + 16) = &CD2DBitmap::`vftable'{for `IDeviceResource'};
  *(_QWORD *)(*(int *)(*(_QWORD *)v10 + 12LL) + a1 + 16) = &CD2DBitmap::`vftable'{for `IPixelFormat'};
  *(_QWORD *)(*(int *)(*(_QWORD *)v10 + 16LL) + a1 + 16) = &CD2DBitmap::`vftable'{for `IDeviceSurface'};
  *(_QWORD *)(*(int *)(*(_QWORD *)v10 + 20LL) + a1 + 16) = &CD2DBitmap::`vftable'{for `IDeviceTexture'};
  *(_DWORD *)(*(int *)(*(_QWORD *)v10 + 4LL) + a1 + 12) = *(_DWORD *)(*(_QWORD *)v10 + 4LL) - 240;
  *(_DWORD *)(*(int *)(*(_QWORD *)v10 + 8LL) + a1 + 12) = *(_DWORD *)(*(_QWORD *)v10 + 8LL) - 256;
  *(_DWORD *)(*(int *)(*(_QWORD *)v10 + 12LL) + a1 + 12) = *(_DWORD *)(*(_QWORD *)v10 + 12LL) - 280;
  *(_DWORD *)(*(int *)(*(_QWORD *)v10 + 16LL) + a1 + 12) = *(_DWORD *)(*(_QWORD *)v10 + 16LL) - 304;
  *(_DWORD *)(*(int *)(*(_QWORD *)v10 + 20LL) + a1 + 12) = *(_DWORD *)(*(_QWORD *)v10 + 20LL) - 328;
  *(_QWORD *)(a1 + 120) = a4;
  if ( a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_OWORD *)(a1 + 152) = *(_OWORD *)a5;
  *(_OWORD *)(a1 + 168) = *(_OWORD *)(a5 + 16);
  *(_QWORD *)(a1 + 184) = *(_QWORD *)(a5 + 32);
  *(_DWORD *)(a1 + 192) = *(_DWORD *)(a5 + 40);
  *(_OWORD *)(a1 + 200) = *a6;
  v13 = a6[1];
  *(_WORD *)(a1 + 244) = 0;
  *(_DWORD *)(a1 + 232) = a7;
  *(_DWORD *)(a1 + 236) = a8;
  *(_DWORD *)(a1 + 240) = a9;
  result = a1;
  *(_OWORD *)(a1 + 216) = v13;
  return result;
}
