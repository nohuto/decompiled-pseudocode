/*
 * XREFs of ??1?$ScopeExitFn@V_lambda_dd8f4aabae2ca26411facba6a281aa4a_@@@details@wil@@QEAA@XZ @ 0x1802BC8EC
 * Callers:
 *     _Windows::Internal::ComposableShell::TreeNodeBase::AddChild_::_1_::dtor$0 @ 0x1802BD769 (_Windows--Internal--ComposableShell--TreeNodeBase--AddChild_--_1_--dtor$0.c)
 * Callees:
 *     ??R_lambda_dd8f4aabae2ca26411facba6a281aa4a_@@QEBAXXZ @ 0x1802BCF8C (--R_lambda_dd8f4aabae2ca26411facba6a281aa4a_@@QEBAXXZ.c)
 */

__int64 __fastcall wil::details::ScopeExitFn<_lambda_dd8f4aabae2ca26411facba6a281aa4a_>::~ScopeExitFn<_lambda_dd8f4aabae2ca26411facba6a281aa4a_>(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return _lambda_dd8f4aabae2ca26411facba6a281aa4a_::operator()();
  }
  return result;
}
