/*
 * XREFs of ?CommitResize@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z @ 0x18048192C
 * Callers:
 *     ?OnKeyDown@AppResizeView@@UEAAJK@Z @ 0x180482400 (-OnKeyDown@AppResizeView@@UEAAJK@Z.c)
 *     ?OnPointerUp@AppResizeView@@UEAAJIPEAUtagPOINT@@@Z @ 0x180482520 (-OnPointerUp@AppResizeView@@UEAAJIPEAUtagPOINT@@@Z.c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x18000E758 (-IsPPIEdition@@YA_NXZ.c)
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x180010CEC (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$?9UIApplicationViewCollection@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UIApplicationViewCollection@@@01@$$T@Z @ 0x18008C408 (--$-9UIApplicationViewCollection@@@WRL@Microsoft@@YA_NAEBV-$ComPtr@UIApplicationViewCollection@@.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ @ 0x1800D5348 (-IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIAppLayoutBuilder@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIAppLayoutBuilder@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800D6ED0 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIAppLayoutBuilder@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?GetEvictedMeetingWindow@AppResizeView@@AEAAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800DA6AC (-GetEvictedMeetingWindow@AppResizeView@@AEAAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?SignalEvictedPPIWin32VTCWindow@AppResizeView@@AEAAJPEAUHWND__@@@Z @ 0x1800DA76C (-SignalEvictedPPIWin32VTCWindow@AppResizeView@@AEAAJPEAUHWND__@@@Z.c)
 *     ?SignalEvictedWindowForTabletMode@AppResizeView@@AEAAJPEAUHWND__@@@Z @ 0x1800DA7BC (-SignalEvictedWindowForTabletMode@AppResizeView@@AEAAJPEAUHWND__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x1801A7660 (--1-$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??B?$ComPtrRef@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x1801B7710 (--B-$ComPtrRef@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAUI.c)
 *     wil::details::ScopeExitFn__lambda_2f414e7590a7cfc0054ac9d9a62a1146___::_ScopeExitFn__lambda_2f414e7590a7cfc0054ac9d9a62a1146___ @ 0x1804815E4 (wil--details--ScopeExitFn__lambda_2f414e7590a7cfc0054ac9d9a62a1146___--_ScopeExitFn__lambda_2f41.c)
 *     ?QueryResizeApps@AppResizeView@@AEAAJW4ResizeDropLocation@@AEBUCPoint@Geometry@@PEAPEAUIAppLayoutOperation@@@Z @ 0x180482684 (-QueryResizeApps@AppResizeView@@AEAAJW4ResizeDropLocation@@AEBUCPoint@Geometry@@PEAPEAUIAppLayou.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall AppResizeView::CommitResize(AppResizeView *this, const struct Geometry::CPoint *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  HRESULT v6; // eax
  __int64 v7; // rdx
  enum _TABLETMODESTATE *v8; // rdx
  TabletModeHelpers *v9; // rcx
  _QWORD *v10; // rbx
  __int64 v11; // rdi
  __int64 *v12; // rax
  AppResizeView *v13; // rcx
  HWND EvictedMeetingWindow; // rbx
  AppResizeView *v15; // rcx
  int v16; // eax
  _QWORD *v17; // rbx
  __int64 v18; // rdi
  __int64 *v19; // rax
  struct IApplicationView *v20; // rbx
  __int64 (__fastcall **v21)(struct IApplicationView *, GUID *, __int64 *); // rdi
  __int64 *v22; // rax
  int v23; // eax
  __int64 v24; // rdx
  AppResizeView *v26; // rcx
  int v27; // eax
  struct IApplicationView *v28; // [rsp+20h] [rbp-29h] BYREF
  _QWORD *v29; // [rsp+28h] [rbp-21h] BYREF
  HWND v30; // [rsp+30h] [rbp-19h] BYREF
  unsigned int v31; // [rsp+38h] [rbp-11h] BYREF
  void *ppvOut; // [rsp+40h] [rbp-9h] BYREF
  __int64 v33; // [rsp+48h] [rbp-1h] BYREF
  _QWORD v34[2]; // [rsp+50h] [rbp+7h] BYREF
  char v35; // [rsp+60h] [rbp+17h]
  _BYTE v36[24]; // [rsp+68h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  if ( !*((_BYTE *)this + 96) )
  {
    *((_BYTE *)this + 96) = 1;
    v31 = *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 8) + 32LL))(
                       *((_QWORD *)this + 8),
                       v36);
    v34[0] = this;
    v34[1] = &v31;
    v35 = 1;
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 104LL))(*((_QWORD *)this + 7));
    v29 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v29);
    v4 = AppResizeView::QueryResizeApps(this, v31, a2, &v29);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x235,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
        (const char *)(unsigned int)v4);
LABEL_24:
      Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)&v29);
      wil::details::ScopeExitFn__lambda_2f414e7590a7cfc0054ac9d9a62a1146___::_ScopeExitFn__lambda_2f414e7590a7cfc0054ac9d9a62a1146___(v34);
      return v5;
    }
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    v6 = IUnknown_QueryService(
           *((IUnknown **)this + 2),
           &GUID_975d55f5_ce62_42c0_868a_eda817f3871e,
           &GUID_975d55f5_ce62_42c0_868a_eda817f3871e,
           &ppvOut);
    v5 = v6;
    if ( v6 < 0 )
    {
      v7 = 568LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
        (const char *)(unsigned int)v6);
LABEL_23:
      Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)&ppvOut);
      goto LABEL_24;
    }
    v6 = (*(__int64 (__fastcall **)(void *, _QWORD *))(*(_QWORD *)ppvOut + 88LL))(ppvOut, v29);
    v5 = v6;
    if ( v6 < 0 )
    {
      v7 = 569LL;
      goto LABEL_8;
    }
    if ( IsSurfaceHubWithWin32VtcEnabled() )
    {
      v28 = 0LL;
      v10 = v29;
      v30 = (HWND)&v28;
      v11 = *v29;
      v12 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IApplicationView>>::operator IApplicationView * *((__int64 **)&v30);
      (*(void (__fastcall **)(_QWORD *, __int64 *))(v11 + 112))(v10, v12);
      EvictedMeetingWindow = AppResizeView::GetEvictedMeetingWindow(v13, v28);
      if ( EvictedMeetingWindow )
      {
        if ( !(*(unsigned int (__fastcall **)(_QWORD, struct IApplicationView *))(**((_QWORD **)this + 9) + 184LL))(
                *((_QWORD *)this + 9),
                v28) )
        {
          v16 = AppResizeView::SignalEvictedPPIWin32VTCWindow(v15, EvictedMeetingWindow);
          if ( v16 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x242,
              (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
              (const char *)(unsigned int)v16);
        }
      }
      Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)&v28);
    }
    if ( TabletModeHelpers::IsTabletMode(v9, v8) && !IsPPIEdition() )
    {
      v28 = 0LL;
      v17 = v29;
      v30 = (HWND)&v28;
      v18 = *v29;
      v19 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IApplicationView>>::operator IApplicationView * *((__int64 **)&v30);
      (*(void (__fastcall **)(_QWORD *, __int64 *))(v18 + 112))(v17, v19);
      if ( Microsoft::WRL::operator!=<IApplicationViewCollection>(&v28) )
      {
        v33 = 0LL;
        v20 = v28;
        v21 = *(__int64 (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))v28;
        v22 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IAppLayoutBuilder>>(&v33);
        v23 = (*v21)(v20, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, v22);
        v5 = v23;
        if ( v23 < 0 )
        {
          v24 = 592LL;
LABEL_22:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v24,
            (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
            (const char *)(unsigned int)v23);
          Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>(&v33);
          Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)&v28);
          goto LABEL_23;
        }
        v30 = 0LL;
        v23 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v33 + 24LL))(v33, &v30);
        v5 = v23;
        if ( v23 < 0 )
        {
          v24 = 594LL;
          goto LABEL_22;
        }
        if ( !(*(unsigned int (__fastcall **)(_QWORD, struct IApplicationView *))(**((_QWORD **)this + 9) + 184LL))(
                *((_QWORD *)this + 9),
                v28) )
        {
          v27 = AppResizeView::SignalEvictedWindowForTabletMode(v26, v30);
          if ( v27 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x255,
              (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
              (const char *)(unsigned int)v27);
        }
        Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>(&v33);
      }
      Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)&v28);
    }
    Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)&ppvOut);
    Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)&v29);
    wil::details::ScopeExitFn__lambda_2f414e7590a7cfc0054ac9d9a62a1146___::_ScopeExitFn__lambda_2f414e7590a7cfc0054ac9d9a62a1146___(v34);
  }
  return 0LL;
}
