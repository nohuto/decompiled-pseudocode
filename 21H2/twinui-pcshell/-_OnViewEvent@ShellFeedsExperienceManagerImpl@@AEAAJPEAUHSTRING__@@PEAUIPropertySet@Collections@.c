/*
 * XREFs of ?_OnViewEvent@ShellFeedsExperienceManagerImpl@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800B9228
 * Callers:
 *     ?_OnViewEventHandler@ShellFeedsExperienceManagerImpl@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@3456@@Z @ 0x1800B94F0 (-_OnViewEventHandler@ShellFeedsExperienceManagerImpl@@AEAAJPEAUIShellExperienceView@Experience@S.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180011F50 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ??8Wrappers@WRL@Microsoft@@YA_NAEBQEAUHSTRING__@@AEBVHStringReference@012@@Z @ 0x18002A7A8 (--8Wrappers@WRL@Microsoft@@YA_NAEBQEAUHSTRING__@@AEBVHStringReference@012@@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002A7EC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAE@Z1@Z @ 0x18002B130 (--$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??$ShellFeedsExperienceManagerImpl_OnViewEvent_SuspensionAllowedByApp@AEA_N@ShellFeedsTelemetry@@SAXAEA_N@Z @ 0x1800B07F8 (--$ShellFeedsExperienceManagerImpl_OnViewEvent_SuspensionAllowedByApp@AEA_N@ShellFeedsTelemetry@.c)
 *     ?Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x1800B6984 (-Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?UpdatePositioningAnchorRect@ShellFeedsExperienceManagerImpl@@AEAAXXZ @ 0x1800B7E98 (-UpdatePositioningAnchorRect@ShellFeedsExperienceManagerImpl@@AEAAXXZ.c)
 *     ?_CancelDeferredSuspensionTimer@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x1800B8228 (-_CancelDeferredSuspensionTimer@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 *     ?_IsViewVisible@ShellFeedsExperienceManagerImpl@@AEAA_NXZ @ 0x1800B8890 (-_IsViewVisible@ShellFeedsExperienceManagerImpl@@AEAA_NXZ.c)
 *     ?_Show@ShellFeedsExperienceManagerImpl@@AEAAJPEAUHSTRING__@@W4ShellFeedsButtonInteraction@Experience@Shell@Internal@Windows@@@Z @ 0x1800B9884 (-_Show@ShellFeedsExperienceManagerImpl@@AEAAJPEAUHSTRING__@@W4ShellFeedsButtonInteraction@Experi.c)
 *     ?_StartDeferredSuspensionTimer@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x1800B9B4C (-_StartDeferredSuspensionTimer@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?GetStringWithDefault@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA?AVHString@Wrappers@WRL@Microsoft@@PEAUHSTRING__@@PEBG@Z @ 0x180227EB8 (-GetStringWithDefault@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA-AVHString@Wrappers@W.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180264C5C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall ShellFeedsExperienceManagerImpl::_OnViewEvent(
        ShellFeedsExperienceManagerImpl *this,
        HSTRING string,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  PCWSTR StringRawBuffer; // rdi
  __int64 v6; // rcx
  const struct _tlgProvider_t *v7; // rcx
  unsigned int v8; // r8d
  int v9; // ecx
  HSTRING_HEADER *v10; // rax
  unsigned int v11; // r8d
  unsigned int v12; // r8d
  HSTRING_HEADER *v13; // rax
  __int64 (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // r8
  int v15; // edi
  bool *v17; // rdi
  __int64 v18; // rcx
  const struct _tlgProvider_t *v19; // rcx
  int v20; // ecx
  __int64 v21; // r9
  HSTRING_HEADER *v22; // rax
  unsigned int v23; // r8d
  HSTRING_HEADER *v24; // rax
  _BYTE v25[8]; // [rsp+30h] [rbp-50h] BYREF
  __int64 (__fastcall ***v26)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-48h] BYREF
  HSTRING stringa; // [rsp+40h] [rbp-40h] BYREF
  __int64 v28; // [rsp+48h] [rbp-38h] BYREF
  HSTRING_HEADER v29; // [rsp+50h] [rbp-30h] BYREF
  __int64 v30; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v26 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))string;
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  v7 = FeedsMicrosoftTelemetryProvider::Provider(v6);
  if ( *(_DWORD *)v7 > 5u && tlgKeywordOn((__int64)v7, 0x200000000000LL) )
  {
    stringa = (HSTRING)0x2000000;
    v28 = (__int64)StringRawBuffer;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
      v9,
      (int)&dword_18057E40C,
      (__int64)&v28,
      (__int64)&stringa);
  }
  v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v29, (const WCHAR **)off_180509A50, v8);
  if ( Microsoft::WRL::Wrappers::operator==((HSTRING *)&v26, (__int64)v10) )
  {
    v26 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a3;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v26);
    v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v29, (const WCHAR **)off_180509A88, v12);
    v15 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned char>(
            &v26,
            (__int64)v13[1].Reserved.Reserved1,
            v14,
            v25);
    v30 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v26);
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3FB,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
        (const char *)(unsigned int)v15);
      return (unsigned int)v15;
    }
    v17 = (bool *)this + 220;
    if ( *((_BYTE *)this + 220) != (v25[0] != 0) )
    {
      *v17 = v25[0] != 0;
      ShellFeedsTelemetry::ShellFeedsExperienceManagerImpl_OnViewEvent_SuspensionAllowedByApp<bool &>((char *)this + 220);
      if ( *v17 )
      {
        if ( !ShellFeedsExperienceManagerImpl::_IsViewVisible(this) )
          ShellFeedsExperienceManagerImpl::_StartDeferredSuspensionTimer(this);
      }
      else
      {
        ShellFeedsExperienceManagerImpl::_CancelDeferredSuspensionTimer((struct _TP_TIMER **)this);
        if ( !ShellFeedsExperienceManagerImpl::_IsViewVisible(this) )
        {
          v19 = FeedsMicrosoftTelemetryProvider::Provider(v18);
          if ( *(_DWORD *)v19 > 5u && tlgKeywordOn((__int64)v19, 0x200000000000LL) )
          {
            v28 = 0x1000000LL;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
              v20,
              (int)&unk_18057DA15,
              0,
              v21,
              (__int64)&v28);
          }
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 88LL))(*((_QWORD *)this + 12));
        }
      }
    }
  }
  else
  {
    v22 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v29, (const WCHAR **)off_180509A58, v11);
    if ( Microsoft::WRL::Wrappers::operator==((HSTRING *)&v26, (__int64)v22) )
    {
      ShellFeedsExperienceManagerImpl::UpdatePositioningAnchorRect(this);
      v26 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a3;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v26);
      v24 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v29, (const WCHAR **)off_180509A70, v23);
      Windows::Internal::ShellHelpers::PropertySetHelper::GetStringWithDefault(
        &v26,
        &stringa,
        v24[1].Reserved.Reserved1,
        0LL);
      v30 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v26);
      ShellFeedsExperienceManagerImpl::_Show(this, stringa, 7LL);
      *((_BYTE *)this + 217) = 1;
      WindowsDeleteString(stringa);
    }
  }
  return 0LL;
}
