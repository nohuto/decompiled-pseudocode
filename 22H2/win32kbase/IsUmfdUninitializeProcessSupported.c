/*
 * XREFs of IsUmfdUninitializeProcessSupported @ 0x1C00B83D0
 * Callers:
 *     GdiProcessCallout @ 0x1C0073730 (GdiProcessCallout.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 IsUmfdUninitializeProcessSupported()
{
  if ( qword_1C0255680 )
    return qword_1C0255680();
  else
    return 3221225659LL;
}
