/*
 * XREFs of ??0CScratchRenderTargetBitmap@@IEAA@XZ @ 0x18003BE3C
 * Callers:
 *     ?Create@CScratchRenderTargetBitmap@@KAJPEAVIDeviceTarget@@PEAPEAV1@@Z @ 0x18003BDC0 (-Create@CScratchRenderTargetBitmap@@KAJPEAVIDeviceTarget@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CRenderTargetBitmap@@IEAA@_N@Z @ 0x18003C200 (--0CRenderTargetBitmap@@IEAA@_N@Z.c)
 */

CScratchRenderTargetBitmap *__fastcall CScratchRenderTargetBitmap::CScratchRenderTargetBitmap(
        CScratchRenderTargetBitmap *this)
{
  __int64 v1; // r11
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  CScratchRenderTargetBitmap *result; // rax

  *((_QWORD *)this + 2) = &CScratchRenderTargetBitmap::`vbtable'{for `CRenderTargetBitmap'};
  *((_QWORD *)this + 11) = &CGDISectionBitmapRealization::`vbtable'{for `ID2DBitmapCacheSource'};
  *((_QWORD *)this + 16) = &CScratchRenderTargetBitmap::`vbtable'{for `IRenderTargetBitmap'};
  *((_QWORD *)this + 20) = &CScratchRenderTargetBitmap::`vbtable'{for `IScratchBitmap'};
  *((_QWORD *)this + 29) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
  *((_QWORD *)this + 32) = &CD2DBitmap::`vbtable'{for `IPixelFormat'};
  *((_QWORD *)this + 35) = &CRenderTargetBitmap::`vbtable'{for `IBitmapRealization'};
  CRenderTargetBitmap::CRenderTargetBitmap(this, 1);
  *(_QWORD *)v1 = &CScratchRenderTargetBitmap::`vftable'{for `CMILCOMBaseT<IUnknown>'};
  *(_QWORD *)(v1 + 80) = &CScratchRenderTargetBitmap::`vftable';
  *(_QWORD *)(v1 + 120) = &CScratchRenderTargetBitmap::`vftable'{for `IRenderTargetBitmap'};
  *(_QWORD *)(v1 + 152) = &CScratchRenderTargetBitmap::`vftable'{for `IScratchBitmap'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v1 + 16) + 4LL) + v1 + 16) = &CScratchRenderTargetBitmap::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v1 + 16) + 8LL) + v1 + 16) = &CScratchRenderTargetBitmap::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v1 + 16) + 12LL) + v1 + 16) = &CScratchRenderTargetBitmap::`vftable'{for `IDeviceResource'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v1 + 16) + 16LL) + v1 + 16) = &CScratchRenderTargetBitmap::`vftable'{for `IPixelFormat'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v1 + 16) + 20LL) + v1 + 16) = &CScratchRenderTargetBitmap::`vftable'{for `IBitmapRealization'};
  v2 = *(int *)(*(_QWORD *)(v1 + 16) + 4LL);
  *(_DWORD *)(v2 + v1 + 12) = v2 - 176;
  v3 = *(int *)(*(_QWORD *)(v1 + 16) + 8LL);
  *(_DWORD *)(v3 + v1 + 12) = v3 - 192;
  v4 = *(int *)(*(_QWORD *)(v1 + 16) + 12LL);
  *(_DWORD *)(v4 + v1 + 12) = v4 - 208;
  v5 = *(int *)(*(_QWORD *)(v1 + 16) + 16LL);
  *(_DWORD *)(v5 + v1 + 12) = v5 - 232;
  v6 = *(int *)(*(_QWORD *)(v1 + 16) + 20LL);
  result = (CScratchRenderTargetBitmap *)v1;
  *(_DWORD *)(v6 + v1 + 12) = v6 - 256;
  *(_QWORD *)(v1 + 168) = 0LL;
  *(_WORD *)(v1 + 176) = 257;
  return result;
}
