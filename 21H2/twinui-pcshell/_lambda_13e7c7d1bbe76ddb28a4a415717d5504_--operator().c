/*
 * XREFs of _lambda_13e7c7d1bbe76ddb28a4a415717d5504_::operator() @ 0x1800CEBC4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_13e7c7d1bbe76ddb28a4a415717d5504___::Run @ 0x1800D1BA0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_13e7c7d1bbe76ddb28a4a415717d5504___--Run.c)
 * Callees:
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x180016918 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x180049C48 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x180099544 (-ContinueOnCurrentThread@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_Tl.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?BoostPriority@KBViewInfo@@QEAAXXZ @ 0x1803B7EBC (-BoostPriority@KBViewInfo@@QEAAXXZ.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x1803B8D0C (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV-$shared_ptr@UKBViewInfo@@@std@@@Z.c)
 *     ?SetHostedPos@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUIApplicationFrame@@PEBUtagRECT@@@Z @ 0x1803BFAD4 (-SetHostedPos@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUIApplicatio.c)
 *     ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x1803BFE08 (-ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1803C09E4 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 *     ?TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x1803C3970 (-TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 *     ?UpdateBorder@TouchKeyboardExperienceManager@@AEAAJIW4ViewEffectKind@@@Z @ 0x1803C40A8 (-UpdateBorder@TouchKeyboardExperienceManager@@AEAAJIW4ViewEffectKind@@@Z.c)
 *     ?RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDismissNotification@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1804E6260 (-RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDi.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_13e7c7d1bbe76ddb28a4a415717d5504_::operator()(unsigned int *a1)
{
  unsigned int *v2; // r15
  int v3; // eax
  unsigned int v4; // ebx
  int ViewInfo; // eax
  KBViewInfo *v6; // r14
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, struct IApplicationFrame **); // rbx
  int v9; // eax
  TouchKeyboardExperienceManager *v10; // rcx
  __int64 v11; // rdx
  int updated; // eax
  int v13; // eax
  unsigned int v14; // ebx
  int v15; // eax
  std::_Ref_count_base *v17[2]; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v18[80]; // [rsp+30h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  struct IApplicationFrame *v20; // [rsp+B0h] [rbp+30h] BYREF
  struct IInspectable *v21; // [rsp+B8h] [rbp+38h] BYREF

  v2 = a1 + 14;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 14),
    (wil::ActivityThreadWatcher *)v18);
  v21 = 0LL;
  v3 = Microsoft::WRL::WeakRef::As<IInspectable>((Microsoft::WRL::WeakRef *)(a1 + 10), &v21);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x273,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  if ( !v21 )
  {
    TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDestroyed();
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v2, 0LL);
    v4 = 0;
    goto LABEL_30;
  }
  *(_OWORD *)v17 = 0LL;
  ViewInfo = TouchKeyboardExperienceManager::FindViewInfo(*((_QWORD *)a1 + 6), *a1, v17);
  v4 = ViewInfo;
  if ( ViewInfo < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27D,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)ViewInfo);
    goto LABEL_28;
  }
  v6 = v17[0];
  *(_OWORD *)((char *)v17[0] + 136) = *(_OWORD *)(a1 + 5);
  v20 = 0LL;
  v7 = *((_QWORD *)v6 + 1);
  v8 = *(__int64 (__fastcall **)(__int64, struct IApplicationFrame **))(*(_QWORD *)v7 + 32LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
  v9 = v8(v7, &v20);
  v4 = v9;
  if ( v9 >= 0 )
  {
    v9 = TouchKeyboardExperienceManager::SetHostedPos(
           v10,
           *((struct IApplicationFrameWrapper **)v6 + 1),
           v20,
           (const struct tagRECT *)(a1 + 1));
    v4 = v9;
    if ( v9 >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v6 + 2) + 32LL))(*((_QWORD *)v6 + 2), 0LL);
      v4 = v9;
      if ( v9 >= 0 )
      {
        v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v6 + 2) + 80LL))(*((_QWORD *)v6 + 2));
        v4 = v9;
        if ( v9 >= 0 )
        {
          updated = TouchKeyboardExperienceManager::UpdateBorder(*((_QWORD *)a1 + 6), *a1, a1[7]);
          if ( updated < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x286,
              (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
              (const char *)(unsigned int)updated);
          *(_OWORD *)((char *)v6 + 120) = *(_OWORD *)(a1 + 1);
          v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)v6 + 392LL))(*(_QWORD *)v6, 4LL);
          v4 = v9;
          if ( v9 >= 0 )
          {
            KBViewInfo::BoostPriority(v6);
            v13 = TouchKeyboardExperienceManager::ShowView(*((TouchKeyboardExperienceManager **)a1 + 6), v6);
            v14 = v13;
            if ( v13 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x292,
                (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
                (const char *)(unsigned int)v13);
            if ( *((_BYTE *)a1 + 22) )
            {
              v15 = SingleViewLightDismissHelper::RegisterWithLightDismiss(
                      *((_QWORD *)a1 + 6) + 696LL,
                      1026LL,
                      (*((_QWORD *)a1 + 6) + 168LL) & -(__int64)(*((_QWORD *)a1 + 6) != 0LL),
                      *(_QWORD *)v6);
              if ( v15 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x297,
                  (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
                  (const char *)(unsigned int)v15);
              *(_DWORD *)(*((_QWORD *)a1 + 6) + 712LL) = *a1;
            }
            wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
              v2,
              v14);
            v4 = 0;
            goto LABEL_27;
          }
          v11 = 650LL;
        }
        else
        {
          v11 = 644LL;
        }
      }
      else
      {
        v11 = 643LL;
      }
    }
    else
    {
      v11 = 642LL;
    }
  }
  else
  {
    v11 = 641LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v9);
LABEL_27:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
LABEL_28:
  if ( v17[1] )
    std::_Ref_count_base::_Decref(v17[1]);
LABEL_30:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v18);
  return v4;
}
