/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_152aa9d2a3a0648fa2fa7fcef514b376_@@CA@PEAX@Z @ 0x140006CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z @ 0x14000B638 (-OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z.c)
 */

void __fastcall _lambda_152aa9d2a3a0648fa2fa7fcef514b376_::_lambda_invoker_cdecl_(char *a1)
{
  if ( *a1 )
    wil::details_abi::SubscriptionList::OnSignaled((LPCRITICAL_SECTION)(a1 + 152), (PSRWLOCK)a1 + 4);
}
