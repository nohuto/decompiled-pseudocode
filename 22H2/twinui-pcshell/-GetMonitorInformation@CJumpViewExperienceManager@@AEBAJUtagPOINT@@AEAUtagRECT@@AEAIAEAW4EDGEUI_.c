/*
 * XREFs of ?GetMonitorInformation@CJumpViewExperienceManager@@AEBAJUtagPOINT@@AEAUtagRECT@@AEAIAEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x18024751C
 * Callers:
 *     ?EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180246BF4 (-EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801ABD88 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CJumpViewExperienceManager::GetMonitorInformation(
        CJumpViewExperienceManager *this,
        POINT a2,
        struct tagRECT *a3,
        unsigned int *a4,
        enum EDGEUI_TRAYSTUCKPLACE *a5)
{
  HMONITOR v8; // rsi
  const char *v9; // r9
  __int64 v10; // rdx
  int DpiForMonitor; // eax
  unsigned int v13; // ebx
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, HMONITOR, SID *, GUID *, int *); // rbx
  int v16; // eax
  __int64 v17; // rdx
  int v18[2]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v19[8]; // [rsp+38h] [rbp-40h] BYREF
  struct tagMONITORINFO mi; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+30h]

  v8 = MonitorFromPoint(a2, 2u);
  if ( v8 == (HMONITOR)-1LL )
  {
    v10 = 806LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v10,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
             v9);
  }
  mi.cbSize = 40;
  memset(&mi.rcMonitor, 0, 36);
  if ( !GetMonitorInfoW(v8, &mi) )
  {
    v10 = 809LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v10,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
             v9);
  }
  *a3 = mi.rcWork;
  DpiForMonitor = GetDpiForMonitor(v8, 0LL, a4, v19);
  v13 = DpiForMonitor;
  if ( DpiForMonitor >= 0 )
  {
    *(_QWORD *)v18 = 0LL;
    v14 = *((_QWORD *)this + 48);
    v15 = *(__int64 (__fastcall **)(__int64, HMONITOR, SID *, GUID *, int *))(*(_QWORD *)v14 + 72LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v18);
    v16 = v15(v14, v8, &SID_EdgeUi, &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e, v18);
    v13 = v16;
    if ( v16 >= 0 )
    {
      v16 = (*(__int64 (__fastcall **)(_QWORD, enum EDGEUI_TRAYSTUCKPLACE *))(**(_QWORD **)v18 + 80LL))(
              *(_QWORD *)v18,
              a5);
      v13 = v16;
      if ( v16 >= 0 )
      {
        v13 = 0;
        goto LABEL_14;
      }
      v17 = 817LL;
    }
    else
    {
      v17 = 816LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)v16);
LABEL_14:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v18);
    return v13;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x32D,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
    (const char *)(unsigned int)DpiForMonitor);
  return v13;
}
