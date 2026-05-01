/*
 * XREFs of _lambda_c38bfd10498b2e9fce262131177562b7_::_lambda_invoker_cdecl_ @ 0x1802ABA10
 * Callers:
 *     <none>
 * Callees:
 *     ??$InternalCallback@W4ShellState@Holographic@Shell@Internal@Windows@@@?$wnf_subscription_state@W4ShellState@Holographic@Shell@Internal@Windows@@@details@wil@@QEAAXPEBW4ShellState@Holographic@Shell@Internal@Windows@@K@Z @ 0x1802AC5E8 (--$InternalCallback@W4ShellState@Holographic@Shell@Internal@Windows@@@-$wnf_subscription_state@W.c)
 */

__int64 __fastcall lambda_c38bfd10498b2e9fce262131177562b7_::_lambda_invoker_cdecl_(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6)
{
  if ( a2 )
    wil::details::wnf_subscription_state<enum Windows::Internal::Shell::Holographic::ShellState>::InternalCallback<enum Windows::Internal::Shell::Holographic::ShellState>(
      a4,
      a5,
      a6);
  return 0LL;
}
