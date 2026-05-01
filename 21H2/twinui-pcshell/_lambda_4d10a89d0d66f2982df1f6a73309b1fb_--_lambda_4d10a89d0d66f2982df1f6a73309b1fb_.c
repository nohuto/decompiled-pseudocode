/*
 * XREFs of _lambda_4d10a89d0d66f2982df1f6a73309b1fb_::_lambda_4d10a89d0d66f2982df1f6a73309b1fb_ @ 0x1800CE7EC
 * Callers:
 *     ?OnInputAppRequestedHide@TouchKeyboardExperienceManager@@QEAAJI_N@Z @ 0x1803BD83C (-OnInputAppRequestedHide@TouchKeyboardExperienceManager@@QEAAJI_N@Z.c)
 * Callees:
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18008ABA8 (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1803B65BC (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgRe_ea_1803B65BC.c)
 */

__int64 __fastcall lambda_4d10a89d0d66f2982df1f6a73309b1fb_::_lambda_4d10a89d0d66f2982df1f6a73309b1fb_(
        __int64 a1,
        _DWORD *a2,
        _BYTE *a3,
        __int64 *a4,
        _QWORD *a5)
{
  *(_DWORD *)a1 = *a2;
  *(_BYTE *)(a1 + 4) = *a3;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(
    (__int64 *)(a1 + 8),
    a4);
  *(_QWORD *)(a1 + 16) = *a5;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)(a1 + 24));
  *(_QWORD *)(a1 + 24) = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity_Queued::`vftable';
  return a1;
}
