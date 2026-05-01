/*
 * XREFs of ??$copy_to@UIAppDisplayInfo@ApplicationModel@Windows@@@?$com_ptr_t@VTrayInfoTipDisplayInfo@SystemTray@@Uerr_exception_policy@wil@@@wil@@QEBAXPEAPEAUIAppDisplayInfo@ApplicationModel@Windows@@@Z @ 0x1803EAB48
 * Callers:
 *     ?get_DisplayInfo@TrayInfoTipAppInfo@SystemTray@@UEAAJPEAPEAUIAppDisplayInfo@ApplicationModel@Windows@@@Z @ 0x1803EAFD0 (-get_DisplayInfo@TrayInfoTipAppInfo@SystemTray@@UEAAJPEAPEAUIAppDisplayInfo@ApplicationModel@Win.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180043060 (InlineIsEqualGUID.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakReferenceSource@@UIInternalAppInfo@ApplicationModel@Extensions@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1803EAD48 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakRefe_ea_1803EAD48.c)
 */

void __fastcall wil::com_ptr_t<SystemTray::TrayInfoTipDisplayInfo,wil::err_exception_policy>::copy_to<Windows::ApplicationModel::IAppDisplayInfo>(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // r8
  _DWORD *v4; // rcx
  __int64 v5; // r8
  _DWORD *v6; // rcx
  _DWORD *v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  int CanCastTo; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *a1;
  *a2 = 0LL;
  if ( v2 )
  {
    if ( InlineIsEqualGUID(&GUID_1aeb1103_e4d4_41aa_a4f6_c4a276e79eac, &GUID_00000000_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(v4, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    {
      *a2 = v5;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      CanCastTo = 0;
    }
    else
    {
      if ( InlineIsEqualGUID(v6, v7) )
      {
        *a2 = v9;
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>::CanCastTo(
                      v9 + 8,
                      v8,
                      a2);
        if ( CanCastTo < 0 )
          goto LABEL_9;
      }
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 8LL))(*a2);
    }
LABEL_9:
    if ( CanCastTo < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        5495LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)(unsigned int)CanCastTo);
      __debugbreak();
    }
  }
}
