/*
 * XREFs of ?ThrowResultException@wil@@YAXAEBUFailureInfo@1@@Z @ 0x1800020CC
 * Callers:
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEB_WW4ReportFailureOptions@12@@Z @ 0x18000258C (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEB_WW4ReportFailureOptions@12@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180006B70 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::ThrowResultException(wil *this, const struct wil::FailureInfo *a2)
{
  if ( wil::details::g_pfnThrowResultException )
    wil::details::g_pfnThrowResultException(this);
}
