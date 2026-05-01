/*
 * XREFs of ?OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x1803BDB60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180072488 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18008ABA8 (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_5fc35d1030d0241eeb48d222f7d22fe1___ @ 0x1800CE08C (Windows--Internal--ComTaskPool--QueueTask__lambda_5fc35d1030d0241eeb48d222f7d22fe1___.c)
 *     _lambda_5fc35d1030d0241eeb48d222f7d22fe1_::__lambda_5fc35d1030d0241eeb48d222f7d22fe1_ @ 0x1800CEA0C (_lambda_5fc35d1030d0241eeb48d222f7d22fe1_--__lambda_5fc35d1030d0241eeb48d222f7d22fe1_.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x1803B3DF4 (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1803B62EC (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgRe_ea_1803B62EC.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1803B63A0 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflecto_ea_1803B63A0.c)
 *     ??1OnApplicationFramePositionChanged@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1803B7188 (--1OnApplicationFramePositionChanged@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV?$ComPtr@UIApplicationFrameWrapper@@@WRL@Microsoft@@@Z @ 0x1803B895C (-FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV-$ComPtr@UIApp.c)
 *     ?StartActivity@OnApplicationFramePositionChanged@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x1803C017C (-StartActivity@OnApplicationFramePositionChanged@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::OnPositionChanged(
        TouchKeyboardExperienceManager *this,
        struct IApplicationFrame *a2)
{
  int FrameWrapper; // ebx
  __int64 *v5; // rax
  int v6; // eax
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v13; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v14; // [rsp+28h] [rbp-D8h] BYREF
  __int64 *v15; // [rsp+30h] [rbp-D0h] BYREF
  struct IApplicationFrame *v16; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v17[2]; // [rsp+48h] [rbp-B8h] BYREF
  void **v18; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v19[40]; // [rsp+190h] [rbp+90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+308h] [rbp+208h]

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v19,
    (__int64)"OnApplicationFramePositionChanged");
  v19[0] = &TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged::`vftable';
  TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged::StartActivity((TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged *)v19);
  v14 = 0LL;
  FrameWrapper = TouchKeyboardExperienceManager::FindFrameWrapper((RTL_SRWLOCK *)this - 15, (__int64)a2, &v14);
  if ( FrameWrapper < 0 )
    goto LABEL_10;
  v13 = 0LL;
  v15 = &v13;
  v5 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v15);
  v6 = Microsoft::WRL::AsWeak<TouchKeyboardExperienceManager>((__int64)this - 120, v5);
  FrameWrapper = v6;
  if ( v6 < 0 )
  {
    v7 = (unsigned int)v6;
    v8 = 1887LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)v7);
    goto LABEL_8;
  }
  v16 = a2;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(v17, &v13);
  v17[1] = (__int64)this - 120;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)&v18,
    (__int64)v19);
  v18 = &TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged::`vftable';
  FrameWrapper = Windows::Internal::ComTaskPool::QueueTask__lambda_5fc35d1030d0241eeb48d222f7d22fe1___(
                   v10,
                   v9,
                   *((_DWORD *)this + 173),
                   &v16);
  lambda_5fc35d1030d0241eeb48d222f7d22fe1_::__lambda_5fc35d1030d0241eeb48d222f7d22fe1_((__int64)&v16);
  if ( FrameWrapper < 0 )
  {
    v7 = (unsigned int)FrameWrapper;
    v8 = 1920LL;
    goto LABEL_6;
  }
  FrameWrapper = 0;
LABEL_8:
  v11 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
LABEL_10:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged::~OnApplicationFramePositionChanged((TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged *)v19);
  return (unsigned int)FrameWrapper;
}
