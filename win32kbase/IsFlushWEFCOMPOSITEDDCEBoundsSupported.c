/*
 * XREFs of IsFlushWEFCOMPOSITEDDCEBoundsSupported @ 0x1C000DBB4
 * Callers:
 *     ReleaseCacheDC @ 0x1C003F210 (ReleaseCacheDC.c)
 *     _GetDCEx @ 0x1C003F6E0 (_GetDCEx.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 IsFlushWEFCOMPOSITEDDCEBoundsSupported()
{
  if ( qword_1C02D6C50 )
    return qword_1C02D6C50();
  else
    return 3221225659LL;
}
