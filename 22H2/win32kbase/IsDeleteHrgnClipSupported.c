/*
 * XREFs of IsDeleteHrgnClipSupported @ 0x1C00972D4
 * Callers:
 *     ReleaseCacheDC @ 0x1C0037B20 (ReleaseCacheDC.c)
 *     _GetDCEx @ 0x1C0038070 (_GetDCEx.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 IsDeleteHrgnClipSupported()
{
  if ( qword_1C02566B8 )
    return qword_1C02566B8();
  else
    return 3221225659LL;
}
