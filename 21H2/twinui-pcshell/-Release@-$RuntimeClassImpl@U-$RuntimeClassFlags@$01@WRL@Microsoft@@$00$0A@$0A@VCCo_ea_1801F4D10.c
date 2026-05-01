/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801F4D10
 * Callers:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@WCA@EAAKXZ @ 0x180162EE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCo_ea_180162EE0.c)
 *     ?Attach@?$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@QEAAXPEAVCCommonApplicationViewPosition@@@Z @ 0x1801F44FC (-Attach@-$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@QEAAXPEAVCCommonApplicationVie.c)
 *     ?InternalRelease@?$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ @ 0x1801F4870 (-InternalRelease@-$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180095340 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::Release(
        __int64 a1,
        volatile int *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r10

  v2 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(a1 + 68), a2);
  if ( !v2 )
  {
    if ( v3 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 32LL))(v3, v2 + 1);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v2;
}
