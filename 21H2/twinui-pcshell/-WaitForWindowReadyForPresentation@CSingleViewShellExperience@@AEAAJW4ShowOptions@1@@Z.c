/*
 * XREFs of ?WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x180015418
 * Callers:
 *     ?ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x180015374 (-ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180015864 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAUIClientWindo.c)
 *     ??$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Details@WRL@Microsoft@@YAJPEAPEAVCMarshalStream@CMarshaledInterface@@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Z @ 0x1800158B4 (--$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4M.c)
 *     ?NavigateView@NavigationLevelOverrideHelper@ShellExperienceHelpers@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevel@4567@@Z @ 0x18001627C (-NavigateView@NavigationLevelOverrideHelper@ShellExperienceHelpers@@AEAAJPEAUIViewWrapper@ViewMa.c)
 *     ??$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180016380 (--$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@Vie.c)
 *     ??$?0PEBGPEBGI_N_NAEA_N@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@$$QEAPEBG1$$QEAI$$QEA_N3AEA_N@Z @ 0x180016570 (--$-0PEBGPEBGI_N_NAEA_N@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@AEAA@U-.c)
 *     ??1WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x1800195D0 (--1WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____lambda_f041bb78b865ecfb9ab5fa4d5b43ebf6___ @ 0x18014E9A0 (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--Internal-_ea_18014E9A0.c)
 *     ??$SetForegroundFailed@AEAJPEBGAEAW4ExperienceViewState@CSingleViewShellExperience@@AEAW4PendingViewAction@2@AEAW4PendingViewActionShowFlags@2@@SingleViewExperienceTelemetry@@SAXAEAJ$$QEAPEBGAEAW4ExperienceViewState@CSingleViewShellExperience@@AEAW4PendingViewAction@2@AEAW4PendingViewActionShowFlags@2@@Z @ 0x18014EB74 (--$SetForegroundFailed@AEAJPEBGAEAW4ExperienceViewState@CSingleViewShellExperience@@AEAW4Pending.c)
 *     _lambda_f041bb78b865ecfb9ab5fa4d5b43ebf6_::_lambda_f041bb78b865ecfb9ab5fa4d5b43ebf6_ @ 0x18014EC50 (_lambda_f041bb78b865ecfb9ab5fa4d5b43ebf6_--_lambda_f041bb78b865ecfb9ab5fa4d5b43ebf6_.c)
 *     _lambda_f041bb78b865ecfb9ab5fa4d5b43ebf6_::__lambda_f041bb78b865ecfb9ab5fa4d5b43ebf6_ @ 0x18014EE0C (_lambda_f041bb78b865ecfb9ab5fa4d5b43ebf6_--__lambda_f041bb78b865ecfb9ab5fa4d5b43ebf6_.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x1801A7810 (--1-$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?GetRawBuffer@HString@Wrappers@WRL@Microsoft@@QEBAPEBGPEAI@Z @ 0x1801A781C (-GetRawBuffer@HString@Wrappers@WRL@Microsoft@@QEBAPEBGPEAI@Z.c)
 *     wil::details::ScopeExitFn__lambda_6914baa2bbb41478f35591fe55a15932___::_ScopeExitFn__lambda_6914baa2bbb41478f35591fe55a15932___ @ 0x1801A7834 (wil--details--ScopeExitFn__lambda_6914baa2bbb41478f35591fe55a15932___--_ScopeExitFn__lambda_6914.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CSingleViewShellExperience::WaitForWindowReadyForPresentation(__int64 a1, char a2)
{
  _QWORD *v4; // r12
  _DWORD *v5; // rbx
  int v6; // edx
  int v7; // eax
  int v8; // edi
  int v9; // eax
  int v10; // ebx
  const WCHAR *v11; // rax
  int v12; // eax
  const unsigned __int16 *v13; // rdi
  unsigned __int16 *v14; // rax
  unsigned __int16 *v15; // rbx
  __int64 v16; // rbx
  __int64 v17; // rax
  int v18; // eax
  int bIgnoreCase; // [rsp+28h] [rbp-E0h]
  int bIgnoreCasea; // [rsp+28h] [rbp-E0h]
  int bIgnoreCaseb; // [rsp+28h] [rbp-E0h]
  WINBOOL v23[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B8h] BYREF
  int v25[2]; // [rsp+58h] [rbp-B0h] BYREF
  const unsigned __int16 *RawBuffer; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+70h] [rbp-98h] BYREF
  __int128 v29; // [rsp+78h] [rbp-90h] BYREF
  const unsigned __int16 *v30; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v31[2]; // [rsp+90h] [rbp-78h] BYREF
  char v32; // [rsp+A0h] [rbp-68h]
  int v33[80]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v34[336]; // [rsp+1E8h] [rbp+E0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+370h] [rbp+268h]

  LODWORD(v27) = -1;
  v4 = (_QWORD *)(a1 + 24);
  (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 24) + 400LL))(*(_QWORD *)(a1 + 24), &v27);
  LOBYTE(v23[0]) = *(_QWORD *)(a1 + 120) != 0LL;
  v5 = (_DWORD *)(a1 + 72);
  BYTE1(v23[0]) = *(_DWORD *)(a1 + 72) != 0;
  LODWORD(v24) = v27;
  RawBuffer = Microsoft::WRL::Wrappers::HString::GetRawBuffer((Microsoft::WRL::Wrappers::HString *)(a1 + 16), 0LL);
  *(_QWORD *)v25 = Microsoft::WRL::Wrappers::HString::GetRawBuffer((Microsoft::WRL::Wrappers::HString *)(a1 + 8), 0LL);
  SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::WaitForWindowReadyForPresentation(
    (int)v33,
    v6,
    (int)v25,
    (int)&RawBuffer,
    (__int64)&v24,
    (WINBOOL)v23 + 1,
    (__int64)v23,
    a1 + 53);
  v31[0] = v33;
  v31[1] = a1;
  v32 = 1;
  v28 = 0LL;
  v7 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
         v4,
         &v28);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x32C,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v7,
      bIgnoreCase);
    goto LABEL_30;
  }
  if ( *v5 )
  {
    *v5 = 4;
  }
  else
  {
    v9 = ShellExperienceHelpers::NavigationLevelOverrideHelper::NavigateView(a1 + 72, *v4, 4LL);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x80,
        (unsigned int)"internal\\Shell\\private\\inc\\NavigationLevelOverrideHelper.h",
        (const char *)(unsigned int)v9,
        bIgnoreCase);
      goto LABEL_8;
    }
  }
  v10 = 0;
LABEL_8:
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x32F,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v10,
      bIgnoreCase);
  if ( (a2 & 1) == 0 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 72LL))(*(_QWORD *)(a1 + 80));
    LODWORD(v24) = v8;
    if ( v8 < 0 && (a2 & 4) != 0 )
    {
      v11 = Microsoft::WRL::Wrappers::HString::GetRawBuffer((Microsoft::WRL::Wrappers::HString *)(a1 + 16), 0LL);
      if ( CompareStringOrdinal(v11, -1, L"Windows.Internal.ShellExperience.ShellFeeds", -1, 1) == 2 )
      {
        RawBuffer = Microsoft::WRL::Wrappers::HString::GetRawBuffer((Microsoft::WRL::Wrappers::HString *)(a1 + 16), 0LL);
        SingleViewExperienceTelemetry::SetForegroundFailed<long &,unsigned short const *,enum CSingleViewShellExperience::ExperienceViewState &,enum CSingleViewShellExperience::PendingViewAction &,enum CSingleViewShellExperience::PendingViewActionShowFlags &>(
          (unsigned int)&v24,
          (unsigned int)&RawBuffer,
          a1 + 40,
          a1 + 64,
          a1 + 68);
      }
      v12 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 72LL))(*(_QWORD *)(a1 + 88), a1);
      if ( v12 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x33B,
          (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)v12,
          bIgnoreCasea);
      goto LABEL_30;
    }
  }
  if ( *(_QWORD *)(a1 + 120) )
  {
LABEL_29:
    v8 = 0;
    goto LABEL_30;
  }
  *(_QWORD *)&v29 = a1;
  *((_QWORD *)&v29 + 1) = CSingleViewShellExperience::OnClientWindowReadyForPresentationChanged;
  v13 = 0LL;
  v14 = (unsigned __int16 *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v15 = v14;
  if ( v14 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>(v14);
    *((_OWORD *)v15 + 1) = v29;
    *(_QWORD *)v15 = off_1804F84B8;
    v13 = v15;
  }
  RawBuffer = v13;
  v16 = *(_QWORD *)(a1 + 96);
  *(_QWORD *)&v29 = v16;
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
  *(_QWORD *)v25 = 0LL;
  LODWORD(v24) = 2;
  v30 = v13;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(v25);
  Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
    v25,
    &GUID_8cecdf70_ced8_5bc7_84a7_d80615fedcdd,
    &v30,
    &v24);
  v17 = lambda_f041bb78b865ecfb9ab5fa4d5b43ebf6_::_lambda_f041bb78b865ecfb9ab5fa4d5b43ebf6_(
          (unsigned int)v34,
          (unsigned int)&v29,
          a1,
          (unsigned int)v25,
          (__int64)v33);
  Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____lambda_f041bb78b865ecfb9ab5fa4d5b43ebf6___(
    &v24,
    v17);
  lambda_f041bb78b865ecfb9ab5fa4d5b43ebf6_::__lambda_f041bb78b865ecfb9ab5fa4d5b43ebf6_((Microsoft::WRL::WeakRef *)v34);
  v18 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v28 + 80LL))(v28, v24, a1 + 120);
  v8 = v18;
  if ( v18 >= 0 )
  {
    v32 = 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(v25);
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&RawBuffer);
    goto LABEL_29;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x36D,
    (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
    (const char *)(unsigned int)v18,
    bIgnoreCaseb);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(v25);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&RawBuffer);
LABEL_30:
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>(&v28);
  wil::details::ScopeExitFn__lambda_6914baa2bbb41478f35591fe55a15932___::_ScopeExitFn__lambda_6914baa2bbb41478f35591fe55a15932___(v31);
  SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::~WaitForWindowReadyForPresentation((SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation *)v33);
  return (unsigned int)v8;
}
