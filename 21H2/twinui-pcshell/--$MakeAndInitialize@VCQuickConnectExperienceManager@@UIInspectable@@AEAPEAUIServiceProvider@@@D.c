/*
 * XREFs of ??$MakeAndInitialize@VCQuickConnectExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x18024AD5C
 * Callers:
 *     ?GetExperienceManager@QuickConnectExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x18024D030 (-GetExperienceManager@QuickConnectExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUII.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180043060 (InlineIsEqualGUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNotification@@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800B6C20 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILig_ea_1800B6C20.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??0CQuickConnectExperienceManager@@QEAA@XZ @ 0x18024B49C (--0CQuickConnectExperienceManager@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UILightDismissNotification@@UIWeakReferenceSource@@UIQuickConnectExperienceManager@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18024BD4C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UILightDismissNotificat.c)
 *     ?RuntimeClassInitialize@CQuickConnectExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18024E540 (-RuntimeClassInitialize@CQuickConnectExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CQuickConnectExperienceManager,IInspectable,IServiceProvider * &>(
        CQuickConnectExperienceManager **a1,
        struct IServiceProvider **a2)
{
  CQuickConnectExperienceManager *v4; // rax
  int CanCastTo; // edi
  CQuickConnectExperienceManager *v6; // rbx
  _DWORD *v7; // rcx
  _DWORD *v8; // r9
  __int64 v9; // rdx

  *a1 = 0LL;
  v4 = (CQuickConnectExperienceManager *)operator new(0x1A8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = CQuickConnectExperienceManager::CQuickConnectExperienceManager(v4);
    CanCastTo = CQuickConnectExperienceManager::RuntimeClassInitialize(v6, *a2);
    if ( CanCastTo >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &GUID_00000000_0000_0000_c000_000000000046)
        || InlineIsEqualGUID(v7, v8) )
      {
        *a1 = v6;
        (*(void (__fastcall **)(CQuickConnectExperienceManager *))(*(_QWORD *)v6 + 8LL))(v6);
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ILightDismissNotification,IWeakReferenceSource,Windows::Internal::Shell::Experience::IQuickConnectExperienceManager>::CanCastTo(
                      (char *)v6 + 8,
                      v9,
                      a1);
        if ( CanCastTo >= 0 )
          (*(void (__fastcall **)(CQuickConnectExperienceManager *))(*(_QWORD *)*a1 + 8LL))(*a1);
      }
    }
    if ( v6 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,IInputHostLayoutChanges>::Release((__int64)v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
