/*
 * XREFs of ??$MakeAndInitialize@VMultitaskingViewVisibilityService@@UIMultitaskingViewVisibilityService@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIMultitaskingViewVisibilityService@@@Z @ 0x1803F1810
 * Callers:
 *     ?MultitaskingViewVisibilityService_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1803F1DB8 (-MultitaskingViewVisibilityService_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180043060 (InlineIsEqualGUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??0MultitaskingViewVisibilityService@@QEAA@XZ @ 0x1803F1954 (--0MultitaskingViewVisibilityService@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@UIMultitaskingViewVisibilityService@@UIMultitaskingViewVisibilityServiceInternal@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1803F1C50 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@UIMultitaskingViewVisi.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingViewVisibilityService@@UIMultitaskingViewVisibilityServiceInternal@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1803F1ED0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMu_ea_1803F1ED0.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<MultitaskingViewVisibilityService,IMultitaskingViewVisibilityService,>(
        MultitaskingViewVisibilityService **a1)
{
  MultitaskingViewVisibilityService *v2; // rax
  int CanCastTo; // edi
  MultitaskingViewVisibilityService *v4; // rax
  MultitaskingViewVisibilityService *v5; // rbx
  __int64 v6; // rcx

  *a1 = 0LL;
  v2 = (MultitaskingViewVisibilityService *)operator new(0x80uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = MultitaskingViewVisibilityService::MultitaskingViewVisibilityService(v2);
    *a1 = 0LL;
    v5 = v4;
    if ( InlineIsEqualGUID(&GUID_ac11cda3_1601_4ad7_a40e_fe2ced187307, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *a1 = v5;
      (*(void (__fastcall **)(MultitaskingViewVisibilityService *))(*(_QWORD *)v5 + 8LL))(v5);
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,IMultitaskingViewVisibilityService,IMultitaskingViewVisibilityServiceInternal,Microsoft::WRL::FtmBase>::CanCastTo(
                    v5,
                    v6,
                    a1);
      if ( CanCastTo >= 0 )
        (*(void (__fastcall **)(MultitaskingViewVisibilityService *))(*(_QWORD *)*a1 + 8LL))(*a1);
    }
    if ( v5 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMultitaskingViewVisibilityService,IMultitaskingViewVisibilityServiceInternal,Microsoft::WRL::FtmBase>::Release(v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
