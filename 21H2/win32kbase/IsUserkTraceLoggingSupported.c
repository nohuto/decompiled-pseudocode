/*
 * XREFs of IsUserkTraceLoggingSupported @ 0x1C005B3F8
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C01481B0 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     Win32kBaseDriverEntry @ 0x1C02E4310 (Win32kBaseDriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 IsUserkTraceLoggingSupported()
{
  if ( qword_1C029CAF0 )
    return qword_1C029CAF0();
  else
    return 3221225659LL;
}
