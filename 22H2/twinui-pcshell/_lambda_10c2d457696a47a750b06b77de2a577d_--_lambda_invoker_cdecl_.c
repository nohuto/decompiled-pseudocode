/*
 * XREFs of _lambda_10c2d457696a47a750b06b77de2a577d_::_lambda_invoker_cdecl_ @ 0x1803B3D70
 * Callers:
 *     <none>
 * Callees:
 *     ??$InternalCallback@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@?$wnf_subscription_state@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@details@wil@@QEAAXPEBW4UserDisplayContext@Holographic@Shell@Internal@Windows@@K@Z @ 0x1803B4094 (--$InternalCallback@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@-$wnf_subscription.c)
 */

__int64 __fastcall lambda_10c2d457696a47a750b06b77de2a577d_::_lambda_invoker_cdecl_(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6)
{
  if ( a2 )
    wil::details::wnf_subscription_state<enum Windows::Internal::Shell::Holographic::UserDisplayContext>::InternalCallback<enum Windows::Internal::Shell::Holographic::UserDisplayContext>(
      a4,
      a5,
      a6);
  return 0LL;
}
