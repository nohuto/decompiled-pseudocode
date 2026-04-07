/*
 * XREFs of _lambda_6fe7f41459601891023985285f8158ba_::_lambda_invoker_cdecl_ @ 0x1800534D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$InternalCallback@H@?$wnf_subscription_state@H@details@wil@@QEAAXPEBHK@Z @ 0x1800534F8 (--$InternalCallback@H@-$wnf_subscription_state@H@details@wil@@QEAAXPEBHK@Z.c)
 */

__int64 __fastcall lambda_6fe7f41459601891023985285f8158ba_::_lambda_invoker_cdecl_(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6)
{
  if ( a2 )
    wil::details::wnf_subscription_state<int>::InternalCallback<int>(a4, a5, a6);
  return 0LL;
}
