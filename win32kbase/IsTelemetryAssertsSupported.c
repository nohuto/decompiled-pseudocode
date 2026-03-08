/*
 * XREFs of IsTelemetryAssertsSupported @ 0x1C00D3DA8
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C015C290 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     Win32kBaseDriverEntry @ 0x1C0320F10 (Win32kBaseDriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 IsTelemetryAssertsSupported()
{
  if ( qword_1C02D7340 )
    return qword_1C02D7340();
  else
    return 3221225659LL;
}
