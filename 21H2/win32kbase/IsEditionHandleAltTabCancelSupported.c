/*
 * XREFs of IsEditionHandleAltTabCancelSupported @ 0x1C004CA60
 * Callers:
 *     ApiSetEditionHandleAltTabCancel @ 0x1C004C978 (ApiSetEditionHandleAltTabCancel.c)
 *     ApiSetEditionClientCharToWchar @ 0x1C01CAB24 (ApiSetEditionClientCharToWchar.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 IsEditionHandleAltTabCancelSupported()
{
  if ( qword_1C0258528 )
    return qword_1C0258528();
  else
    return 3221225659LL;
}
