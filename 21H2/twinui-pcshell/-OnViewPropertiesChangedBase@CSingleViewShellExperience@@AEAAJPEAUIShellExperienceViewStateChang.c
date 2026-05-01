/*
 * XREFs of ?OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x18006F140
 * Callers:
 *     ?OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x180032E64 (-OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventAr.c)
 * Callees:
 *     ?ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x180015374 (-ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002A860 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ResizeShellExperienceViews@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18006F430 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ResizeShellExperienceViews@@@details@wil@.c)
 *     ??0RoVariant@@QEAA@PEAUIInspectable@@_N@Z @ 0x18006F4B4 (--0RoVariant@@QEAA@PEAUIInspectable@@_N@Z.c)
 *     ??1RoVariant@@QEAA@XZ @ 0x18006F55C (--1RoVariant@@QEAA@XZ.c)
 *     ?GetBoolean@Accessor@RoVariant@@QEBAJPEAE@Z @ 0x18006F594 (-GetBoolean@Accessor@RoVariant@@QEBAJPEAE@Z.c)
 *     ?GetSize@Accessor@RoVariant@@QEBAJPEAUSize@Foundation@Windows@@@Z @ 0x18006F5DC (-GetSize@Accessor@RoVariant@@QEBAJPEAUSize@Foundation@Windows@@@Z.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18006F624 (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIProp.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CSingleViewShellExperience::OnViewPropertiesChangedBase(
        CSingleViewShellExperience *this,
        struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rbx
  int v9; // eax
  bool v10; // r8
  char v11; // si
  __int64 *v12; // rbx
  __int64 v13; // rcx
  int Size; // eax
  __int64 v15; // rbx
  int v16; // eax
  bool v17; // r8
  char v18; // si
  __int64 *v19; // rbx
  __int64 v20; // rcx
  int Boolean; // eax
  __int64 v23; // r9
  __int64 v24; // rdx
  int v25; // ecx
  unsigned int v26; // edx
  __int64 v27; // [rsp+20h] [rbp-60h] BYREF
  int v28; // [rsp+28h] [rbp-58h]
  __int64 *v29; // [rsp+30h] [rbp-50h] BYREF
  struct IInspectable *v30; // [rsp+38h] [rbp-48h] BYREF
  __int64 v31; // [rsp+40h] [rbp-40h] BYREF
  __int64 *v32; // [rsp+48h] [rbp-38h] BYREF
  int v33; // [rsp+50h] [rbp-30h]
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-28h] BYREF
  __int64 v35; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v27 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
  v4 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *, __int64 *))(*(_QWORD *)a2 + 72LL))(
         a2,
         &v27);
  v5 = v4;
  if ( v4 < 0 )
  {
    v23 = (unsigned int)v4;
    v24 = 585LL;
    goto LABEL_20;
  }
  if ( !v27 )
  {
    v5 = -2147467259;
    v23 = 2147500037LL;
    v24 = 587LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)v23);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
    return v5;
  }
  v6 = *((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = v27;
  v27 = v6;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
  v31 = 0LL;
  v7 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
         (char *)this + 32,
         &v31);
  v5 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x250,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v7);
  }
  else
  {
    v32 = 0LL;
    v33 = 0;
    *(_QWORD *)((char *)this + 44) = 0LL;
    v8 = v31;
    v29 = (__int64 *)&v32;
    v30 = 0LL;
    v35 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"desiredSize", 0xCu, 0xBu);
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, struct IInspectable **))(*(_QWORD *)v8 + 48LL))(v8, v35, &v30);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x257,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v9);
      v11 = 0;
    }
    else
    {
      v11 = 1;
    }
    v35 = 0LL;
    v12 = v29;
    RoVariant::RoVariant((RoVariant *)&v27, v30, v10);
    v13 = *v12;
    *v12 = v27;
    v27 = v13;
    LODWORD(v13) = *((_DWORD *)v12 + 2);
    *((_DWORD *)v12 + 2) = v28;
    v28 = v13;
    RoVariant::~RoVariant((RoVariant *)&v27);
    if ( v11 )
    {
      v29 = v32;
      LODWORD(v30) = v33;
      Size = RoVariant::Accessor::GetSize(
               (RoVariant::Accessor *)&v29,
               (CSingleViewShellExperience *)((char *)this + 44));
      if ( Size < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x25A,
          (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)Size);
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_ResizeShellExperienceViews>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_ResizeShellExperienceViews>::GetImpl'::`2'::impl,
        0LL);
    }
    *((_BYTE *)this + 52) = 0;
    v15 = v31;
    v29 = (__int64 *)&v32;
    v30 = 0LL;
    v35 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"fullScreen", 0xBu, 0xAu);
    v16 = (*(__int64 (__fastcall **)(__int64, __int64, struct IInspectable **))(*(_QWORD *)v15 + 48LL))(v15, v35, &v30);
    if ( v16 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x264,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v16);
      v18 = 0;
    }
    else
    {
      v18 = 1;
    }
    v35 = 0LL;
    v19 = v29;
    RoVariant::RoVariant((RoVariant *)&v27, v30, v17);
    v20 = *v19;
    *v19 = v27;
    v27 = v20;
    LODWORD(v20) = *((_DWORD *)v19 + 2);
    *((_DWORD *)v19 + 2) = v28;
    v28 = v20;
    RoVariant::~RoVariant((RoVariant *)&v27);
    if ( v18 )
    {
      v29 = v32;
      LODWORD(v30) = v33;
      Boolean = RoVariant::Accessor::GetBoolean((RoVariant::Accessor *)&v29, (unsigned __int8 *)this + 52);
      if ( Boolean < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x266,
          (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)Boolean);
    }
    (*(void (__fastcall **)(_QWORD, CSingleViewShellExperience *))(**((_QWORD **)this + 11) + 16LL))(
      *((_QWORD *)this + 11),
      this);
    if ( !*((_DWORD *)this + 10) && *((_QWORD *)this + 3) )
    {
      *((_DWORD *)this + 10) = 1;
      v25 = *((_DWORD *)this + 16);
      v26 = (*((_DWORD *)this + 17) & 1) + 2;
      if ( (*((_BYTE *)this + 68) & 2) == 0 )
        v26 = *((_DWORD *)this + 17) & 1;
      if ( (*((_BYTE *)this + 68) & 4) != 0 )
        v26 |= 4u;
      *((_QWORD *)this + 8) = 0LL;
      if ( v25 == 1 )
        CSingleViewShellExperience::ShowViewAsync(this, v26);
    }
    v5 = 0;
    RoVariant::~RoVariant((RoVariant *)&v32);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
  return v5;
}
