/*
 * XREFs of ?ShouldHandleActivation@FullScreenPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18002AC10
 * Callers:
 *     <none>
 * Callees:
 *     ?IsFullScreenCompatQuirkedApp@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18002A968 (-IsFullScreenCompatQuirkedApp@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?GetCoreWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18002AB00 (-GetCoreWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ??$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAI@Z1@Z @ 0x18002AFE0 (--$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x18002B280 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_RespectEdgeAllowFullScreenPolicy@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18009A0E0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_RespectEdgeAllowFullScreenPolicy@@@detail.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1801BED68 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall FullScreenPositioner::ShouldHandleActivation(
        FullScreenPositioner *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        struct IUnknown *a3)
{
  __int64 v6; // rdx
  struct IApplicationView *v7; // rdx
  HWND CoreWindowForView; // rax
  PositionerPropertySetHelpers *v9; // rcx
  int DetailsForActivation; // eax
  struct IApplicationView *v11; // rdx
  unsigned int lpVtbl; // ebx
  __int64 v13; // rcx
  int v14; // eax
  HRESULT v15; // eax
  int v16; // edx
  __int64 v17; // r8
  int v18; // eax
  bool v19; // di
  __int64 v20; // rcx
  __int64 v21; // rcx
  struct IUnknown v23; // [rsp+20h] [rbp-50h] BYREF
  __int64 v24; // [rsp+28h] [rbp-48h] BYREF
  __int64 v25; // [rsp+30h] [rbp-40h] BYREF
  __int64 v26; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER pv; // [rsp+40h] [rbp-30h] BYREF
  HSTRING string; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v25 = 0LL;
  if ( (int)(**a2)((ApplicationViewHelpers *)a2, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, &v25) < 0 )
    goto LABEL_34;
  LOBYTE(v6) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_RespectEdgeAllowFullScreenPolicy>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_RespectEdgeAllowFullScreenPolicy>::GetImpl'::`2'::impl,
    v6);
  CoreWindowForView = (HWND)ApplicationViewHelpers::GetCoreWindowForView(a2, v7);
  if ( GetPropW(CoreWindowForView, L"Windows.ImmersiveShell.DisableFullScreenMode") )
    goto LABEL_34;
  DetailsForActivation = PositionerPropertySetHelpers::GetDetailsForActivation(
                           v9,
                           (struct IApplicationView *)a3,
                           &v23,
                           0LL,
                           (struct PositionerPropertySetHelpers::ViewSizePreferences *)v23.lpVtbl);
  if ( DetailsForActivation < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1A7,
      (unsigned int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
      (const char *)(unsigned int)DetailsForActivation,
      (int)v23.lpVtbl);
  if ( ((__int64)v23.lpVtbl & 0x10) != 0 )
  {
LABEL_34:
    lpVtbl = 0;
    goto LABEL_31;
  }
  if ( FullScreenPositionerHelpers::IsFullScreenCompatQuirkedApp((FullScreenPositionerHelpers *)a2, v11) )
  {
    lpVtbl = 1;
  }
  else
  {
    lpVtbl = 0;
    pv.Reserved.Reserved1 = 0LL;
    *(_QWORD *)&pv.Reserved.Reserved2[8] = -1LL;
    *(_QWORD *)&pv.Reserved.Reserved2[16] = -1LL;
    if ( ((int (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), HSTRING_HEADER *))(*a2)[17])(
           a2,
           &pv) >= 0
      && (*(int (__fastcall **)(_QWORD, PVOID, struct IUnknown *))(**((_QWORD **)this + 19) + 24LL))(
           *((_QWORD *)this + 19),
           pv.Reserved.Reserved1,
           &v23) >= 0 )
    {
      LOBYTE(lpVtbl) = LODWORD(v23.lpVtbl) == 2;
    }
    if ( pv.Reserved.Reserved1 )
      CoTaskMemFree(pv.Reserved.Reserved1);
    if ( !lpVtbl )
    {
      v24 = 0LL;
      if ( ((int (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), __int64 *))(*a2)[33])(
             a2,
             &v24) >= 0 )
        LOBYTE(lpVtbl) = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v24 + 24LL))(v24) == 3;
      v13 = v24;
      if ( v24 )
      {
        v24 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
    }
  }
  if ( a3 && !lpVtbl )
  {
    v24 = 0LL;
    v14 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a3->lpVtbl->QueryInterface)(
            a3,
            &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
            &v24);
    lpVtbl = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D1,
        (unsigned int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
        (const char *)(unsigned int)v14,
        (int)v23.lpVtbl);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
      goto LABEL_31;
    }
    v26 = v24;
    if ( v24 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
    string = 0LL;
    v15 = WindowsCreateStringReference(L"ViewModePreferences.PresenterMode", 0x21u, &pv, &string);
    if ( v15 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v15, v16, v17);
    }
    else
    {
      v18 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v26, string, v17, &v23);
      v19 = v18 >= 0;
      string = 0LL;
      lpVtbl = 0;
      if ( v18 >= 0 )
        lpVtbl = (unsigned int)v23.lpVtbl;
      if ( v26 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
      if ( !v19 )
        goto LABEL_28;
    }
    if ( lpVtbl == 2 )
    {
      lpVtbl = 1;
LABEL_29:
      v20 = v24;
      if ( v24 )
      {
        v24 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
      goto LABEL_31;
    }
LABEL_28:
    lpVtbl = 0;
    goto LABEL_29;
  }
LABEL_31:
  v21 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  return lpVtbl;
}
