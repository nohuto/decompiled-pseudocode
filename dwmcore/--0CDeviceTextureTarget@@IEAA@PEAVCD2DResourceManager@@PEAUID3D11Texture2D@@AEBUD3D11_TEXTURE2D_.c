__int64 __fastcall CDeviceTextureTarget::CDeviceTextureTarget(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        int a8,
        char a9,
        int a10)
{
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 result; // rax

  *(_QWORD *)(a1 + 16) = &CDeviceTextureTarget::`vbtable'{for `CD2DResource'};
  *(_QWORD *)(a1 + 88) = &CDeviceTextureTarget::`vbtable'{for `ID2DBitmap'};
  *(_QWORD *)(a1 + 104) = &CDeviceTextureTarget::`vbtable'{for `ID2DBitmapCacheSource'};
  *(_QWORD *)(a1 + 256) = &CDeviceTextureTarget::`vbtable'{for `IDeviceTextureTarget'};
  *(_QWORD *)(a1 + 320) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
  *(_QWORD *)(a1 + 344) = &CD2DBitmap::`vbtable'{for `IPixelFormat'};
  *(_QWORD *)(a1 + 368) = &CSecondaryD2DBitmap::`vbtable'{for `IDeviceSurface'};
  *(_QWORD *)(a1 + 392) = &CSecondaryD2DBitmap::`vbtable'{for `IDeviceTexture'};
  *(_QWORD *)(a1 + 416) = &CDeviceTextureTarget::`vbtable'{for `IDeviceTarget'};
  CD2DBitmap::CD2DBitmap(a1, a2, 0LL, a3, a4, a5, a6, a7, a10, 0);
  *(_QWORD *)a1 = &CDeviceTextureTarget::`vftable'{for `CD2DResource'};
  *(_QWORD *)(a1 + 80) = &CDeviceTextureTarget::`vftable'{for `ID2DBitmap'};
  *(_QWORD *)(a1 + 96) = &CDeviceTextureTarget::`vftable'{for `ID2DBitmapCacheSource'};
  *(_QWORD *)(a1 + 112) = &CDeviceTextureTarget::`vftable'{for `IBitmapUnlock'};
  *(_QWORD *)(a1 + 248) = &CDeviceTextureTarget::`vftable';
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 16) + 4LL) + a1 + 16) = &CDeviceTextureTarget::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 16) + 8LL) + a1 + 16) = &CDeviceTextureTarget::`vftable'{for `IDeviceResource'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 16) + 12LL) + a1 + 16) = &CDeviceTextureTarget::`vftable'{for `IPixelFormat'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 16) + 16LL) + a1 + 16) = &CDeviceTextureTarget::`vftable'{for `IDeviceSurface'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 16) + 20LL) + a1 + 16) = &CDeviceTextureTarget::`vftable'{for `IDeviceTexture'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 16) + 24LL) + a1 + 16) = &CDeviceTextureTarget::`vftable'{for `IDeviceTarget'};
  v11 = *(int *)(*(_QWORD *)(a1 + 16) + 4LL);
  *(_DWORD *)(v11 + a1 + 12) = v11 - 280;
  v12 = *(int *)(*(_QWORD *)(a1 + 16) + 8LL);
  *(_DWORD *)(v12 + a1 + 12) = v12 - 296;
  v13 = *(int *)(*(_QWORD *)(a1 + 16) + 12LL);
  *(_DWORD *)(v13 + a1 + 12) = v13 - 320;
  v14 = *(int *)(*(_QWORD *)(a1 + 16) + 16LL);
  *(_DWORD *)(v14 + a1 + 12) = v14 - 344;
  v15 = *(int *)(*(_QWORD *)(a1 + 16) + 20LL);
  *(_DWORD *)(v15 + a1 + 12) = v15 - 368;
  v16 = *(int *)(*(_QWORD *)(a1 + 16) + 24LL);
  *(_DWORD *)(v16 + a1 + 12) = v16 - 392;
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_DWORD *)(a1 + 272) = 0;
  *(_BYTE *)(a1 + 281) = a9;
  result = a1;
  *(_DWORD *)(a1 + 276) = a8;
  *(_BYTE *)(a1 + 280) = 0;
  return result;
}
