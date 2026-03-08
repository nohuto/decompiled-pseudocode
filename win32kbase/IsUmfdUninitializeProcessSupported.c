/*
 * XREFs of IsUmfdUninitializeProcessSupported @ 0x1C00D4658
 * Callers:
 *     GdiProcessCallout @ 0x1C006FD60 (GdiProcessCallout.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 IsUmfdUninitializeProcessSupported()
{
  if ( qword_1C02D5C08 )
    return qword_1C02D5C08();
  else
    return 3221225659LL;
}
