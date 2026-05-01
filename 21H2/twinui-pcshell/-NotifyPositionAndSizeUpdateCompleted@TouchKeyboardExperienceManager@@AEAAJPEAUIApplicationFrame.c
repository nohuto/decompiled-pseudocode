/*
 * XREFs of ?NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@@Z @ 0x1803BC85C
 * Callers:
 *     _lambda_f61fa834658c673f1bf417ab36d33a49_::operator() @ 0x1800CFB3C (_lambda_f61fa834658c673f1bf417ab36d33a49_--operator().c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801ABF38 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV?$ComPtr@UIApplicationFrameWrapper@@@WRL@Microsoft@@@Z @ 0x1803B8C2C (-FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV-$ComPtr@UIApp.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@AEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x1803B8DBC (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@AEAV-$shared_pt.c)
 *     ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z @ 0x1803B8FB8 (-FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z.c)
 *     ?OnFramePositionAndSizeUpdateCompleted@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z @ 0x1803CE38C (-OnFramePositionAndSizeUpdateCompleted@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::NotifyPositionAndSizeUpdateCompleted(
        TouchKeyboardExperienceManager *this,
        struct IApplicationFrame *a2)
{
  int FrameWrapper; // eax
  unsigned int LastError; // ebx
  int ViewInfo; // eax
  __int64 v7; // rdx
  const char *v8; // r9
  std::_Ref_count_base *v9; // rsi
  struct IUnknown *v11; // [rsp+20h] [rbp-50h] BYREF
  HWND hWnd; // [rsp+28h] [rbp-48h] BYREF
  std::_Ref_count_base *v13[2]; // [rsp+30h] [rbp-40h] BYREF
  struct tagRECT v14; // [rsp+40h] [rbp-30h] BYREF
  struct tagRECT Rect; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v11 = 0LL;
  FrameWrapper = TouchKeyboardExperienceManager::FindFrameWrapper((RTL_SRWLOCK *)this, (__int64)a2, (__int64 *)&v11);
  LastError = FrameWrapper;
  if ( FrameWrapper < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x889,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)FrameWrapper);
    goto LABEL_17;
  }
  *(_OWORD *)v13 = 0LL;
  ViewInfo = TouchKeyboardExperienceManager::FindViewInfo((RTL_SRWLOCK *)this, v11, v13);
  LastError = ViewInfo;
  if ( ViewInfo < 0 )
  {
    v7 = 2187LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)ViewInfo);
    goto LABEL_15;
  }
  ViewInfo = (*(__int64 (__fastcall **)(struct IApplicationFrame *, HWND *))(*(_QWORD *)a2 + 40LL))(a2, &hWnd);
  LastError = ViewInfo;
  if ( ViewInfo < 0 )
  {
    v7 = 2189LL;
    goto LABEL_13;
  }
  Rect = 0LL;
  if ( !GetWindowRect(hWnd, &Rect) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x88F,
                  (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
                  v8);
    goto LABEL_15;
  }
  v9 = v13[0];
  ViewInfo = KeyboardHosting::TabTipAdapter::OnFramePositionAndSizeUpdateCompleted(
               *((KeyboardHosting::TabTipAdapter **)this + 86),
               *((_DWORD *)v13[0] + 26),
               &Rect);
  LastError = ViewInfo;
  if ( ViewInfo < 0 )
  {
    v7 = 2192LL;
    goto LABEL_13;
  }
  v14 = Rect;
  ViewInfo = TouchKeyboardExperienceManager::FireInputPaneShowingEvent(
               (KeyboardHosting::TabTipAdapter **)this,
               *((_DWORD *)v9 + 26),
               &v14);
  LastError = ViewInfo;
  if ( ViewInfo < 0 )
  {
    v7 = 2193LL;
    goto LABEL_13;
  }
  LastError = 0;
LABEL_15:
  if ( v13[1] )
    std::_Ref_count_base::_Decref(v13[1]);
LABEL_17:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  return LastError;
}
