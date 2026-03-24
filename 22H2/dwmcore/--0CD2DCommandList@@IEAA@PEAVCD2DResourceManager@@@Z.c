/*
 * XREFs of ??0CD2DCommandList@@IEAA@PEAVCD2DResourceManager@@@Z @ 0x18024AFF4
 * Callers:
 *     ?Create@CD2DCommandList@@SAJPEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorCommandList@@PEAPEAV1@@Z @ 0x18024B230 (-Create@CD2DCommandList@@SAJPEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorCommandList@@PEAP.c)
 * Callees:
 *     ??0CD2DResource@@IEAA@PEAVCD2DResourceManager@@_N@Z @ 0x18003A0D0 (--0CD2DResource@@IEAA@PEAVCD2DResourceManager@@_N@Z.c)
 */

CD2DCommandList *__fastcall CD2DCommandList::CD2DCommandList(CD2DCommandList *this, struct CD2DResourceManager *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx

  *((_QWORD *)this + 2) = &CD2DCommandList::`vbtable'{for `CD2DResource'};
  *((_QWORD *)this + 17) = &CInk::`vbtable'{for `IContent'};
  CD2DResource::CD2DResource(this, a2, 0);
  v3 = *((_QWORD *)this + 2);
  *(_QWORD *)this = &CD2DCommandList::`vftable';
  *(_QWORD *)((char *)this + *(int *)(v3 + 4) + 16) = &CCompositionGlyphRun::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 8LL) + 16) = &CD2DCommandList::`vftable'{for `IDeviceResource'};
  v4 = *(int *)(*((_QWORD *)this + 2) + 4LL);
  *(_DWORD *)((char *)this + v4 + 12) = v4 - 96;
  v5 = *(int *)(*((_QWORD *)this + 2) + 8LL);
  *(_DWORD *)((char *)this + v5 + 12) = v5 - 112;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 24) = 0;
  return this;
}
