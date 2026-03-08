/*
 * XREFs of ??0CD2DInk@@IEAA@PEAVCD2DResourceManager@@@Z @ 0x180299364
 * Callers:
 *     ?Create@CD2DInk@@SAJPEAVCD2DResourceManager@@PEAUID2D1Ink@@PEAUID2D1InkStyle@@PEAPEAV1@@Z @ 0x1802994EC (-Create@CD2DInk@@SAJPEAVCD2DResourceManager@@PEAUID2D1Ink@@PEAUID2D1InkStyle@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CD2DResource@@IEAA@PEAVCD2DResourceManager@@_N@Z @ 0x18003D1B0 (--0CD2DResource@@IEAA@PEAVCD2DResourceManager@@_N@Z.c)
 */

CD2DInk *__fastcall CD2DInk::CD2DInk(CD2DInk *this, struct CD2DResourceManager *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  CD2DInk *result; // rax

  *((_QWORD *)this + 2) = &CD2DInk::`vbtable'{for `CD2DResource'};
  *((_QWORD *)this + 16) = &CInk::`vbtable'{for `IContent'};
  CD2DResource::CD2DResource(this, a2, 0);
  *(_QWORD *)this = &CD2DInk::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 4LL) + 16) = &CD2DInk::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 8LL) + 16) = &CD2DInk::`vftable'{for `IDeviceResource'};
  v3 = *(int *)(*((_QWORD *)this + 2) + 4LL);
  *(_DWORD *)((char *)this + v3 + 12) = v3 - 88;
  v4 = *(int *)(*((_QWORD *)this + 2) + 8LL);
  result = this;
  *(_DWORD *)((char *)this + v4 + 12) = v4 - 104;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  return result;
}
