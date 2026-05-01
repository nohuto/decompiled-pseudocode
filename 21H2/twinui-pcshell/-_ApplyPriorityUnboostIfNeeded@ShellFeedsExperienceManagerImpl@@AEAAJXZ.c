/*
 * XREFs of ?_ApplyPriorityUnboostIfNeeded@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x1800B80FC
 * Callers:
 *     ?_OnPriorityUnboostRequested@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x1800B8D88 (-_OnPriorityUnboostRequested@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800016C0 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate.c)
 *     ??$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180015CA0 (--$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@.c)
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x1800B6984 (-Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?_GetViewWrapper@ShellFeedsExperienceManagerImpl@@AEAA?AV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x1800B8604 (-_GetViewWrapper@ShellFeedsExperienceManagerImpl@@AEAA-AV-$ComPtr@UIViewWrapper@ViewManagerInter.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ShellFeedsExperienceManagerImpl::_ApplyPriorityUnboostIfNeeded(
        ShellFeedsExperienceManagerImpl *this)
{
  int v1; // ebx
  int v2; // eax
  int v3; // eax
  const struct _tlgProvider_t *v4; // rcx
  int v5; // ecx
  __int64 v6; // r8
  __int64 v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  __int64 v10; // [rsp+50h] [rbp+10h] BYREF
  __int64 v11; // [rsp+58h] [rbp+18h] BYREF
  __int64 v12; // [rsp+60h] [rbp+20h] BYREF

  v1 = 0;
  if ( !*((_DWORD *)this + 56) )
  {
    ShellFeedsExperienceManagerImpl::_GetViewWrapper(this, &v11);
    if ( v11 )
    {
      v10 = 0LL;
      v2 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies>(
             (__int64 (__fastcall ****)(_QWORD, GUID *, __int64))&v11,
             (__int64)&v10);
      v1 = v2;
      if ( v2 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x49A,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
          (const char *)(unsigned int)v2);
      if ( v1 >= 0 )
      {
        v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 56LL))(v10);
        v1 = v3;
        if ( v3 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x49D,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
            (const char *)(unsigned int)v3);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v11);
  }
  v4 = FeedsMicrosoftTelemetryProvider::Provider((__int64)this);
  if ( *(_DWORD *)v4 > 5u && tlgKeywordOn((__int64)v4, 0x400000000000LL) )
  {
    v11 = 0x1000000LL;
    v12 = (__int64)L"PriorityUnBoosted";
    LODWORD(v10) = v1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
      v5,
      (int)&dword_18057DFEE,
      v6,
      v7,
      (__int64)&v10,
      (const WCHAR **)&v12,
      (__int64)&v11);
  }
  return (unsigned int)v1;
}
