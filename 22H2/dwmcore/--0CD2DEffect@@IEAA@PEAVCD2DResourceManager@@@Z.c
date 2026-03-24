/*
 * XREFs of ??0CD2DEffect@@IEAA@PEAVCD2DResourceManager@@@Z @ 0x18024D184
 * Callers:
 *     ?Create@CD2DEffect@@SAJPEAVCD2DResourceManager@@PEAUID2D1Effect@@PEAPEAV1@@Z @ 0x18024D2DC (-Create@CD2DEffect@@SAJPEAVCD2DResourceManager@@PEAUID2D1Effect@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CD2DResource@@IEAA@PEAVCD2DResourceManager@@_N@Z @ 0x18003A0D0 (--0CD2DResource@@IEAA@PEAVCD2DResourceManager@@_N@Z.c)
 */

CD2DEffect *__fastcall CD2DEffect::CD2DEffect(CD2DEffect *this, struct CD2DResourceManager *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  CD2DEffect *result; // rax

  *((_QWORD *)this + 2) = &CD2DGenericInk::`vbtable'{for `CD2DResource'};
  *((_QWORD *)this + 15) = &CInk::`vbtable'{for `IContent'};
  CD2DResource::CD2DResource(this, a2, 0);
  v3 = *((_QWORD *)this + 2);
  *(_QWORD *)this = &CD2DEffect::`vftable';
  *(_QWORD *)((char *)this + *(int *)(v3 + 4) + 16) = &CD2DPrimitiveProperties::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 8LL) + 16) = &CD2DEffect::`vftable'{for `IDeviceResource'};
  v4 = *(int *)(*((_QWORD *)this + 2) + 4LL);
  *(_DWORD *)((char *)this + v4 + 12) = v4 - 80;
  v5 = *(int *)(*((_QWORD *)this + 2) + 8LL);
  result = this;
  *(_DWORD *)((char *)this + v5 + 12) = v5 - 96;
  *((_QWORD *)this + 10) = 0LL;
  return result;
}
