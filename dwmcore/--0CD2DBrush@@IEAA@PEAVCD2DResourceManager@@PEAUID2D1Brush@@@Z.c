/*
 * XREFs of ??0CD2DBrush@@IEAA@PEAVCD2DResourceManager@@PEAUID2D1Brush@@@Z @ 0x1800F0844
 * Callers:
 *     ?Create@CD2DBrush@@SAJPEAVCD2DResourceManager@@PEAUID2D1Brush@@PEAPEAV1@@Z @ 0x1800F0790 (-Create@CD2DBrush@@SAJPEAVCD2DResourceManager@@PEAUID2D1Brush@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CD2DResource@@IEAA@PEAVCD2DResourceManager@@_N@Z @ 0x18003D1B0 (--0CD2DResource@@IEAA@PEAVCD2DResourceManager@@_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

CD2DBrush *__fastcall CD2DBrush::CD2DBrush(CD2DBrush *this, struct CD2DResourceManager *a2, struct ID2D1Brush *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rcx

  *((_QWORD *)this + 2) = &CD2DBrush::`vbtable'{for `CD2DResource'};
  *((_QWORD *)this + 15) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
  CD2DResource::CD2DResource(this, a2, 0);
  *(_QWORD *)this = &CD2DBrush::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 4LL) + 16) = &CD2DEffect::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 8LL) + 16) = &CD2DBrush::`vftable'{for `IDeviceResource'};
  v5 = *(int *)(*((_QWORD *)this + 2) + 4LL);
  *(_DWORD *)((char *)this + v5 + 12) = v5 - 80;
  v6 = *(int *)(*((_QWORD *)this + 2) + 8LL);
  *(_DWORD *)((char *)this + v6 + 12) = v6 - 96;
  *((_QWORD *)this + 10) = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct ID2D1Brush *))(*(_QWORD *)a3 + 8LL))(a3);
  return this;
}
