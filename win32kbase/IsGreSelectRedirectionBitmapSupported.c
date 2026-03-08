/*
 * XREFs of IsGreSelectRedirectionBitmapSupported @ 0x1C003CECC
 * Callers:
 *     GetMonitorDC @ 0x1C003D41C (GetMonitorDC.c)
 *     DestroyCacheDC @ 0x1C003DA20 (DestroyCacheDC.c)
 *     _GetDCEx @ 0x1C003F6E0 (_GetDCEx.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGreSelectRedirectionBitmapSupported()
{
  if ( qword_1C02D6008 )
    return qword_1C02D6008();
  else
    return 3221225659LL;
}
