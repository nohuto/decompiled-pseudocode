/*
 * XREFs of IsFlushWEFCOMPOSITEDDCEBoundsSupported @ 0x1C01FC404
 * Callers:
 *     ReleaseCacheDC @ 0x1C0037B20 (ReleaseCacheDC.c)
 *     _GetDCEx @ 0x1C0038070 (_GetDCEx.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 IsFlushWEFCOMPOSITEDDCEBoundsSupported()
{
  if ( qword_1C02566C8 )
    return qword_1C02566C8();
  else
    return 3221225659LL;
}
