/*
 * XREFs of ?SubscribeToServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x18045D850
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180022A98 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@details@wi.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TabShell@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004A614 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TabShell@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SiHostLessExplorer@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180097500 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SiHostLessExplorer@@@details@wil@@QEAAX_N.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?HasWindowingEnvironmentManager@CDesktopPositioner@@AEAA_NXZ @ 0x1801BCC98 (-HasWindowingEnvironmentManager@CDesktopPositioner@@AEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CDesktopPositioner::SubscribeToServices(CDesktopPositioner *this, struct IServiceProvider *a2)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  __int64 **v5; // r15
  int v6; // ebx
  __int64 v7; // rdx
  HRESULT (__stdcall *v9)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v10)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v11)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v12)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v13)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  _QWORD *v14; // r12
  HRESULT (__stdcall *v15)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v16)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 v17; // r8
  __int64 v18; // r8
  HRESULT (__stdcall *v19)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 v20; // rdx
  CDesktopPositioner *v21; // rcx
  __int64 v22; // r8
  __int64 *v23; // rcx
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rdx
  unsigned int i; // ebx
  __int64 *v28; // rcx
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rax
  int v32; // eax
  int v33; // eax
  __int64 v34; // rdx
  __int64 *v35; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v36; // [rsp+38h] [rbp-48h] BYREF
  __int64 v37; // [rsp+40h] [rbp-40h] BYREF
  __int64 v38; // [rsp+48h] [rbp-38h] BYREF
  __int128 v39; // [rsp+50h] [rbp-30h] BYREF
  __int128 v40; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  QueryService = a2->lpVtbl->QueryService;
  v5 = (__int64 **)((char *)this + 200);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)this + 25);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 **))QueryService)(
         a2,
         &SID_IImmersiveMonitorService,
         &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
         v5);
  if ( v6 < 0 )
  {
    v7 = 86LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v9 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 26);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v9)(
         a2,
         &IID_IApplicationPositionPersistence,
         &GUID_f876b69a_7b8e_4f46_864c_a0b0ea3e49c2,
         (char *)this + 208);
  if ( v6 < 0 )
  {
    v7 = 87LL;
    goto LABEL_3;
  }
  v10 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 27);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v10)(
         a2,
         &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
         &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
         (char *)this + 216);
  if ( v6 < 0 )
  {
    v7 = 88LL;
    goto LABEL_3;
  }
  v11 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 28);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v11)(
         a2,
         &GUID_55fa44d3_fe5d_40c3_bc17_14db2012770a,
         &GUID_55fa44d3_fe5d_40c3_bc17_14db2012770a,
         (char *)this + 224);
  if ( v6 < 0 )
  {
    v7 = 89LL;
    goto LABEL_3;
  }
  v12 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 29);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v12)(
         a2,
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         (char *)this + 232);
  if ( v6 < 0 )
  {
    v7 = 90LL;
    goto LABEL_3;
  }
  v13 = a2->lpVtbl->QueryService;
  v14 = (_QWORD *)((char *)this + 240);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 30);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v13)(
         a2,
         &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
         &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
         (char *)this + 240);
  if ( v6 < 0 )
  {
    v7 = 91LL;
    goto LABEL_3;
  }
  v15 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 31);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v15)(
         a2,
         &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
         &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
         (char *)this + 248);
  if ( v6 < 0 )
  {
    v7 = 92LL;
    goto LABEL_3;
  }
  v16 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 33);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v16)(
         a2,
         &GUID_b424c6f2_89a8_4bf1_8946_41454468d78c,
         &GUID_b424c6f2_89a8_4bf1_8946_41454468d78c,
         (char *)this + 264);
  if ( v6 < 0 )
  {
    v7 = 93LL;
    goto LABEL_3;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabShell>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetImpl'::`2'::impl,
    0,
    3u);
  v6 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 29) + 96LL))(
         *((_QWORD *)this + 29),
         ((unsigned __int64)this + 112) & -(__int64)(this != (CDesktopPositioner *)40),
         (char *)this + 344);
  if ( v6 < 0 )
  {
    v7 = 101LL;
    goto LABEL_3;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(*(_QWORD *)*v14 + 72LL))(
         *v14,
         ((unsigned __int64)this + 120) & -(__int64)(this != (CDesktopPositioner *)40),
         (char *)this + 348);
  if ( v6 < 0 )
  {
    v7 = 102LL;
    goto LABEL_3;
  }
  (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v14 + 24LL))(*v14, (char *)this + 192);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::GetImpl'::`2'::impl,
    1u,
    v17);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SiHostLessExplorer>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_SiHostLessExplorer>::GetImpl'::`2'::impl,
    0,
    v18);
  v19 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 35);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v19)(
         a2,
         &GUID_9c4a7f24_303d_47a7_994e_503f26217d06,
         &GUID_9c4a7f24_303d_47a7_994e_503f26217d06,
         (char *)this + 280);
  if ( v6 < 0 )
  {
    v7 = 114LL;
    goto LABEL_3;
  }
  if ( CDesktopPositioner::HasWindowingEnvironmentManager(v21, v20, v22) )
  {
    v35 = 0LL;
    v23 = (__int64 *)*((_QWORD *)this + 35);
    v24 = *v23;
    v35 = 0LL;
    v25 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 **))(v24 + 24))(v23, 1LL, &v35);
    v6 = v25;
    if ( v25 < 0 )
    {
      v26 = 120LL;
LABEL_38:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v26,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v25);
LABEL_44:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v35);
      return (unsigned int)v6;
    }
    if ( (*(int (__fastcall **)(__int64 *, unsigned int *))(**v5 + 32))(*v5, &v36) >= 0 )
    {
      for ( i = 0; i < v36; ++i )
      {
        v37 = 0LL;
        v28 = *v5;
        v29 = **v5;
        v37 = 0LL;
        if ( (*(int (__fastcall **)(__int64 *, _QWORD, __int64 *))(v29 + 40))(v28, i, &v37) >= 0 )
        {
          v40 = 0LL;
          v30 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v37 + 88LL))(v37, &v40);
          if ( v30 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x84,
              (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
              (const char *)(unsigned int)v30);
          v31 = *v35;
          v39 = v40;
          v32 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int128 *, __int64))(v31 + 56))(v35, v37, &v39, 1LL);
          if ( v32 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x85,
              (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
              (const char *)(unsigned int)v32);
        }
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v37);
      }
    }
    v25 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v35 + 40))(v35, *((_DWORD *)this + 48) == 0 ? 3 : 0);
    v6 = v25;
    if ( v25 < 0 )
    {
      v26 = 143LL;
      goto LABEL_38;
    }
    v38 = 0LL;
    v33 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64 *))**v5)(
            *v5,
            &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
            &v38);
    v6 = v33;
    if ( v33 < 0 )
    {
      v34 = 147LL;
LABEL_43:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v34,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v33);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v38);
      goto LABEL_44;
    }
    v33 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, char *))(*(_QWORD *)v38 + 24LL))(
            v38,
            ((unsigned __int64)this + 104) & -(__int64)(this != (CDesktopPositioner *)40),
            (char *)this + 356);
    v6 = v33;
    if ( v33 < 0 )
    {
      v34 = 148LL;
      goto LABEL_43;
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v38);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v35);
  }
  return 0LL;
}
