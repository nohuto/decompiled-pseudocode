/*
 * XREFs of ?PerformDelayedInitialization@CDesktopPositioner@@UEAAJXZ @ 0x18045C110
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180022A98 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@details@wi.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??0?$ObjectArrayAdapterImpl@UISwitchItemElement@@V?$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x1800D37A4 (--0-$ObjectArrayAdapterImpl@UISwitchItemElement@@V-$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?HasWindowingEnvironmentManager@CDesktopPositioner@@AEAA_NXZ @ 0x1801BCC98 (-HasWindowingEnvironmentManager@CDesktopPositioner@@AEAA_NXZ.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x180219D64 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ?EnsureViewIsInViewGroupForTabGroup@CDesktopPositioner@@AEAAJPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@PEAPEAUIViewGroup@@PEAPEAU2@@Z @ 0x18045B364 (-EnsureViewIsInViewGroupForTabGroup@CDesktopPositioner@@AEAAJPEAUIApplicationView@@AEBUShellTabG.c)
 *     ?TryGetTabGroupForView@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4TryGetTabGroupForViewOption@1@PEAUIUnknown@@PEAUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18045DF84 (-TryGetTabGroupForView@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4TryGetTabGroupForViewOpt.c)
 */

__int64 __fastcall CDesktopPositioner::PerformDelayedInitialization(CDesktopPositioner *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  CDesktopPositioner *v5; // rcx
  __int64 v6; // r8
  __int64 *v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64, _QWORD, _QWORD, __int64 *); // rbx
  int v15; // eax
  __int64 *i; // rcx
  struct IApplicationView *v17; // rbx
  int TabGroupForView; // eax
  int v19; // edi
  int v20; // eax
  __int64 v21; // [rsp+30h] [rbp-39h] BYREF
  struct IApplicationView *v22; // [rsp+38h] [rbp-31h] BYREF
  struct IViewGroup *v23; // [rsp+40h] [rbp-29h] BYREF
  struct IApplicationView *v24; // [rsp+48h] [rbp-21h] BYREF
  __int64 v25; // [rsp+50h] [rbp-19h] BYREF
  struct IApplicationView *v26; // [rsp+58h] [rbp-11h] BYREF
  __int64 *v27; // [rsp+60h] [rbp-9h]
  __int64 v28; // [rsp+68h] [rbp-1h] BYREF
  int v29; // [rsp+70h] [rbp+7h]
  int v30; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v31; // [rsp+80h] [rbp+17h] BYREF
  __int64 *v32; // [rsp+88h] [rbp+1Fh]
  int v33[4]; // [rsp+90h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::GetImpl'::`2'::impl,
    1u,
    a3);
  if ( CDesktopPositioner::HasWindowingEnvironmentManager(v5, v4, v6) )
  {
    v7 = (__int64 *)*((_QWORD *)this + 35);
    v8 = *v7;
    v21 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v8 + 32))(v7, 1LL, &v21);
    v10 = v9;
    if ( v9 < 0 )
    {
      v11 = 161LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v9);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v21);
      return v10;
    }
    v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 48LL))(v21, 3LL);
    v10 = v9;
    if ( v9 < 0 )
    {
      v11 = 162LL;
      goto LABEL_6;
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v21);
  }
  if ( *((_QWORD *)this + 34) )
  {
    v21 = 0LL;
    v13 = *((_QWORD *)this + 31);
    v14 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v13 + 64LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    v15 = v14(v13, 0LL, 0LL, &v21);
    v10 = v15;
    if ( v15 >= 0 )
    {
      details::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>(
        (__int64)&v28,
        v21);
      LODWORD(v25) = 0;
      v26 = 0LL;
      v27 = &v28;
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v25);
      v30 = v29;
      v31 = 0LL;
      v32 = &v28;
      for ( i = (__int64 *)&v30; ; i = &v25 )
      {
        details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(i);
        if ( (_DWORD)v25 == v30 && v27 == v32 )
        {
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v26);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
          return 0LL;
        }
        v17 = v26;
        v24 = v26;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v24);
        *(_OWORD *)v33 = 0LL;
        TabGroupForView = CDesktopPositioner::TryGetTabGroupForView((char *)this - 40, v17, 0LL, 0LL);
        v19 = TabGroupForView;
        if ( TabGroupForView < 0 )
          break;
        v23 = 0LL;
        v22 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
        v20 = CDesktopPositioner::EnsureViewIsInViewGroupForTabGroup(
                (CDesktopPositioner *)((char *)this - 40),
                v17,
                (const struct Windows::Internal::ComposableShell::Tabs::ShellTabGroupId *)v33,
                &v23,
                &v22);
        v10 = v20;
        if ( v20 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xB2,
            (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)(unsigned int)v20);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v26);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
          goto LABEL_23;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
        LODWORD(v25) = v25 + 1;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAE,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)TabGroupForView);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v26);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
      v10 = v19;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA9,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v15);
    }
LABEL_23:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    return v10;
  }
  return 0LL;
}
