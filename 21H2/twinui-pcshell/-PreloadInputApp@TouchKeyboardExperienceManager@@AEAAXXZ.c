/*
 * XREFs of ?PreloadInputApp@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803BED50
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1803BE940 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180072380 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180072488 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18008CD70 (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??B?$ComPtr@VTabTipAdapter@KeyboardHosting@@@WRL@Microsoft@@QEBAPEQBoolStruct@Details@12@HXZ @ 0x1800B15CC (--B-$ComPtr@VTabTipAdapter@KeyboardHosting@@@WRL@Microsoft@@QEBAPEQBoolStruct@Details@12@HXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_43e2ea7707e3cc3476f49dcfffc6812f___ @ 0x1800CE2E8 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_43e2ea7707e3cc3476f49dcfffc6812f___.c)
 *     _lambda_43e2ea7707e3cc3476f49dcfffc6812f_::_lambda_43e2ea7707e3cc3476f49dcfffc6812f_ @ 0x1800CE794 (_lambda_43e2ea7707e3cc3476f49dcfffc6812f_--_lambda_43e2ea7707e3cc3476f49dcfffc6812f_.c)
 *     _lambda_43e2ea7707e3cc3476f49dcfffc6812f_::__lambda_43e2ea7707e3cc3476f49dcfffc6812f_ @ 0x1800CE980 (_lambda_43e2ea7707e3cc3476f49dcfffc6812f_--__lambda_43e2ea7707e3cc3476f49dcfffc6812f_.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x1803B40C4 (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1803B6670 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflecto_ea_1803B6670.c)
 *     ??1OnPreloadInputAppActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1803B7534 (--1OnPreloadInputAppActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?StartActivity@OnPreloadInputAppActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x1803C0790 (-StartActivity@OnPreloadInputAppActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 */

void __fastcall TouchKeyboardExperienceManager::PreloadInputApp(TouchKeyboardExperienceManager *this)
{
  __int64 *v2; // rax
  int v3; // eax
  _QWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // ebx
  __int64 v9; // [rsp+20h] [rbp-E0h] BYREF
  __int64 *v10; // [rsp+28h] [rbp-D8h] BYREF
  TouchKeyboardExperienceManager *v11; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v12[40]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v13[336]; // [rsp+180h] [rbp+80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2E8h] [rbp+1E8h]

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v12,
    (__int64)"OnPreloadInputAppActivity");
  v12[0] = &TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity::`vftable';
  TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity::StartActivity((TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity *)v12);
  if ( (unsigned int)Microsoft::WRL::ComPtr<KeyboardHosting::TabTipAdapter>::operator int Microsoft::WRL::Details::BoolStruct::*((_QWORD *)this + 86) != -1 )
  {
    v11 = this;
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(&v9);
    v10 = &v9;
    v2 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v10);
    v3 = Microsoft::WRL::AsWeak<TouchKeyboardExperienceManager>((__int64)this, v2);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x387,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v3);
    v4 = (_QWORD *)lambda_43e2ea7707e3cc3476f49dcfffc6812f_::_lambda_43e2ea7707e3cc3476f49dcfffc6812f_(
                     (__int64)v13,
                     &v11,
                     &v9);
    v8 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_43e2ea7707e3cc3476f49dcfffc6812f___(v6, v5, v7, v4);
    lambda_43e2ea7707e3cc3476f49dcfffc6812f_::__lambda_43e2ea7707e3cc3476f49dcfffc6812f_((__int64)v13);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3A5,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
    Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)&v9);
  }
  TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity::~OnPreloadInputAppActivity((TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity *)v12);
}
