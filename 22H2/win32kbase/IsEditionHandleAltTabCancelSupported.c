/*
 * XREFs of IsEditionHandleAltTabCancelSupported @ 0x1C00B6E00
 * Callers:
 *     ApiSetEditionClientCharToWchar @ 0x1C0205C48 (ApiSetEditionClientCharToWchar.c)
 *     ApiSetEditionHandleAltTabCancel @ 0x1C020642C (ApiSetEditionHandleAltTabCancel.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 IsEditionHandleAltTabCancelSupported()
{
  if ( qword_1C0296780 )
    return qword_1C0296780();
  else
    return 3221225659LL;
}
