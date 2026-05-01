/*
 * XREFs of ??$Make@VCStartExperienceManager@@_N@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCStartExperienceManager@@@12@$$QEA_N@Z @ 0x18024169C
 * Callers:
 *     ?GetExperienceManager@StartExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x180242A70 (-GetExperienceManager@StartExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspecta.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNotification@@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@UIControlCenterExperienceManager@6789@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@9@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007D0B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNoti.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??0CStartExperienceManager@@QEAA@_N@Z @ 0x180241E18 (--0CStartExperienceManager@@QEAA@_N@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall Microsoft::WRL::Details::Make<CStartExperienceManager,bool>(__int64 *a1)
{
  CStartExperienceManager *v2; // rax
  bool v3; // dl
  CStartExperienceManager *v4; // rdi

  *a1 = 0LL;
  v2 = (CStartExperienceManager *)operator new(0x2A0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = CStartExperienceManager::CStartExperienceManager(v2, v3);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IControlCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable>::Release(*a1);
    *a1 = (__int64)v4;
  }
  return a1;
}
