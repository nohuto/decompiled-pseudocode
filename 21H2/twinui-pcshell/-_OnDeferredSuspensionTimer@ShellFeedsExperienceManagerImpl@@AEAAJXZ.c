/*
 * XREFs of ?_OnDeferredSuspensionTimer@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x1800B8C04
 * Callers:
 *     ?_OnMessageHandler@ShellFeedsExperienceManagerImpl@@AEAAJI_K_J@Z @ 0x1800B8D10 (-_OnMessageHandler@ShellFeedsExperienceManagerImpl@@AEAAJI_K_J@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180011F50 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800143D0 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x1800B6984 (-Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?_GetViewState@ShellFeedsExperienceManagerImpl@@AEAA?AW4ExperienceViewState@CSingleViewShellExperience@@XZ @ 0x1800B85CC (-_GetViewState@ShellFeedsExperienceManagerImpl@@AEAA-AW4ExperienceViewState@CSingleViewShellExpe.c)
 *     ?_IsViewVisible@ShellFeedsExperienceManagerImpl@@AEAA_NXZ @ 0x1800B8890 (-_IsViewVisible@ShellFeedsExperienceManagerImpl@@AEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ShellFeedsExperienceManagerImpl::_OnDeferredSuspensionTimer(ShellFeedsExperienceManagerImpl *this)
{
  struct _TP_TIMER **v1; // rdi
  struct _TP_TIMER *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  const struct _tlgProvider_t *v6; // rcx
  int v7; // ecx
  __int64 v8; // r9
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v1 = (struct _TP_TIMER **)((char *)this + 144);
  v3 = (struct _TP_TIMER *)*((_QWORD *)this + 18);
  if ( v3 )
  {
    if ( !IsThreadpoolTimerSet(v3) )
    {
      wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
        v1,
        0LL);
      if ( !ShellFeedsExperienceManagerImpl::_IsViewVisible(this) )
      {
        v4 = *((_QWORD *)this + 12);
        LODWORD(v12) = 0;
        if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 56LL))(v4, &v12) < 0 || (_DWORD)v12 != 1 )
        {
          if ( (unsigned int)ShellFeedsExperienceManagerImpl::_GetViewState((__int64)this) )
          {
            v6 = FeedsMicrosoftTelemetryProvider::Provider(v5);
            if ( *(_DWORD *)v6 > 5u && tlgKeywordOn((__int64)v6, 0x200000000000LL) )
            {
              v12 = 0x1000000LL;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
                v7,
                (int)&unk_18057DAC4,
                0,
                v8,
                (__int64)&v12);
            }
            v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 96LL))(*((_QWORD *)this + 12));
            if ( v9 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x4C8,
                (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
                (const char *)(unsigned int)v9);
          }
        }
      }
    }
  }
  return 0LL;
}
