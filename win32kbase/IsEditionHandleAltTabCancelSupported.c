/*
 * XREFs of IsEditionHandleAltTabCancelSupported @ 0x1C00BA8BC
 * Callers:
 *     ApiSetEditionHandleAltTabCancel @ 0x1C00BA778 (ApiSetEditionHandleAltTabCancel.c)
 *     ApiSetEditionClientCharToWchar @ 0x1C023C9B4 (ApiSetEditionClientCharToWchar.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 IsEditionHandleAltTabCancelSupported()
{
  if ( qword_1C02D78F8 )
    return qword_1C02D78F8();
  else
    return 3221225659LL;
}
