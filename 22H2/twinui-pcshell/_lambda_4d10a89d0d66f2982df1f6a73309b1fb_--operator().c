/*
 * XREFs of _lambda_4d10a89d0d66f2982df1f6a73309b1fb_::operator() @ 0x1800CEF88
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4d10a89d0d66f2982df1f6a73309b1fb___::Run @ 0x1800D1BA0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4d10a89d0d66f2982df1f6a73309b1fb___--Run.c)
 * Callees:
 *     ?UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ @ 0x18000C568 (-UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ.c)
 *     ?End@CExperienceManagerAnimationHelper@@QEAAJXZ @ 0x18000CD68 (-End@CExperienceManagerAnimationHelper@@QEAAJXZ.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x180016918 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x180049C48 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x180099524 (-ContinueOnCurrentThread@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_Tl.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800D1AE8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@QEAAX_.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?AnimateWindow@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUHWND__@@AEAVCExperienceManagerAnimationHelper@@_N@Z @ 0x1803B79F0 (-AnimateWindow@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUHWND__@@AE.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x1803B8A3C (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV-$shared_ptr@UKBViewInfo@@@std@@@Z.c)
 *     ?FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@QEAAXI@Z @ 0x1803B8BD8 (-FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@QEAAXI@Z.c)
 *     _anonymous_namespace_::IsAnimationEnabled @ 0x1803BB49C (_anonymous_namespace_--IsAnimationEnabled.c)
 *     ?IsAppDefaultView@KBViewInfo@@QEAA_NXZ @ 0x1803BB540 (-IsAppDefaultView@KBViewInfo@@QEAA_NXZ.c)
 *     ?NotifyCurrentVisibilityState@TouchKeyboardExperienceManager@@QEAAJI_N0@Z @ 0x1803BBEBC (-NotifyCurrentVisibilityState@TouchKeyboardExperienceManager@@QEAAJI_N0@Z.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1803C0714 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 *     ?TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x1803C36A0 (-TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 *     ?UnboostPriority@KBViewInfo@@QEAAXXZ @ 0x1803C3738 (-UnboostPriority@KBViewInfo@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_4d10a89d0d66f2982df1f6a73309b1fb_::operator()(unsigned int *a1)
{
  unsigned int *v2; // r15
  int v3; // eax
  unsigned int v4; // ebx
  int ViewInfo; // eax
  __int64 v6; // rdx
  KBViewInfo *v7; // rsi
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, __int64 *); // rbx
  int v10; // eax
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  TouchKeyboardExperienceManager *v15; // rcx
  bool IsAppDefaultView; // al
  __int64 v17; // rcx
  bool v18; // zf
  __int64 (__fastcall *v19)(__int64, __int64); // rax
  KBViewInfo *v21[2]; // [rsp+30h] [rbp-39h] BYREF
  _BYTE v22[128]; // [rsp+40h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  __int64 v24; // [rsp+D0h] [rbp+67h] BYREF
  struct IInspectable *v25; // [rsp+D8h] [rbp+6Fh] BYREF
  HWND v26; // [rsp+E0h] [rbp+77h] BYREF

  v2 = a1 + 6;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 6),
    (wil::ActivityThreadWatcher *)v22);
  v25 = 0LL;
  v3 = Microsoft::WRL::WeakRef::As<IInspectable>((Microsoft::WRL::WeakRef *)(a1 + 2), &v25);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2BD,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  if ( !v25 )
  {
    TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDestroyed();
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v2, 0LL);
    v4 = 0;
    goto LABEL_41;
  }
  *(_OWORD *)v21 = 0LL;
  ViewInfo = TouchKeyboardExperienceManager::FindViewInfo(*((_QWORD *)a1 + 2), *a1, v21);
  v4 = ViewInfo;
  if ( ViewInfo < 0 )
  {
    v6 = 711LL;
    goto LABEL_35;
  }
  v7 = v21[0];
  if ( *((_DWORD *)v21[0] + 35) == 1 && (unsigned __int8)anonymous_namespace_::IsAnimationEnabled() )
  {
    v24 = 0LL;
    v8 = *((_QWORD *)v7 + 1);
    v9 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 32LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
    v10 = v9(v8, &v24);
    v4 = v10;
    if ( v10 < 0 )
    {
      v11 = 716LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
      goto LABEL_39;
    }
    v10 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v24 + 24LL))(v24, &v26);
    v4 = v10;
    if ( v10 < 0 )
    {
      v11 = 718LL;
      goto LABEL_17;
    }
    v10 = TouchKeyboardExperienceManager::AnimateWindow(
            *((TouchKeyboardExperienceManager **)a1 + 2),
            *((struct IApplicationFrameWrapper **)v7 + 1),
            v26,
            (struct CExperienceManagerAnimationHelper *)(*((_QWORD *)a1 + 2) + 760LL),
            0);
    v4 = v10;
    if ( v10 < 0 )
    {
      v11 = 719LL;
      goto LABEL_17;
    }
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v7 + 1) + 40LL))(*((_QWORD *)v7 + 1), 1LL);
    v4 = v10;
    if ( v10 < 0 )
    {
      v11 = 720LL;
      goto LABEL_17;
    }
    *((_BYTE *)v7 + 34) = 1;
    v12 = CExperienceManagerAnimationHelper::End((CExperienceManagerAnimationHelper *)(*((_QWORD *)a1 + 2) + 760LL));
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2D4,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v12);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
  }
  else
  {
    ViewInfo = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v7 + 1) + 40LL))(*((_QWORD *)v7 + 1), 1LL);
    v4 = ViewInfo;
    if ( ViewInfo < 0 )
    {
      v6 = 728LL;
      goto LABEL_35;
    }
    *((_BYTE *)v7 + 34) = 1;
  }
  v15 = (TouchKeyboardExperienceManager *)*((_QWORD *)a1 + 2);
  if ( *((_DWORD *)v15 + 181) != 2 && *((_DWORD *)v15 + 180) == 2 )
    TouchKeyboardExperienceManager::FireInputPaneHidingEvent(v15, *a1);
  *(_OWORD *)((char *)v7 + 120) = 0LL;
  if ( !*((_BYTE *)a1 + 4)
    || (LOBYTE(v14) = 3,
        LOBYTE(v13) = 1,
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputAppConsumesUdk>::ReportUsage(
          &`wil::Feature<__WilFeatureTraits_Feature_InputAppConsumesUdk>::GetImpl'::`2'::impl,
          v13,
          v14),
        ViewInfo = TouchKeyboardExperienceManager::NotifyCurrentVisibilityState(
                     *((TouchKeyboardExperienceManager **)a1 + 2),
                     *(_DWORD *)(*((_QWORD *)a1 + 2) + 716LL),
                     0,
                     1),
        v4 = ViewInfo,
        ViewInfo >= 0) )
  {
    IsAppDefaultView = KBViewInfo::IsAppDefaultView(v7);
    v17 = *(_QWORD *)v7;
    v18 = !IsAppDefaultView;
    v19 = *(__int64 (__fastcall **)(__int64, __int64))(**(_QWORD **)v7 + 392LL);
    if ( v18 )
    {
      ViewInfo = v19(v17, 1LL);
      v4 = ViewInfo;
      if ( ViewInfo < 0 )
      {
        v6 = 768LL;
        goto LABEL_35;
      }
    }
    else
    {
      ViewInfo = v19(v17, 3LL);
      v4 = ViewInfo;
      if ( ViewInfo < 0 )
      {
        v6 = 762LL;
        goto LABEL_35;
      }
    }
    if ( *((_BYTE *)v7 + 138) )
    {
      SingleViewLightDismissHelper::UnregisterWithLightDismiss((SingleViewLightDismissHelper *)(*((_QWORD *)a1 + 2)
                                                                                              + 696LL));
      *(_DWORD *)(*((_QWORD *)a1 + 2) + 712LL) = -1;
    }
    KBViewInfo::UnboostPriority(v7);
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v2, 0LL);
    v4 = 0;
    goto LABEL_39;
  }
  v6 = 750LL;
LABEL_35:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)ViewInfo);
LABEL_39:
  if ( v21[1] )
    std::_Ref_count_base::_Decref(v21[1]);
LABEL_41:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v22);
  return v4;
}
