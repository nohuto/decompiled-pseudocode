/*
 * XREFs of ?OnInputAppActivated@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x1803CE59C
 * Callers:
 *     _lambda_d35354d926b4f7c0d2efe226c9ec2890_::operator() @ 0x1800CF84C (_lambda_d35354d926b4f7c0d2efe226c9ec2890_--operator().c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1803B6718 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRefl.c)
 *     ??1?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1803B71B8 (--1-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRefl.c)
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1803B870C (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_T.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1803C0AC0 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgR.c)
 *     ?ExecutePendingRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4PendingShowRequestExecutionReason@2@@Z @ 0x1803CC83C (-ExecutePendingRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4PendingShowRequestExecutionReason@2.c)
 *     ?StartActivity@InputAppActivated@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x1803D2BF4 (-StartActivity@InputAppActivated@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     ?OnInputAppActivated@TabTipAdapterPolicy@KeyboardHosting@@QEAAXXZ @ 0x1803D8B14 (-OnInputAppActivated@TabTipAdapterPolicy@KeyboardHosting@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall KeyboardHosting::TabTipAdapter::OnInputAppActivated(KeyboardHosting::TabTipAdapterPolicy **this)
{
  int v2; // eax
  int v3[2]; // [rsp+20h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]

  KeyboardHosting::TabTipAdapterPolicy::OnInputAppActivated(this[13]);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v3,
    (__int64)"InputAppActivated");
  *(_QWORD *)v3 = &TouchKeyboardExperienceTelemetryLogger::InputAppActivated::`vftable';
  TouchKeyboardExperienceTelemetryLogger::InputAppActivated::StartActivity((TouchKeyboardExperienceTelemetryLogger::InputAppActivated *)v3);
  v2 = KeyboardHosting::TabTipAdapter::ExecutePendingRequest((__int64)this, 1);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x5E8,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v2);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
    (__int64)v3,
    0);
  *(_QWORD *)v3 = &TouchKeyboardExperienceTelemetryLogger::InputAppActivated::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(v3);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)v3);
}
