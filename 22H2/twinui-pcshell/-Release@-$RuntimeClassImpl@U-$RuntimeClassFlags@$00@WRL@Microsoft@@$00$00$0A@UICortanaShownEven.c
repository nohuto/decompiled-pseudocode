/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UICortanaShownEventArgs@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18008A330
 * Callers:
 *     ?OnShown@SearchAppExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z @ 0x180084B20 (-OnShown@SearchAppExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z.c)
 *     Microsoft::WRL::Details::Make__SearchAppExperienceManagerNotification::OnShown_::_2_::CCortanaShownEventArgs_Windows::Foundation::Rect_&_ @ 0x180084BAC (Microsoft--WRL--Details--Make__SearchAppExperienceManagerNotification--OnShown_--_2_--CCortanaSh.c)
 *     _ShellFeedsExperienceManagerNotification::OnShown_::_2_::CCortanaShownEventArgs::Release @ 0x18008A320 (_ShellFeedsExperienceManagerNotification--OnShown_--_2_--CCortanaShownEventArgs--Release.c)
 *     Microsoft::WRL::Details::Make__ShellFeedsExperienceManagerNotification::OnShown_::_2_::CCortanaShownEventArgs_Windows::Foundation::Rect_&_ @ 0x1800AFE2C (Microsoft--WRL--Details--Make__ShellFeedsExperienceManagerNotification--OnShown_--_2_--CCortanaS.c)
 *     ?OnShown@ShellFeedsExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z @ 0x1800B66D0 (-OnShown@ShellFeedsExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UICortanaShownEventArgs@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x180164680 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UICor_ea_180164680.c)
 *     Microsoft::WRL::Details::Make__CortanaExperienceManagerNotification::OnShown_::_2_::CCortanaShownEventArgs_Windows::Foundation::Rect_&_ @ 0x180225870 (Microsoft--WRL--Details--Make__CortanaExperienceManagerNotification--OnShown_--_2_--CCortanaShow.c)
 *     Microsoft::WRL::Details::Make__SearchAppExperienceManagerNotification::OnFocusNavigate_::_2_::CFocusNavigateEventArgs_enum_Windows::Internal::Shell::Experience::FocusNavigateDirection_&_ @ 0x1802258FC (Microsoft--WRL--Details--Make__SearchAppExperienceManagerNotification--OnFocusNavigate_--_2_--CF.c)
 *     ?OnFocusNavigate@CortanaExperienceManagerNotification@@UEAAXW4FocusNavigateDirection@Experience@Shell@Internal@Windows@@@Z @ 0x180229410 (-OnFocusNavigate@CortanaExperienceManagerNotification@@UEAAXW4FocusNavigateDirection@Experience@.c)
 *     ?OnShown@CortanaExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z @ 0x180229560 (-OnShown@CortanaExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z.c)
 *     ?OnFocusNavigate@SearchAppExperienceManagerNotification@@UEAAXW4FocusNavigateDirection@Experience@Shell@Internal@Windows@@@Z @ 0x1802657E0 (-OnFocusNavigate@SearchAppExperienceManagerNotification@@UEAAXW4FocusNavigateDirection@Experienc.c)
 *     ?InternalRelease@?$ComPtr@VAppViewIconFactory@@@WRL@Microsoft@@IEAAKXZ @ 0x1803AD640 (-InternalRelease@-$ComPtr@VAppViewIconFactory@@@WRL@Microsoft@@IEAAKXZ.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180095320 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::ICortanaShownEventArgs>::Release(
        __int64 a1)
{
  signed __int64 v1; // rax
  __int64 v2; // r10
  unsigned int v3; // ebx
  signed __int64 v4; // rtt

  v1 = *(_QWORD *)(a1 + 24);
  v2 = a1;
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 2147483646;
    v3 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v1 - 1, v1);
    if ( v4 == v1 )
      goto LABEL_8;
  }
  v3 = Microsoft::WRL::Details::SafeUnknownDecrementReference(
         (Microsoft::WRL::Details *)(2 * v1 + 16),
         (volatile int *)((unsigned __int64)v1 >> 63));
LABEL_8:
  if ( !v3 )
  {
    if ( v2 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 56LL))(v2, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v3;
}
