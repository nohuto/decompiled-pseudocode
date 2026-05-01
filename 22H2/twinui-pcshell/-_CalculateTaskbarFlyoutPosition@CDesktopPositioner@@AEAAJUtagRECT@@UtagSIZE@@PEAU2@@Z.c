/*
 * XREFs of ?_CalculateTaskbarFlyoutPosition@CDesktopPositioner@@AEAAJUtagRECT@@UtagSIZE@@PEAU2@@Z @ 0x18045E39C
 * Callers:
 *     ?_GetLaunchPositionForPeoplePane@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPosition@@@Z @ 0x18045F288 (-_GetLaunchPositionForPeoplePane@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicat.c)
 * Callees:
 *     ?_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z @ 0x18004DAE8 (-_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z.c)
 *     ?_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x18004E478 (-_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplication.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801ABD88 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMonitor@@PEAU3@@Z @ 0x18045ED68 (-_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMon.c)
 *     ?_GetEdgeUIPositionForMonitor@CDesktopPositioner@@AEAAJQEAUHMONITOR__@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x18045F0D0 (-_GetEdgeUIPositionForMonitor@CDesktopPositioner@@AEAAJQEAUHMONITOR__@@PEAUtagRECT@@PEAW4EDGEUI_.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDesktopPositioner::_CalculateTaskbarFlyoutPosition(
        CDesktopPositioner *this,
        LPCRECT lprc,
        struct tagSIZE a3,
        struct tagRECT *a4)
{
  HMONITOR v7; // r12
  int EdgeUIPositionForMonitor; // eax
  unsigned int LastError; // edi
  __int64 v10; // rsi
  __int64 (__fastcall *v11)(__int64, HMONITOR, __int64 *); // rdi
  int v12; // eax
  CDesktopPositioner *v13; // rcx
  int WorkAreaFromRect; // eax
  __int64 v15; // rdx
  const char *v16; // r9
  struct IApplicationViewTitlebarConfiguration *v18; // [rsp+40h] [rbp-49h] BYREF
  __int64 v19; // [rsp+48h] [rbp-41h] BYREF
  POINT anchorPoint; // [rsp+50h] [rbp-39h] BYREF
  _BYTE v21[8]; // [rsp+58h] [rbp-31h] BYREF
  SIZE windowSize; // [rsp+60h] [rbp-29h] BYREF
  RECT popupWindowPosition; // [rsp+68h] [rbp-21h] BYREF
  RECT excludeRect; // [rsp+78h] [rbp-11h] BYREF
  struct tagRECT v25; // [rsp+88h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  excludeRect = 0LL;
  v7 = MonitorFromRect(lprc, 1u);
  EdgeUIPositionForMonitor = CDesktopPositioner::_GetEdgeUIPositionForMonitor(
                               this,
                               v7,
                               &excludeRect,
                               (enum EDGEUI_TRAYSTUCKPLACE *)v21);
  LastError = EdgeUIPositionForMonitor;
  if ( EdgeUIPositionForMonitor >= 0 )
  {
    anchorPoint.x = (lprc->left + lprc->right) / 2;
    anchorPoint.y = (lprc->top + lprc->bottom) / 2;
    v19 = 0LL;
    v10 = *((_QWORD *)this + 30);
    v11 = *(__int64 (__fastcall **)(__int64, HMONITOR, __int64 *))(*(_QWORD *)v10 + 48LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    v12 = v11(v10, v7, &v19);
    LastError = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x66A,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v12);
LABEL_19:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
      return LastError;
    }
    v18 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
    WorkAreaFromRect = CDesktopPositioner::_CreateTitlebarConfiguration(v13, 0LL, &v18);
    LastError = WorkAreaFromRect;
    if ( WorkAreaFromRect >= 0 )
    {
      WorkAreaFromRect = (*(__int64 (__fastcall **)(_QWORD, struct tagSIZE, __int64, __int64, int, struct IApplicationViewTitlebarConfiguration *, SIZE *))(**((_QWORD **)this + 33) + 48LL))(
                           *((_QWORD *)this + 33),
                           a3,
                           v19,
                           1LL,
                           1,
                           v18,
                           &windowSize);
      LastError = WorkAreaFromRect;
      if ( WorkAreaFromRect >= 0 )
      {
        if ( !CalculatePopupWindowPosition(&anchorPoint, &windowSize, 0x10054u, &excludeRect, &popupWindowPosition) )
        {
          LastError = wil::details::in1diag3::Return_GetLastError(
                        retaddr,
                        (void *)0x677,
                        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
                        v16);
LABEL_18:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
          goto LABEL_19;
        }
        if ( (unsigned int)CDesktopPositioner::_FixRectForWorkArea(this, 1LL, &popupWindowPosition, 0LL) == -2147024809 )
        {
          WorkAreaFromRect = CDesktopPositioner::_GetWorkAreaFromRect(this, &popupWindowPosition, &v25);
          LastError = WorkAreaFromRect;
          if ( WorkAreaFromRect < 0 )
          {
            v15 = 1664LL;
            goto LABEL_16;
          }
          popupWindowPosition.top = v25.top;
          popupWindowPosition.bottom = v25.bottom;
          WorkAreaFromRect = CDesktopPositioner::_FixRectForWorkArea(this, 1LL, &popupWindowPosition, 0LL);
          LastError = WorkAreaFromRect;
          if ( WorkAreaFromRect < 0 )
          {
            v15 = 1669LL;
            goto LABEL_16;
          }
        }
        LastError = 0;
        goto LABEL_18;
      }
      v15 = 1650LL;
    }
    else
    {
      v15 = 1646LL;
    }
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)WorkAreaFromRect);
    goto LABEL_18;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x663,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)EdgeUIPositionForMonitor);
  return LastError;
}
