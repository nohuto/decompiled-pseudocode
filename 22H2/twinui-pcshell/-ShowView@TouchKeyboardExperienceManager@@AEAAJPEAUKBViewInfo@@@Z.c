/*
 * XREFs of ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x1803BFB38
 * Callers:
 *     _lambda_13e7c7d1bbe76ddb28a4a415717d5504_::operator() @ 0x1800CEBA4 (_lambda_13e7c7d1bbe76ddb28a4a415717d5504_--operator().c)
 * Callees:
 *     ?End@CExperienceManagerAnimationHelper@@QEAAJXZ @ 0x18000CD68 (-End@CExperienceManagerAnimationHelper@@QEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801ABD88 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?AnimateWindow@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUHWND__@@AEAVCExperienceManagerAnimationHelper@@_N@Z @ 0x1803B79F0 (-AnimateWindow@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUHWND__@@AE.c)
 *     ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z @ 0x1803B8CE8 (-FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z.c)
 *     _anonymous_namespace_::IsAnimationEnabled @ 0x1803BB49C (_anonymous_namespace_--IsAnimationEnabled.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::ShowView(
        KeyboardHosting::TabTipAdapter **this,
        struct KBViewInfo *a2)
{
  int v4; // eax
  unsigned int LastError; // ebx
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, __int64 *); // rbx
  int v8; // eax
  __int64 v9; // rdx
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  const char *v14; // r9
  struct tagRECT v16; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v18; // [rsp+88h] [rbp+38h] BYREF
  HWND hWnd; // [rsp+90h] [rbp+40h] BYREF

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 1) + 112LL))(*((_QWORD *)a2 + 1));
  LastError = v4;
  if ( v4 >= 0 )
  {
    v18 = 0LL;
    v6 = *((_QWORD *)a2 + 1);
    v7 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 32LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    v8 = v7(v6, &v18);
    LastError = v8;
    if ( v8 < 0 )
    {
      v9 = 2504LL;
LABEL_26:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
LABEL_32:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
      return LastError;
    }
    if ( !*((_BYTE *)a2 + 34) )
    {
      v16 = *(struct tagRECT *)((char *)a2 + 120);
      v10 = TouchKeyboardExperienceManager::FireInputPaneShowingEvent(this, *((_DWORD *)a2 + 26), &v16);
      v11 = retaddr;
      if ( v10 >= 0 )
        goto LABEL_23;
      v12 = 2536LL;
      goto LABEL_22;
    }
    if ( *((_DWORD *)a2 + 35) == 1 && anonymous_namespace_::IsAnimationEnabled() )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v18 + 24LL))(v18, &hWnd);
      LastError = v8;
      if ( v8 < 0 )
      {
        v9 = 2512LL;
        goto LABEL_26;
      }
      v8 = TouchKeyboardExperienceManager::AnimateWindow(
             (TouchKeyboardExperienceManager *)this,
             *((struct IApplicationFrameWrapper **)a2 + 1),
             hWnd,
             (struct CExperienceManagerAnimationHelper *)(this + 91),
             1);
      LastError = v8;
      if ( v8 < 0 )
      {
        v9 = 2513LL;
        goto LABEL_26;
      }
      v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)a2 + 1) + 40LL))(*((_QWORD *)a2 + 1), 0LL);
      LastError = v8;
      if ( v8 < 0 )
      {
        v9 = 2516LL;
        goto LABEL_26;
      }
      *((_BYTE *)a2 + 34) = 0;
      v10 = CExperienceManagerAnimationHelper::End((CExperienceManagerAnimationHelper *)(this + 91));
      v11 = retaddr;
      if ( v10 < 0 )
      {
        v12 = 2522LL;
LABEL_22:
        wil::details::in1diag3::_Log_Hr(
          v11,
          (void *)v12,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v10);
      }
    }
    else
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)a2 + 1) + 40LL))(*((_QWORD *)a2 + 1), 0LL);
      LastError = v8;
      if ( v8 < 0 )
      {
        v9 = 2527LL;
        goto LABEL_26;
      }
      *((_BYTE *)a2 + 34) = 0;
      v16 = *(struct tagRECT *)((char *)a2 + 120);
      v10 = TouchKeyboardExperienceManager::FireInputPaneShowingEvent(this, *((_DWORD *)a2 + 26), &v16);
      v11 = retaddr;
      if ( v10 < 0 )
      {
        v12 = 2529LL;
        goto LABEL_22;
      }
    }
LABEL_23:
    if ( *((_DWORD *)a2 + 37) )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v18 + 24LL))(v18, &hWnd);
      LastError = v8;
      if ( v8 < 0 )
      {
        v9 = 2543LL;
        goto LABEL_26;
      }
      v13 = -1LL;
      if ( *((_DWORD *)a2 + 37) != 1 )
        v13 = 1LL;
      if ( !SetWindowPos(hWnd, (HWND)v13, 0, 0, 0, 0, 3u) )
      {
        LastError = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)0x9F1,
                      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
                      v14);
        goto LABEL_32;
      }
    }
    LastError = 0;
    goto LABEL_32;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x9C5,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
  return LastError;
}
