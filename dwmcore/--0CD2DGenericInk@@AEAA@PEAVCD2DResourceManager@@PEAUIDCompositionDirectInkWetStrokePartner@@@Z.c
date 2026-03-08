/*
 * XREFs of ??0CD2DGenericInk@@AEAA@PEAVCD2DResourceManager@@PEAUIDCompositionDirectInkWetStrokePartner@@@Z @ 0x180299668
 * Callers:
 *     ?Create@CD2DGenericInk@@SAJPEAVCD2DResourceManager@@PEAUIDCompositionDirectInkWetStrokePartner@@PEAPEAV1@@Z @ 0x180299768 (-Create@CD2DGenericInk@@SAJPEAVCD2DResourceManager@@PEAUIDCompositionDirectInkWetStrokePartner@@.c)
 * Callees:
 *     ??0CD2DResource@@IEAA@PEAVCD2DResourceManager@@_N@Z @ 0x18003D1B0 (--0CD2DResource@@IEAA@PEAVCD2DResourceManager@@_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

CD2DGenericInk *__fastcall CD2DGenericInk::CD2DGenericInk(
        CD2DGenericInk *this,
        struct CD2DResourceManager *a2,
        struct IDCompositionDirectInkWetStrokePartner *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rcx

  *((_QWORD *)this + 2) = &CD2DGenericInk::`vbtable'{for `CD2DResource'};
  *((_QWORD *)this + 15) = &CInk::`vbtable'{for `IContent'};
  CD2DResource::CD2DResource(this, a2, 0);
  *(_QWORD *)this = &CD2DGenericInk::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 4LL) + 16) = &CD2DGenericInk::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 8LL) + 16) = &CD2DGenericInk::`vftable'{for `IDeviceResource'};
  v5 = *(int *)(*((_QWORD *)this + 2) + 4LL);
  *(_DWORD *)((char *)this + v5 + 12) = v5 - 80;
  v6 = *(int *)(*((_QWORD *)this + 2) + 8LL);
  *(_DWORD *)((char *)this + v6 + 12) = v6 - 96;
  *((_QWORD *)this + 10) = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct IDCompositionDirectInkWetStrokePartner *))(*(_QWORD *)a3 + 8LL))(a3);
  return this;
}
