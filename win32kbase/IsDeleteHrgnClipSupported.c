/*
 * XREFs of IsDeleteHrgnClipSupported @ 0x1C0041F9C
 * Callers:
 *     ReleaseCacheDC @ 0x1C003F210 (ReleaseCacheDC.c)
 *     _GetDCEx @ 0x1C003F6E0 (_GetDCEx.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 IsDeleteHrgnClipSupported()
{
  if ( qword_1C02D6C40 )
    return qword_1C02D6C40();
  else
    return 3221225659LL;
}
