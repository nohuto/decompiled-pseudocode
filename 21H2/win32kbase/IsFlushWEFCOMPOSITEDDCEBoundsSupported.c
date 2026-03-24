/*
 * XREFs of IsFlushWEFCOMPOSITEDDCEBoundsSupported @ 0x1C01FC4D4
 * Callers:
 *     ReleaseCacheDC @ 0x1C00366B0 (ReleaseCacheDC.c)
 *     _GetDCEx @ 0x1C0036C00 (_GetDCEx.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 IsFlushWEFCOMPOSITEDDCEBoundsSupported()
{
  if ( qword_1C02576C8 )
    return qword_1C02576C8();
  else
    return 3221225659LL;
}
