/*
 * XREFs of _lambda_f041bb78b865ecfb9ab5fa4d5b43ebf6_::_lambda_f041bb78b865ecfb9ab5fa4d5b43ebf6_ @ 0x18014EAE0
 * Callers:
 *     ?WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x180015418 (-WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 * Callees:
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18001B940 (--0-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgRefle_ea_18001B940.c)
 *     ??0?$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@QEAA@AEBU0123@@Z @ 0x18008171C (--0-$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@QEAA@AEBU0123@@Z.c)
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18008ABA8 (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall lambda_f041bb78b865ecfb9ab5fa4d5b43ebf6_::_lambda_f041bb78b865ecfb9ab5fa4d5b43ebf6_(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(
    (__int64 *)a1,
    a2);
  *(_QWORD *)(a1 + 8) = a3;
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<bool>::AsyncOperationCompletedHandler<bool>(
    (__int64 *)(a1 + 16),
    a4);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)(a1 + 24),
    a5);
  *(_QWORD *)(a1 + 24) = &SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::`vftable';
  return a1;
}
