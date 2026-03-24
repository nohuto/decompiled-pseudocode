/*
 * XREFs of IsEditionHandleAltTabCancelSupported @ 0x1C004DA60
 * Callers:
 *     ApiSetEditionHandleAltTabCancel @ 0x1C004D978 (ApiSetEditionHandleAltTabCancel.c)
 *     ApiSetEditionClientCharToWchar @ 0x1C01CAA54 (ApiSetEditionClientCharToWchar.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 IsEditionHandleAltTabCancelSupported()
{
  if ( qword_1C0257528 )
    return qword_1C0257528();
  else
    return 3221225659LL;
}
