/*
 * XREFs of ?OnViewShown@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800BD190
 * Callers:
 *     <none>
 * Callees:
 *     ?End@CExperienceManagerAnimationHelper@@QEAAJXZ @ 0x18000CD68 (-End@CExperienceManagerAnimationHelper@@QEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1800869A0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?Provider@SingleViewExperienceLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x180089F04 (-Provider@SingleViewExperienceLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?NotifyTrayFlyoutIsVisible@CBaseTrayFlyoutExperienceManager@@AEAAX_N@Z @ 0x1800BC3B4 (-NotifyTrayFlyoutIsVisible@CBaseTrayFlyoutExperienceManager@@AEAAX_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDismissNotification@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1804E5ED0 (-RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDi.c)
 */

__int64 __fastcall CBaseTrayFlyoutExperienceManager::OnViewShown(
        CBaseTrayFlyoutExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  char *v2; // rdi
  const struct _tlgProvider_t *v5; // rax
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (char *)this - 48;
  CBaseTrayFlyoutExperienceManager::NotifyTrayFlyoutIsVisible(
    (CBaseTrayFlyoutExperienceManager *)((char *)this - 48),
    1u);
  v5 = SingleViewExperienceLogging::Provider();
  if ( *(_DWORD *)v5 > 5u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)v5,
      byte_18057E929,
      0LL);
  v6 = SingleViewLightDismissHelper::RegisterWithLightDismiss(
         (char *)this + 240,
         *((unsigned int *)this + 58),
         ((unsigned __int64)this - 40) & -(__int64)(v2 != 0LL),
         *((_QWORD *)a2 + 3));
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB7,
      (__int64)"internal\\shell\\private\\inc\\BaseTrayFlyoutExperience.cpp",
      (const char *)(unsigned int)v6);
  v7 = *((_QWORD *)this + 42);
  if ( v7 )
    (*(void (__fastcall **)(__int64, struct CSingleViewShellExperience *))(*(_QWORD *)v7 + 56LL))(v7, a2);
  v8 = CExperienceManagerAnimationHelper::End((CBaseTrayFlyoutExperienceManager *)((char *)this + 256));
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xBC,
      (__int64)"internal\\shell\\private\\inc\\BaseTrayFlyoutExperience.cpp",
      (const char *)(unsigned int)v8);
  return 0LL;
}
