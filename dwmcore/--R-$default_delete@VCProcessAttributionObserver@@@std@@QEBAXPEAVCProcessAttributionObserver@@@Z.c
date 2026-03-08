/*
 * XREFs of ??R?$default_delete@VCProcessAttributionObserver@@@std@@QEBAXPEAVCProcessAttributionObserver@@@Z @ 0x1801CA9CC
 * Callers:
 *     _anonymous_namespace_::State::State @ 0x1800D606C (_anonymous_namespace_--State--State.c)
 *     _anonymous_namespace_::State::_State @ 0x1801CA928 (_anonymous_namespace_--State--_State.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::default_delete<CProcessAttributionObserver>::operator()(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, __int64))
{
  __int64 result; // rax

  if ( a2 )
    return (**a2)(a2, 1LL);
  return result;
}
