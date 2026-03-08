/*
 * XREFs of ??0CD2DResource@@IEAA@PEAVCD2DResourceManager@@_N@Z @ 0x18003D1B0
 * Callers:
 *     ??0CD2DEffect@@IEAA@PEAVCD2DResourceManager@@@Z @ 0x180016A38 (--0CD2DEffect@@IEAA@PEAVCD2DResourceManager@@@Z.c)
 *     ??0CD2DBitmap@@IEAA@PEAVCD2DResourceManager@@_NPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@I@Z @ 0x18003CE8C (--0CD2DBitmap@@IEAA@PEAVCD2DResourceManager@@_NPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AE.c)
 *     ??0CD2DBrush@@IEAA@PEAVCD2DResourceManager@@PEAUID2D1Brush@@@Z @ 0x1800F0844 (--0CD2DBrush@@IEAA@PEAVCD2DResourceManager@@PEAUID2D1Brush@@@Z.c)
 *     ??0CD2DInk@@IEAA@PEAVCD2DResourceManager@@@Z @ 0x180299364 (--0CD2DInk@@IEAA@PEAVCD2DResourceManager@@@Z.c)
 *     ??0CD2DGenericInk@@AEAA@PEAVCD2DResourceManager@@PEAUIDCompositionDirectInkWetStrokePartner@@@Z @ 0x180299668 (--0CD2DGenericInk@@AEAA@PEAVCD2DResourceManager@@PEAUIDCompositionDirectInkWetStrokePartner@@@Z.c)
 * Callees:
 *     <none>
 */

CD2DResource *__fastcall CD2DResource::CD2DResource(CD2DResource *this, struct CD2DResourceManager *a2, char a3)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  CD2DResource *result; // rax

  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CD2DResource::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 4LL) + 16) = &CD2DResource::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 8LL) + 16) = &CD2DResource::`vftable'{for `IDeviceResource'};
  v4 = *(int *)(*((_QWORD *)this + 2) + 4LL);
  *(_DWORD *)((char *)this + v4 + 12) = v4 - 72;
  v5 = *(int *)(*((_QWORD *)this + 2) + 8LL);
  result = this;
  *(_DWORD *)((char *)this + v5 + 12) = v5 - 88;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 3) = a2;
  *((_BYTE *)this + 32) = 0;
  *((_BYTE *)this + 33) = a3;
  *((_BYTE *)this + 34) = 0;
  return result;
}
