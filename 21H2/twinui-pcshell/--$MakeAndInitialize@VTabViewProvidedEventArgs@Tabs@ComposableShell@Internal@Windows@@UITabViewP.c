/*
 * XREFs of ??$MakeAndInitialize@VTabViewProvidedEventArgs@Tabs@ComposableShell@Internal@Windows@@UITabViewProvidedEventArgs@2345@AEAUShellTabId@2345@AEAH@Details@WRL@Microsoft@@YAJPEAPEAUITabViewProvidedEventArgs@Tabs@ComposableShell@Internal@Windows@@AEAUShellTabId@4567@AEAH@Z @ 0x1802F92B4
 * Callers:
 *     ?RaiseTabViewProvided@TabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UEAAJUShellTabId@2345@H@Z @ 0x1802FA450 (-RaiseTabViewProvided@TabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UEAAJUShellT.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180043060 (InlineIsEqualGUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801B8B24 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_1801B8B24.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802C10D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVie_ea_1802C10D0.c)
 *     ??0TabViewProvidedEventArgs@Tabs@ComposableShell@Internal@Windows@@QEAA@XZ @ 0x1802F97B0 (--0TabViewProvidedEventArgs@Tabs@ComposableShell@Internal@Windows@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::ComposableShell::Tabs::TabViewProvidedEventArgs,Windows::Internal::ComposableShell::Tabs::ITabViewProvidedEventArgs,Windows::Internal::ComposableShell::Tabs::ShellTabId &,int &>(
        __int64 *a1,
        __int128 *a2,
        _DWORD *a3)
{
  Windows::Internal::ComposableShell::Tabs::TabViewProvidedEventArgs *v6; // rax
  int CanCastTo; // ebx
  __int64 v8; // rax
  __int128 v9; // xmm0
  __int64 v10; // rdi
  _DWORD *v11; // rcx
  _DWORD *v12; // rcx
  _DWORD *v13; // r9
  _DWORD *v14; // rdx

  *a1 = 0LL;
  v6 = (Windows::Internal::ComposableShell::Tabs::TabViewProvidedEventArgs *)operator new(
                                                                               0x58uLL,
                                                                               (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v8 = Windows::Internal::ComposableShell::Tabs::TabViewProvidedEventArgs::TabViewProvidedEventArgs(v6);
    v9 = *a2;
    v10 = v8;
    *(_DWORD *)(v8 + 80) = *a3;
    *(_OWORD *)(v8 + 64) = v9;
    *a1 = 0LL;
    if ( InlineIsEqualGUID(&GUID_f35523bf_7020_5a86_8a00_d24d7a013b36, &GUID_00000000_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(v11, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    {
      *a1 = v10;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      CanCastTo = 0;
      goto LABEL_10;
    }
    if ( InlineIsEqualGUID(v12, v13) )
    {
      *a1 = v10;
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Microsoft::WRL::FtmBase>::CanCastTo(
                    v10 + 8,
                    v14);
      if ( CanCastTo < 0 )
      {
LABEL_10:
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs,Microsoft::WRL::FtmBase>::Release(v10);
        return (unsigned int)CanCastTo;
      }
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*a1 + 8LL))(*a1);
    goto LABEL_10;
  }
  return (unsigned int)-2147024882;
}
