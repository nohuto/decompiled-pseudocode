/*
 * XREFs of ??0CD2DEffect@@IEAA@PEAVCD2DResourceManager@@@Z @ 0x180016A38
 * Callers:
 *     ?Create@CD2DEffect@@SAJPEAVCD2DResourceManager@@PEAUID2D1Effect@@PEAPEAV1@@Z @ 0x180016988 (-Create@CD2DEffect@@SAJPEAVCD2DResourceManager@@PEAUID2D1Effect@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CD2DResource@@IEAA@PEAVCD2DResourceManager@@_N@Z @ 0x18003D1B0 (--0CD2DResource@@IEAA@PEAVCD2DResourceManager@@_N@Z.c)
 */

CD2DEffect *__fastcall CD2DEffect::CD2DEffect(CD2DEffect *this, struct CD2DResourceManager *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  CD2DEffect *result; // rax

  *((_QWORD *)this + 2) = &CD2DBrush::`vbtable'{for `CD2DResource'};
  *((_QWORD *)this + 15) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
  CD2DResource::CD2DResource(this, a2, 0);
  *(_QWORD *)this = &CD2DEffect::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 4LL) + 16) = &CD2DEffect::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 8LL) + 16) = &CD2DEffect::`vftable'{for `IDeviceResource'};
  v3 = *(int *)(*((_QWORD *)this + 2) + 4LL);
  *(_DWORD *)((char *)this + v3 + 12) = v3 - 80;
  v4 = *(int *)(*((_QWORD *)this + 2) + 8LL);
  result = this;
  *(_DWORD *)((char *)this + v4 + 12) = v4 - 96;
  *((_QWORD *)this + 10) = 0LL;
  return result;
}
