/*
 * XREFs of ?_OnViewChangedHandler@ShellFeedsExperienceManagerImpl@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x1800B8F70
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18001E264 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x1800B6984 (-Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?_OnPriorityBoostRequested@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x1800B8D30 (-_OnPriorityBoostRequested@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 *     ?_OnPriorityUnboostRequested@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x1800B8D88 (-_OnPriorityUnboostRequested@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 *     ?_OnViewCreated@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x1800B90C0 (-_OnViewCreated@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 *     ?_OnViewDestroyed@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x1800B9174 (-_OnViewDestroyed@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ShellFeedsExperienceManagerImpl::_OnViewChangedHandler(
        ShellFeedsExperienceManagerImpl *this,
        struct Windows::Internal::Shell::Experience::IShellExperienceView *a2,
        struct Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *a3)
{
  int v5; // eax
  unsigned int v6; // edi
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  int v12; // ebx
  const struct _tlgProvider_t *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r9
  int v16; // [rsp+30h] [rbp-18h] BYREF
  __int64 v17; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v19; // [rsp+60h] [rbp+18h] BYREF
  int v20; // [rsp+68h] [rbp+20h] BYREF

  v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *, int *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v20);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x395,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
  if ( v20 )
  {
    switch ( v20 )
    {
      case 1:
        return ShellFeedsExperienceManagerImpl::_OnPriorityBoostRequested(this);
      case 2:
        return ShellFeedsExperienceManagerImpl::_OnPriorityUnboostRequested(this);
      case 5:
        return ShellFeedsExperienceManagerImpl::_OnViewCreated(this);
      case 6:
        return ShellFeedsExperienceManagerImpl::_OnViewDestroyed(this);
    }
  }
  else
  {
    v8 = *(_QWORD *)a3;
    v19 = 0;
    v9 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *, int *))(v8 + 56))(
           a3,
           &v19);
    v11 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x39B,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
      return v11;
    }
    v12 = v19;
    v13 = FeedsMicrosoftTelemetryProvider::Provider(v10);
    if ( *(_DWORD *)v13 > 5u )
    {
      if ( tlgKeywordOn((__int64)v13, 0x200000000000LL) )
      {
        v17 = 0x1000000LL;
        v16 = v12;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
          v14,
          byte_18057E39B,
          0LL,
          v15,
          (__int64)&v16,
          (__int64)&v17);
      }
    }
  }
  return 0LL;
}
