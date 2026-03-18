/*
 * XREFs of IsTelemetryAssertsSupported @ 0x1C00C49E8
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0134470 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     Win32kBaseDriverEntry @ 0x1C02DEBC0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 IsTelemetryAssertsSupported()
{
  if ( qword_1C02961C8 )
    return qword_1C02961C8();
  else
    return 3221225659LL;
}
