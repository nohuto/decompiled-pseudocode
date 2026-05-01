/*
 * XREFs of ?_AddViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z @ 0x180401190
 * Callers:
 *     ?OnApplicationViewChanged@SwitchItemCollection@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180400960 (-OnApplicationViewChanged@SwitchItemCollection@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CH.c)
 *     ?UpdateTabSelection@SwitchItemCollection@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1804010CC (-UpdateTabSelection@SwitchItemCollection@@AEAAJPEAUIApplicationView@@_N@Z.c)
 *     ?_AddViews@SwitchItemCollection@@AEAAJPEAUIObjectArray@@@Z @ 0x180401390 (-_AddViews@SwitchItemCollection@@AEAAJPEAUIObjectArray@@@Z.c)
 *     ?_UpdateShowInSwitchers@SwitchItemCollection@@AEAAJPEAUIApplicationView@@_N@Z @ 0x180401618 (-_UpdateShowInSwitchers@SwitchItemCollection@@AEAAJPEAUIApplicationView@@_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsApplicationViewHolographic@HolographicViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x180086274 (-IsApplicationViewHolographic@HolographicViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?IsSideBarView@PPISideBarHelpers@@SA_NPEAUIApplicationView@@@Z @ 0x1800D523C (-IsSideBarView@PPISideBarHelpers@@SA_NPEAUIApplicationView@@@Z.c)
 *     ?IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ @ 0x1800D5348 (-IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ.c)
 *     ?IsVtcAppSharingToolBar@PPISideBarHelpers@@SA_NPEAUIApplicationView@@@Z @ 0x1800D5354 (-IsVtcAppSharingToolBar@PPISideBarHelpers@@SA_NPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x1801A7660 (--1-$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HolographicDesktopMultitaskingUXHiding@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803AF2A0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_HolographicDesktopMultitaskingUXHiding@@@.c)
 *     ?IsIncludedTab@SwitchItemCollection@@AEAA_NPEAUIApplicationView@@@Z @ 0x1804008AC (-IsIncludedTab@SwitchItemCollection@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?_AddItem@ObservableObjectArray@@IEAAJAEBV?$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4ObservableArrayOperation@@@Z @ 0x18040E620 (-_AddItem@ObservableObjectArray@@IEAAJAEBV-$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4Observabl.c)
 */

__int64 __fastcall SwitchItemCollection::_AddViewItem(SwitchItemCollection *this, struct IApplicationView *a2)
{
  unsigned int v3; // edi
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // r8
  int v8; // ebx
  struct IApplicationView *v9; // rdx
  unsigned int v10; // esi
  __int64 v11; // rbx
  int v12; // ebx
  __int64 v13; // rdx
  int v15[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v16; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  int v18; // [rsp+78h] [rbp+38h] BYREF
  int v19; // [rsp+80h] [rbp+40h] BYREF
  __int64 v20; // [rsp+88h] [rbp+48h] BYREF

  v3 = 0;
  v16 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  if ( (**(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2)(
         a2,
         &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b,
         &v16) >= 0 )
  {
    v5 = v16;
    v20 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
    if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 24LL))(v5, &v20) < 0
      || (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v20 + 56LL))(v20, &v18) < 0
      || !v18 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
      goto LABEL_23;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
  }
  v6 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 216LL))(a2, &v19);
  v8 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCB,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemcollection.cpp",
      (const char *)(unsigned int)v6);
    v3 = v8;
    goto LABEL_23;
  }
  if ( v19 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_HolographicDesktopMultitaskingUXHiding>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_HolographicDesktopMultitaskingUXHiding>::GetImpl'::`2'::impl,
      1u,
      v7);
    if ( !HolographicViewHelpers::IsApplicationViewHolographic(a2, v9)
      && (!IsSurfaceHubWithWin32VtcEnabled()
       || !PPISideBarHelpers::IsSideBarView(a2) && !PPISideBarHelpers::IsVtcAppSharingToolBar(a2)) )
    {
      v10 = 0;
      if ( *((_QWORD *)this + 27) )
      {
        if ( !SwitchItemCollection::IsIncludedTab(this, a2) )
          goto LABEL_23;
        v10 = (*((_DWORD *)this + 62) != 0) + 1;
      }
      v11 = *((_QWORD *)this + 26);
      *(_QWORD *)v15 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v15);
      v12 = (*(__int64 (__fastcall **)(__int64, struct IApplicationView *, _QWORD, GUID *, int *))(*(_QWORD *)v11 + 24LL))(
              v11,
              a2,
              v10,
              &GUID_f6f4d0ff_fce6_40ef_a647_2738c4375c27,
              v15);
      if ( v12 >= 0 )
      {
        v12 = ObservableObjectArray::_AddItem((char *)this + 8, v15, 0LL);
        if ( v12 >= 0 )
        {
LABEL_22:
          v3 = v12;
          Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)v15);
          goto LABEL_23;
        }
        v13 = 248LL;
      }
      else
      {
        v13 = 247LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemcollection.cpp",
        (const char *)(unsigned int)v12);
      goto LABEL_22;
    }
  }
LABEL_23:
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>(&v16);
  return v3;
}
