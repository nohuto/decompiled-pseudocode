/*
 * XREFs of ?NotifyInvalidResource@CCompositionSurfaceInfo@@UEAAXPEBVIDeviceResource@@@Z @ 0x180269C10
 * Callers:
 *     ?NotifyInvalidResource@CGlobalCompositionSurfaceInfo@@UEAAXPEBVIDeviceResource@@@Z @ 0x180257F60 (-NotifyInvalidResource@CGlobalCompositionSurfaceInfo@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CCompositionSurfaceInfo::NotifyInvalidResource(
        CCompositionSurfaceInfo *this,
        const struct IDeviceResource *a2)
{
  __int64 i; // rbx
  __int64 v5; // rcx

  for ( i = (__int64)(*((_QWORD *)this + 7) - *((_QWORD *)this + 6)) >> 3; i; --i )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * i - 8);
    (*(void (__fastcall **)(__int64, const struct IDeviceResource *))(*(_QWORD *)v5 + 32LL))(v5, a2);
  }
}
