/*
 * XREFs of _lambda_13e7c7d1bbe76ddb28a4a415717d5504_::_lambda_13e7c7d1bbe76ddb28a4a415717d5504_ @ 0x1800CE708
 * Callers:
 *     ?OnInputAppRequestedShow@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@UViewOptions@@@Z @ 0x1803BD824 (-OnInputAppRequestedShow@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@UViewOptions@@@Z.c)
 * Callees:
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18008ABA8 (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1803B62EC (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgRe_ea_1803B62EC.c)
 */

__int64 __fastcall lambda_13e7c7d1bbe76ddb28a4a415717d5504_::_lambda_13e7c7d1bbe76ddb28a4a415717d5504_(
        __int64 a1,
        _DWORD *a2,
        _OWORD *a3,
        _OWORD *a4,
        __int64 *a5,
        _QWORD *a6)
{
  *(_DWORD *)a1 = *a2;
  *(_OWORD *)(a1 + 4) = *a3;
  *(_OWORD *)(a1 + 20) = *a4;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(
    (__int64 *)(a1 + 40),
    a5);
  *(_QWORD *)(a1 + 48) = *a6;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)(a1 + 56));
  *(_QWORD *)(a1 + 56) = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity_Queued::`vftable';
  return a1;
}
