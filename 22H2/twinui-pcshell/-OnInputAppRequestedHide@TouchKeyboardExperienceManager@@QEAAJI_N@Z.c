/*
 * XREFs of ?OnInputAppRequestedHide@TouchKeyboardExperienceManager@@QEAAJI_N@Z @ 0x1803BD56C
 * Callers:
 *     ?OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedHideEventArgs@45678@@Z @ 0x1803CE830 (-OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 *     ?OnPrimaryViewHidingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerPrimaryViewHidingResponseEventArgs@45678@@Z @ 0x1803CF9A0 (-OnPrimaryViewHidingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@T.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180072380 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180072488 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_4d10a89d0d66f2982df1f6a73309b1fb___ @ 0x1800CDEDC (Windows--Internal--ComTaskPool--QueueTask__lambda_4d10a89d0d66f2982df1f6a73309b1fb___.c)
 *     _lambda_4d10a89d0d66f2982df1f6a73309b1fb_::_lambda_4d10a89d0d66f2982df1f6a73309b1fb_ @ 0x1800CE7CC (_lambda_4d10a89d0d66f2982df1f6a73309b1fb_--_lambda_4d10a89d0d66f2982df1f6a73309b1fb_.c)
 *     _lambda_4d10a89d0d66f2982df1f6a73309b1fb_::__lambda_4d10a89d0d66f2982df1f6a73309b1fb_ @ 0x1800CE988 (_lambda_4d10a89d0d66f2982df1f6a73309b1fb_--__lambda_4d10a89d0d66f2982df1f6a73309b1fb_.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x1803B3DF4 (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1803B63A0 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflecto_ea_1803B63A0.c)
 *     ??1OnInputAppRequestedHideActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1803B71B4 (--1OnInputAppRequestedHideActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?StartActivity@OnInputAppRequestedHideActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAAXI@Z @ 0x1803C0210 (-StartActivity@OnInputAppRequestedHideActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QE.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::OnInputAppRequestedHide(
        TouchKeyboardExperienceManager *this,
        unsigned int a2,
        char a3)
{
  __int64 *v5; // rax
  int v6; // eax
  int v7; // ebx
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _BYTE v14[8]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v15; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  int v17[2]; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v18[40]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v19[336]; // [rsp+190h] [rbp+90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+308h] [rbp+208h]

  v15 = a2;
  v14[0] = a3;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v18,
    (__int64)"OnInputAppRequestedHideActivity_Queued");
  v18[0] = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity_Queued::`vftable';
  TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity_Queued::StartActivity(
    (TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity_Queued *)v18,
    a2);
  if ( a2 == *((_DWORD *)this + 179) )
    *((_DWORD *)this + 180) = 2;
  v16 = 0LL;
  *(_QWORD *)v17 = &v16;
  v5 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)v17);
  v6 = Microsoft::WRL::AsWeak<TouchKeyboardExperienceManager>((__int64)this, v5);
  v7 = v6;
  if ( v6 >= 0 )
  {
    *(_QWORD *)v17 = this;
    v10 = lambda_4d10a89d0d66f2982df1f6a73309b1fb_::_lambda_4d10a89d0d66f2982df1f6a73309b1fb_(
            (__int64)v19,
            &v15,
            v14,
            &v16,
            v17);
    v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_4d10a89d0d66f2982df1f6a73309b1fb___(
           v12,
           v11,
           *((_DWORD *)this + 203),
           v10);
    lambda_4d10a89d0d66f2982df1f6a73309b1fb_::__lambda_4d10a89d0d66f2982df1f6a73309b1fb_((__int64)v19);
    if ( v7 >= 0 )
    {
      v7 = 0;
      goto LABEL_9;
    }
    v8 = (unsigned int)v7;
    v9 = 785LL;
  }
  else
  {
    v8 = (unsigned int)v6;
    v9 = 694LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)v8);
LABEL_9:
  Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)&v16);
  TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity_Queued::~OnInputAppRequestedHideActivity_Queued((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity_Queued *)v18);
  return (unsigned int)v7;
}
