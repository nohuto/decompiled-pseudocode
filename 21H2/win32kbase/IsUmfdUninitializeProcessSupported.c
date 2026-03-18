/*
 * XREFs of IsUmfdUninitializeProcessSupported @ 0x1C00C5D58
 * Callers:
 *     GdiProcessCallout @ 0x1C0016BD0 (GdiProcessCallout.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 IsUmfdUninitializeProcessSupported()
{
  if ( qword_1C029B400 )
    return qword_1C029B400();
  else
    return 3221225659LL;
}
