/*
 * XREFs of ?WilRaiseFailFastException@details@wil@@YGXPAU_EXCEPTION_RECORD@@PAU_CONTEXT@@K@Z @ 0x10003CDC
 * Callers:
 *     ?WilFailFast@details@wil@@YGXABUFailureInfo@2@@Z @ 0x10003D06 (-WilFailFast@details@wil@@YGXABUFailureInfo@2@@Z.c)
 * Callees:
 *     @_guard_check_icall_nop@4 @ 0x10004890 (@_guard_check_icall_nop@4.c)
 */

void __cdecl __noreturn wil::details::WilRaiseFailFastException(wil::details *this)
{
  struct _EXCEPTION_RECORD *v1; // ecx

  if ( wil::details::g_pfnRaiseFailFastException )
    wil::details::g_pfnRaiseFailFastException(v1, 0, (unsigned int)this);
  __fastfail(7u);
}
