/*
 * XREFs of IsUmfdUninitializeProcessSupported @ 0x1C00B80B0
 * Callers:
 *     GdiProcessCallout @ 0x1C014D030 (GdiProcessCallout.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 IsUmfdUninitializeProcessSupported()
{
  if ( qword_1C0256680 )
    return qword_1C0256680();
  else
    return 3221225659LL;
}
