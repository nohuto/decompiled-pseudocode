/*
 * XREFs of ?StartActivity@PendingRequestExecuted@TouchKeyboardExperienceTelemetryLogger@@QEAAX_NW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@0I@Z @ 0x1803D343C
 * Callers:
 *     ?ExecutePendingRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4PendingShowRequestExecutionReason@2@@Z @ 0x1803CC83C (-ExecutePendingRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4PendingShowRequestExecutionReason@2.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001D8BC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002F6D0 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008EE40 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1803C6800 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     ?zInternalStart@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1803C6B1C (-zInternalStart@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAA.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::PendingRequestExecuted::StartActivity(
        __int64 a1,
        char a2,
        int a3,
        char a4,
        int a5)
{
  __int64 v9; // rcx
  _QWORD *v10; // rax
  _DWORD *v11; // rdi
  const GUID *v12; // rax
  const GUID *v13; // r8
  char v14; // [rsp+38h] [rbp-71h] BYREF
  char v15; // [rsp+39h] [rbp-70h] BYREF
  int v16; // [rsp+3Ch] [rbp-6Dh] BYREF
  int v17; // [rsp+40h] [rbp-69h] BYREF
  DWORD CurrentThreadId; // [rsp+44h] [rbp-65h] BYREF
  __int64 v19; // [rsp+48h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+58h] [rbp-51h] BYREF
  __int64 *v21; // [rsp+78h] [rbp-31h]
  int v22; // [rsp+80h] [rbp-29h]
  int v23; // [rsp+84h] [rbp-25h]
  DWORD *p_CurrentThreadId; // [rsp+88h] [rbp-21h]
  int v25; // [rsp+90h] [rbp-19h]
  int v26; // [rsp+94h] [rbp-15h]
  char *v27; // [rsp+98h] [rbp-11h]
  int v28; // [rsp+A0h] [rbp-9h]
  int v29; // [rsp+A4h] [rbp-5h]
  int *v30; // [rsp+A8h] [rbp-1h]
  int v31; // [rsp+B0h] [rbp+7h]
  int v32; // [rsp+B4h] [rbp+Bh]
  char *v33; // [rsp+B8h] [rbp+Fh]
  int v34; // [rsp+C0h] [rbp+17h]
  int v35; // [rsp+C4h] [rbp+1Bh]
  int *v36; // [rsp+C8h] [rbp+1Fh]
  int v37; // [rsp+D0h] [rbp+27h]
  int v38; // [rsp+D4h] [rbp+2Bh]

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(a1);
  v10 = wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
          v9,
          _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_);
  v11 = (_DWORD *)v10[1];
  if ( *v11 > 5u && tlgKeywordOn(v10[1], 0x400000000000LL) )
  {
    v16 = a5;
    v14 = a4;
    v17 = a3;
    v15 = a2;
    v19 = 0x1000000LL;
    CurrentThreadId = GetCurrentThreadId();
    v12 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(a1);
    v38 = 0;
    v35 = 0;
    v32 = 0;
    v29 = 0;
    v26 = 0;
    v23 = 0;
    v36 = &v16;
    v33 = &v14;
    v30 = &v17;
    v27 = &v15;
    p_CurrentThreadId = &CurrentThreadId;
    v21 = &v19;
    v37 = 4;
    v31 = 4;
    v25 = 4;
    v13 = (const GUID *)(*(_QWORD *)(a1 + 48) + 8LL);
    v34 = 1;
    v28 = 1;
    v22 = 8;
    tlgWriteTransfer_EventWriteTransfer((__int64)v11, (unsigned __int8 *)dword_180594741, v13, v12, 8u, &v20);
  }
  if ( !*(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
