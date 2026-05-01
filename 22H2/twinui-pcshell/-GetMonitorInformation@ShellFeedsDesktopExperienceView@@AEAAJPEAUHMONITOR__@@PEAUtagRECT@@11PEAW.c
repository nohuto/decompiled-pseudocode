/*
 * XREFs of ?GetMonitorInformation@ShellFeedsDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N@Z @ 0x1800C2FFC
 * Callers:
 *     ?PositionShellFeedsWindow@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x1800C50CC (-PositionShellFeedsWindow@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?EnsureImmersiveShell@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x1800C265C (-EnsureImmersiveShell@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ShellFeedsDesktopExperienceView::GetMonitorInformation(
        ShellFeedsDesktopExperienceView *this,
        HMONITOR a2,
        struct tagRECT *a3,
        struct tagRECT *a4,
        struct tagRECT *a5,
        enum EDGEUI_TRAYSTUCKPLACE *a6,
        bool *a7)
{
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64, SID *, GUID *, __int64 *); // rbx
  int v15; // eax
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, HMONITOR, SID *, GUID *, int *); // rdi
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r9
  int v21; // r8d
  int v22; // r9d
  int v24[2]; // [rsp+30h] [rbp-81h] BYREF
  __int64 v25; // [rsp+38h] [rbp-79h] BYREF
  struct tagRECT v26; // [rsp+40h] [rbp-71h]
  RECT rcWork; // [rsp+50h] [rbp-61h]
  struct tagRECT *v28; // [rsp+60h] [rbp-51h]
  struct tagRECT v29; // [rsp+70h] [rbp-41h] BYREF
  struct tagMONITORINFO mi; // [rsp+80h] [rbp-31h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+47h]

  v28 = a5;
  v11 = ShellFeedsDesktopExperienceView::EnsureImmersiveShell(this);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v25 = 0LL;
    v13 = *((_QWORD *)this + 11);
    v14 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v13 + 24LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v25);
    v15 = v14(v13, &SID_IImmersiveMonitorService, &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2, &v25);
    v12 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4D8,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
        (const char *)(unsigned int)v15);
LABEL_29:
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v25);
      return v12;
    }
    *(_QWORD *)v24 = 0LL;
    v16 = v25;
    v17 = *(__int64 (__fastcall **)(__int64, HMONITOR, SID *, GUID *, int *))(*(_QWORD *)v25 + 72LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v24);
    v18 = v17(v16, a2, &SID_EdgeUi, &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e, v24);
    v12 = v18;
    if ( v18 >= 0 )
    {
      v18 = (*(__int64 (__fastcall **)(_QWORD, enum EDGEUI_TRAYSTUCKPLACE *))(**(_QWORD **)v24 + 80LL))(
              *(_QWORD *)v24,
              a6);
      v12 = v18;
      if ( v18 >= 0 )
      {
        mi.cbSize = 40;
        memset(&mi.rcMonitor, 0, 36);
        if ( !GetMonitorInfoW(a2, &mi) )
        {
          v12 = -2147418113;
          v20 = 2147549183LL;
          v19 = 1246LL;
LABEL_14:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v19,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
            (const char *)v20);
LABEL_28:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v24);
          goto LABEL_29;
        }
        *a3 = mi.rcMonitor;
        *a7 = mi.dwFlags == 1;
        v18 = (*(__int64 (__fastcall **)(_QWORD, struct tagRECT *))(**(_QWORD **)v24 + 112LL))(*(_QWORD *)v24, &v29);
        v12 = v18;
        if ( v18 >= 0 )
        {
          v21 = v29.right - v29.left;
          v22 = v29.bottom - v29.top;
          v26 = v29;
          rcWork = mi.rcWork;
          if ( *(_DWORD *)a6 )
          {
            if ( *(_DWORD *)a6 == 1 )
            {
              if ( v29.top < mi.rcMonitor.top )
              {
                v26.top = mi.rcMonitor.top;
                v26.bottom = v22 + mi.rcMonitor.top;
                rcWork.top = v22 + mi.rcMonitor.top;
              }
            }
            else if ( *(_DWORD *)a6 == 2 )
            {
              if ( v29.right > mi.rcMonitor.right )
              {
                v26.right = mi.rcMonitor.right;
                v26.left = mi.rcMonitor.right - v21;
                rcWork.right = mi.rcMonitor.right - v21;
              }
            }
            else if ( *(_DWORD *)a6 == 3 && v29.bottom > mi.rcMonitor.bottom )
            {
              v26.bottom = mi.rcMonitor.bottom;
              v26.top = mi.rcMonitor.bottom - v22;
              rcWork.bottom = mi.rcMonitor.bottom - v22;
            }
          }
          else if ( v29.left < mi.rcMonitor.left )
          {
            v26.left = mi.rcMonitor.left;
            v26.right = v21 + mi.rcMonitor.left;
            rcWork.left = v21 + mi.rcMonitor.left;
          }
          *a4 = rcWork;
          *v28 = v26;
          v12 = 0;
          goto LABEL_28;
        }
        v19 = 1253LL;
      }
      else
      {
        v19 = 1243LL;
      }
    }
    else
    {
      v19 = 1242LL;
    }
    v20 = (unsigned int)v18;
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4D6,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
    (const char *)(unsigned int)v11);
  return v12;
}
