/*
 * XREFs of ?InsertApp@PPIWin32VtcLayoutOperation@@UEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z @ 0x1800D82A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18003F870 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180050E98 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18007D6B4 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??$PPIWin32Vtc_SideBarInserted@I@TabletModeTelemetry@@SAX$$QEAI@Z @ 0x1800D7754 (--$PPIWin32Vtc_SideBarInserted@I@TabletModeTelemetry@@SAX$$QEAI@Z.c)
 *     ?_FinalizeLayout@PPIWin32VtcLayoutOperation@@AEAAJW4APP_LAYOUT_INSERT_LOCATION@@@Z @ 0x1800D9160 (-_FinalizeLayout@PPIWin32VtcLayoutOperation@@AEAAJW4APP_LAYOUT_INSERT_LOCATION@@@Z.c)
 *     ?_QueryInsertAppToLayout@PPIWin32VtcLayoutOperation@@AEAAJPEAUIApplicationView@@W4APP_LAYOUT_INSERT_LOCATION@@@Z @ 0x1800D9BEC (-_QueryInsertAppToLayout@PPIWin32VtcLayoutOperation@@AEAAJPEAUIApplicationView@@W4APP_LAYOUT_INS.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x1801B74C0 (--1CThreadUseDetector@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PPIWin32VtcLayoutOperation::InsertApp(
        __int64 a1,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        char a3)
{
  __int64 v6; // rdi
  int InsertAppToLayout; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  int v10; // eax
  struct IApplicationView *v11; // rdx
  HWND WindowForView; // rax
  int v13; // eax
  __int64 v14; // rdx
  struct IApplicationView *v15; // rdx
  int v17[2]; // [rsp+20h] [rbp-28h] BYREF
  int v18; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v20; // [rsp+50h] [rbp+8h] BYREF
  ApplicationViewHelpers *v21; // [rsp+68h] [rbp+20h] BYREF

  v6 = a1 - 176;
  *(_QWORD *)v17 = (a1 + 16) & -(__int64)(a1 != 176);
  v18 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(*(__int64 *)v17, 1);
  InsertAppToLayout = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 48LL))(v6, 0LL);
  v8 = InsertAppToLayout;
  if ( InsertAppToLayout >= 0 )
  {
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 - 88), (__int64)a2);
    *(_DWORD *)(a1 - 72) = 1;
    if ( (a3 & 1) != 0 )
    {
      v10 = 65537;
    }
    else
    {
      *(_DWORD *)(a1 - 72) = 3;
      v10 = 65539;
    }
    if ( (a3 & 2) == 0 )
    {
      *(_DWORD *)(a1 - 72) = v10;
      if ( (a3 & 8) != 0 )
        *(_DWORD *)(a1 - 72) = v10 | 0x400000;
    }
    InsertAppToLayout = PPIWin32VtcLayoutOperation::_QueryInsertAppToLayout(v6, a2);
    v8 = InsertAppToLayout;
    if ( InsertAppToLayout < 0 )
    {
      v9 = 55LL;
      goto LABEL_11;
    }
    v21 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
    if ( (*(int (__fastcall **)(__int64, ApplicationViewHelpers **, _QWORD))(*(_QWORD *)v6 + 160LL))(v6, &v21, 0LL) < 0
      || (WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(
                                  (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v21,
                                  v11),
          GetPropA(WindowForView, "OVERRIDE_LAYOUT")) )
    {
      v13 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 192LL))(v6, 2LL);
      v8 = v13;
      if ( v13 < 0 )
      {
        v14 = 70LL;
        goto LABEL_18;
      }
    }
    else
    {
      v13 = PPIWin32VtcLayoutOperation::_FinalizeLayout(v6);
      v8 = v13;
      if ( v13 < 0 )
      {
        v14 = 65LL;
LABEL_18:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v14,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
          (const char *)(unsigned int)v13);
LABEL_22:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
        goto LABEL_23;
      }
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *)))(*(_QWORD *)v6 + 168LL))(
           v6,
           a2) )
    {
      v20 = ApplicationViewHelpers::GetWindowForView(a2, v15);
      TabletModeTelemetry::PPIWin32Vtc_SideBarInserted<unsigned int>(&v20);
    }
    v8 = 0;
    goto LABEL_22;
  }
  v9 = 36LL;
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
    (const char *)(unsigned int)InsertAppToLayout);
LABEL_23:
  CThreadUseDetector::~CThreadUseDetector((CThreadUseDetector *)v17);
  return v8;
}
