/*
 * XREFs of ??0_lambda_06451eacb7a8912ae3302a5615ee0eb8_@@QEAA@AEBV?$shared_ptr@VPinRequestContext@@@std@@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@AEBVPinManagerPinItemToTaskbarShim@PinManagerTelemetry@@@Z @ 0x180134C34
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$2_PinManagerTelemetry::PinManagerPinItemToTaskbarShim_ @ 0x18012ADA0 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 * Callees:
 *     ??0?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1801351E4 (--0-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflect_ea_1801351E4.c)
 *     ??0?$shared_ptr@VPinRequestContext@@@std@@QEAA@AEBV01@@Z @ 0x180135568 (--0-$shared_ptr@VPinRequestContext@@@std@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall _lambda_06451eacb7a8912ae3302a5615ee0eb8_::_lambda_06451eacb7a8912ae3302a5615ee0eb8_(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // r8

  std::shared_ptr<PinRequestContext>::shared_ptr<PinRequestContext>(a1, a2);
  *(_QWORD *)(v3 + 32) = 0LL;
  *(_QWORD *)(v3 + 40) = 0LL;
  *(_OWORD *)(v3 + 16) = *(_OWORD *)v4;
  *(_OWORD *)(v3 + 32) = *(_OWORD *)(v4 + 16);
  *(_QWORD *)(v4 + 16) = 0LL;
  *(_QWORD *)(v4 + 24) = 7LL;
  *(_WORD *)v4 = 0;
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)(v3 + 48));
  *(_QWORD *)(a1 + 48) = &PinManagerTelemetry::PinManagerPinItemToTaskbarShim::`vftable';
  return a1;
}
