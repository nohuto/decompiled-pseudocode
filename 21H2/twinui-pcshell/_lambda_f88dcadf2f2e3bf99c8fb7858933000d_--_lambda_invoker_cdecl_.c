/*
 * XREFs of _lambda_f88dcadf2f2e3bf99c8fb7858933000d_::_lambda_invoker_cdecl_ @ 0x180338070
 * Callers:
 *     <none>
 * Callees:
 *     ??$InternalCallback@E@?$wnf_subscription_state@E@details@wil@@QEAAXPEBEK@Z @ 0x18033815C (--$InternalCallback@E@-$wnf_subscription_state@E@details@wil@@QEAAXPEBEK@Z.c)
 */

__int64 __fastcall lambda_f88dcadf2f2e3bf99c8fb7858933000d_::_lambda_invoker_cdecl_(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6)
{
  if ( a2 )
    wil::details::wnf_subscription_state<unsigned char>::InternalCallback<unsigned char>(a4, a5, a6);
  return 0LL;
}
