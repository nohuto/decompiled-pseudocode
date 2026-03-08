/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_1ad7ecfab602a777ecf020873216a663_@@CA@PEAX@Z @ 0x180193CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z @ 0x180195C0C (-OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z.c)
 */

void __fastcall _lambda_1ad7ecfab602a777ecf020873216a663_::_lambda_invoker_cdecl_(char *a1)
{
  if ( *a1 )
    wil::details_abi::SubscriptionList::OnSignaled((LPCRITICAL_SECTION)(a1 + 72), (PSRWLOCK)a1 + 4);
}
