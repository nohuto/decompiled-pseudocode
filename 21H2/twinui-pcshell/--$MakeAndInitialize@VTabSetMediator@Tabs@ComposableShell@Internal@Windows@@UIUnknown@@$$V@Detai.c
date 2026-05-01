/*
 * XREFs of ??$MakeAndInitialize@VTabSetMediator@Tabs@ComposableShell@Internal@Windows@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180309A30
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VTabSetMediator@Tabs@ComposableShell@Internal@Windows@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18030A980 (-CreateInstance@-$SimpleClassFactory@VTabSetMediator@Tabs@ComposableShell@Internal@Windows@@$0A@.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180043060 (InlineIsEqualGUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UIAppStateChangeNotification@6789@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802B75B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_1802B75B0.c)
 *     ??0TabSetMediator@Tabs@ComposableShell@Internal@Windows@@QEAA@XZ @ 0x18030A370 (--0TabSetMediator@Tabs@ComposableShell@Internal@Windows@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VCImmersiveShellComponentWithGITSite@@@Details@23@UIWeakReferenceSource@@UITabSetMediator@Tabs@ComposableShell@Internal@Windows@@UIWindowSnappingEvents@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18030A7F0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00U-$Impleme_ea_18030A7F0.c)
 *     ?RuntimeClassInitialize@TabSetMediator@Tabs@ComposableShell@Internal@Windows@@QEAAJXZ @ 0x18030C238 (-RuntimeClassInitialize@TabSetMediator@Tabs@ComposableShell@Internal@Windows@@QEAAJXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::ComposableShell::Tabs::TabSetMediator,IUnknown,>(
        Windows::Internal::ComposableShell::Tabs::TabSetMediator **a1)
{
  Windows::Internal::ComposableShell::Tabs::TabSetMediator *v2; // rax
  int CanCastTo; // ebx
  Windows::Internal::ComposableShell::Tabs::TabSetMediator *v4; // rdi
  _DWORD *v5; // rcx
  __int64 v6; // r9

  *a1 = 0LL;
  v2 = (Windows::Internal::ComposableShell::Tabs::TabSetMediator *)operator new(
                                                                     0x168uLL,
                                                                     (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = (Windows::Internal::ComposableShell::Tabs::TabSetMediator *)Windows::Internal::ComposableShell::Tabs::TabSetMediator::TabSetMediator(v2);
    CanCastTo = Windows::Internal::ComposableShell::Tabs::TabSetMediator::RuntimeClassInitialize(v4);
    if ( CanCastTo >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_00000000_0000_0000_c000_000000000046, &GUID_00000000_0000_0000_c000_000000000046)
        || InlineIsEqualGUID(v5, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
      {
        *a1 = v4;
        (*(void (__fastcall **)(Windows::Internal::ComposableShell::Tabs::TabSetMediator *))(*(_QWORD *)v4 + 8LL))(v4);
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IWeakReferenceSource,Windows::Internal::ComposableShell::Tabs::ITabSetMediator,IWindowSnappingEvents,Microsoft::WRL::FtmBase>::CanCastTo(
                      (char *)v4 + 8,
                      v6,
                      a1);
        if ( CanCastTo >= 0 )
          (*(void (__fastcall **)(Windows::Internal::ComposableShell::Tabs::TabSetMediator *))(*(_QWORD *)*a1 + 8LL))(*a1);
      }
    }
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,Windows::Internal::FamilySafety::AppLimits::IFamilyAppUsageManager,Windows::Internal::FamilySafety::AppLimits::IAppStateChangeNotification,Microsoft::WRL::FtmBase>::Release((__int64)v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
