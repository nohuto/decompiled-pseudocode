/*
 * XREFs of ?InitializeCortanaExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@@Z @ 0x18039BB14
 * Callers:
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x18039D3E0 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002A860 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18009CA30 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps@@@details@wil@.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::IFocusNavigateEventArgs_____lambda_b25018c71d8554574e81f3a1a85c555e___ @ 0x1800CB83C (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--Internal-_ea_1800CB83C.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18039AAB4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAVCortanaExper.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18039AB04 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEA_ea_18039AB04.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall XamlLauncher::InitializeCortanaExperienceManager(
        XamlLauncher *this,
        struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *a2,
        __int64 a3)
{
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *, __int64, _QWORD); // rbx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  _QWORD *v10; // rdi
  __int64 (__fastcall ***v11)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v12)(_QWORD, GUID *, char *); // rsi
  __int64 v13; // rsi
  _QWORD *v14; // rax
  _QWORD *v15; // rbx
  _QWORD *v16; // r14
  int v17; // eax
  __int64 v18; // rsi
  _QWORD *v19; // rax
  _QWORD *v20; // rbx
  _QWORD *v21; // r12
  int v22; // eax
  __int64 v23; // rsi
  int v24; // eax
  __int64 v25; // r14
  XamlLauncher *v26; // rax
  XamlLauncher *v27; // rbx
  XamlLauncher *v28; // r12
  int v29; // eax
  __int64 v30; // r14
  _QWORD *v31; // rax
  _QWORD *v32; // rbx
  _QWORD *v33; // r13
  int v34; // eax
  __int64 v35; // r14
  _QWORD *v36; // rax
  _QWORD *v37; // rbx
  _QWORD *v38; // r12
  int v39; // eax
  XamlLauncher *v41; // [rsp+20h] [rbp-59h] BYREF
  __int64 (__fastcall ***v42)(_QWORD, GUID *, char *); // [rsp+28h] [rbp-51h] BYREF
  _QWORD *v43; // [rsp+30h] [rbp-49h]
  _QWORD *v44; // [rsp+38h] [rbp-41h]
  __int64 v45[6]; // [rsp+40h] [rbp-39h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp-9h] BYREF
  __int64 v47; // [rsp+88h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v42 = 0LL;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps>::GetImpl'::`2'::impl,
    1u,
    a3);
  v47 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.ShellExperience.SearchApp",
    0x2Bu,
    0x2Au);
  v5 = v47;
  v47 = 0LL;
  v6 = *(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *, __int64, _QWORD))(*(_QWORD *)a2 + 48LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v42);
  v7 = v6(a2, v5, &v42);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 802LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_43;
  }
  v10 = (_QWORD *)((char *)this + 128);
  v11 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v42;
  v12 = **v42;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 16);
  v7 = v12(v11, &GUID_3e90bc6d_f3d9_4e87_94ec_bb0819d7cdbf, (char *)this + 128);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 803LL;
    goto LABEL_5;
  }
  v13 = 0LL;
  v14 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v15 = v14;
  v16 = 0LL;
  v43 = 0LL;
  if ( v14 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>((__int64)v14);
    v15[2] = this;
    *v15 = off_1805284F0;
    v13 = (__int64)v15;
    v16 = v15;
    v43 = v15;
  }
  v45[1] = v13;
  v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, char *))(*(_QWORD *)*v10 + 224LL))(*v10, v16, (char *)this + 208);
  v8 = v17;
  if ( v17 >= 0 )
  {
    v18 = 0LL;
    v19 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v20 = v19;
    v21 = 0LL;
    v44 = 0LL;
    if ( v19 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>((__int64)v19);
      v20[2] = this;
      *v20 = off_1805284C8;
      v18 = (__int64)v20;
      v21 = v20;
      v44 = v20;
    }
    v45[2] = v18;
    v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, char *))(*(_QWORD *)*v10 + 240LL))(*v10, v21, (char *)this + 216);
    v8 = v22;
    if ( v22 >= 0 )
    {
      v41 = this;
      Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::IFocusNavigateEventArgs_____lambda_b25018c71d8554574e81f3a1a85c555e___(
        v45,
        (__int64)&v41);
      v23 = v45[0];
      v24 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)*v10 + 272LL))(
              *v10,
              v45[0],
              (char *)this + 224);
      v8 = v24;
      if ( v24 >= 0 )
      {
        v25 = 0LL;
        v26 = (XamlLauncher *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
        v27 = v26;
        v28 = 0LL;
        v41 = 0LL;
        if ( v26 )
        {
          Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>((__int64)v26);
          *((_QWORD *)v27 + 2) = this;
          *(_QWORD *)v27 = off_180528540;
          v25 = (__int64)v27;
          v28 = v27;
          v41 = v27;
        }
        v45[3] = v25;
        v29 = (*(__int64 (__fastcall **)(_QWORD, XamlLauncher *, char *))(*(_QWORD *)*v10 + 288LL))(
                *v10,
                v28,
                (char *)this + 232);
        v8 = v29;
        if ( v29 >= 0 )
        {
          v30 = 0LL;
          v31 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
          v32 = v31;
          v33 = 0LL;
          if ( v31 )
          {
            Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::ICortanaShownEventArgs *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::ICortanaShownEventArgs *>>((__int64)v31);
            v32[2] = this;
            *v32 = off_180528518;
            v30 = (__int64)v32;
            v33 = v32;
          }
          v45[4] = v30;
          v34 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, char *))(*(_QWORD *)*v10 + 176LL))(
                  *v10,
                  v33,
                  (char *)this + 240);
          v8 = v34;
          if ( v34 >= 0 )
          {
            v35 = 0LL;
            v36 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
            v37 = v36;
            v38 = 0LL;
            if ( v36 )
            {
              Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>((__int64)v36);
              v37[2] = this;
              *v37 = off_1805283B8;
              v35 = (__int64)v37;
              v38 = v37;
            }
            v45[5] = v35;
            v39 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, char *))(*(_QWORD *)*v10 + 208LL))(
                    *v10,
                    v38,
                    (char *)this + 248);
            v8 = v39;
            if ( v39 >= 0 )
              v8 = 0;
            else
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x360,
                (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
                (const char *)(unsigned int)v39);
            if ( v38 )
              (*(void (__fastcall **)(_QWORD *))(*v38 + 16LL))(v38);
            v28 = v41;
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x34F,
              (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
              (const char *)(unsigned int)v34);
          }
          if ( v33 )
            (*(void (__fastcall **)(_QWORD *))(*v33 + 16LL))(v33);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x347,
            (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
            (const char *)(unsigned int)v29);
        }
        if ( v28 )
          (*(void (__fastcall **)(XamlLauncher *))(*(_QWORD *)v28 + 16LL))(v28);
        v21 = v44;
        v16 = v43;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x33D,
          (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
          (const char *)(unsigned int)v24);
      }
      if ( v23 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x333,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v22);
    }
    if ( v21 )
      (*(void (__fastcall **)(_QWORD *))(*v21 + 16LL))(v21);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x32B,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v17);
  }
  if ( v16 )
    (*(void (__fastcall **)(_QWORD *))(*v16 + 16LL))(v16);
LABEL_43:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v42);
  return v8;
}
