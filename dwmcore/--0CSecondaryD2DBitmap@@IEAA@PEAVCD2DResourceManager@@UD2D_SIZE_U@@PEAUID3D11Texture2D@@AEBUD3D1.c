/*
 * XREFs of ??0CSecondaryD2DBitmap@@IEAA@PEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@@Z @ 0x1800ED188
 * Callers:
 *     ?Create@CSecondaryD2DBitmap@@SAJPEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@PEAPEAV1@@Z @ 0x1800ED060 (-Create@CSecondaryD2DBitmap@@SAJPEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@AEBUD.c)
 * Callees:
 *     ??0CD2DBitmap@@IEAA@PEAVCD2DResourceManager@@_NPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@I@Z @ 0x18003CE8C (--0CD2DBitmap@@IEAA@PEAVCD2DResourceManager@@_NPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AE.c)
 */

__int64 __fastcall CSecondaryD2DBitmap::CSecondaryD2DBitmap(
        __int64 a1,
        struct CD2DResourceManager *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _OWORD *a6,
        int a7,
        int a8)
{
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 result; // rax

  *(_QWORD *)(a1 + 16) = &CSecondaryD2DBitmap::`vbtable'{for `CD2DResource'};
  *(_QWORD *)(a1 + 88) = &CSecondaryD2DBitmap::`vbtable'{for `ID2DBitmap'};
  *(_QWORD *)(a1 + 104) = &CSecondaryD2DBitmap::`vbtable'{for `ID2DBitmapCacheSource'};
  *(_QWORD *)(a1 + 368) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
  *(_QWORD *)(a1 + 392) = &CD2DBitmap::`vbtable'{for `IPixelFormat'};
  *(_QWORD *)(a1 + 416) = &CSecondaryD2DBitmap::`vbtable'{for `IDeviceSurface'};
  *(_QWORD *)(a1 + 440) = &CSecondaryD2DBitmap::`vbtable'{for `IDeviceTexture'};
  CD2DBitmap::CD2DBitmap(a1, a2, 0, a4, a5, a6, a7, a8, 0, 0);
  *(_DWORD *)(a1 + 248) = 0;
  *(_DWORD *)(a1 + 252) = 0;
  *(_QWORD *)(a1 + 256) = a3;
  *(_QWORD *)(a1 + 264) = a1 + 272;
  *(_DWORD *)(a1 + 272) = 0;
  *(_QWORD *)a1 = &CSecondaryD2DBitmap::`vftable'{for `CD2DResource'};
  *(_QWORD *)(a1 + 80) = &CD2DBitmap::`vftable'{for `ID2DBitmap'};
  *(_QWORD *)(a1 + 96) = &CSecondaryD2DBitmap::`vftable'{for `ID2DBitmapCacheSource'};
  *(_QWORD *)(a1 + 112) = &CSecondaryD2DBitmap::`vftable'{for `IBitmapUnlock'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 16) + 4LL) + a1 + 16) = &CSecondaryD2DBitmap::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 16) + 8LL) + a1 + 16) = &CSecondaryD2DBitmap::`vftable'{for `IDeviceResource'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 16) + 12LL) + a1 + 16) = &CSecondaryD2DBitmap::`vftable'{for `IPixelFormat'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 16) + 16LL) + a1 + 16) = &CSecondaryD2DBitmap::`vftable'{for `IDeviceSurface'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 16) + 20LL) + a1 + 16) = &CSecondaryD2DBitmap::`vftable'{for `IDeviceTexture'};
  v9 = *(int *)(*(_QWORD *)(a1 + 16) + 4LL);
  *(_DWORD *)(v9 + a1 + 12) = v9 - 328;
  v10 = *(int *)(*(_QWORD *)(a1 + 16) + 8LL);
  *(_DWORD *)(v10 + a1 + 12) = v10 - 344;
  v11 = *(int *)(*(_QWORD *)(a1 + 16) + 12LL);
  *(_DWORD *)(v11 + a1 + 12) = v11 - 368;
  v12 = *(int *)(*(_QWORD *)(a1 + 16) + 16LL);
  *(_DWORD *)(v12 + a1 + 12) = v12 - 392;
  v13 = *(int *)(*(_QWORD *)(a1 + 16) + 20LL);
  result = a1;
  *(_DWORD *)(v13 + a1 + 12) = v13 - 416;
  return result;
}
