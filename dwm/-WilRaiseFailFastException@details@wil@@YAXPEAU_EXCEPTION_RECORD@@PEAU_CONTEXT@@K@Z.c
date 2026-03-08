/*
 * XREFs of ?WilRaiseFailFastException@details@wil@@YAXPEAU_EXCEPTION_RECORD@@PEAU_CONTEXT@@K@Z @ 0x14000A51C
 * Callers:
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x14000A458 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140007200 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall __noreturn wil::details::WilRaiseFailFastException(
        struct _EXCEPTION_RECORD *this,
        struct _EXCEPTION_RECORD *a2,
        struct _CONTEXT *a3)
{
  if ( wil::details::g_pfnRaiseFailFastException )
    wil::details::g_pfnRaiseFailFastException(this, 0LL, (unsigned int)a3);
  __fastfail(7u);
}
