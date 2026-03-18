/*
 * XREFs of IsUmfdIsCurrentProcessUmfdHostNoLockSupported @ 0x1C00936C8
 * Callers:
 *     GdiProcessCallout @ 0x1C0016BD0 (GdiProcessCallout.c)
 *     GdiThreadCallout @ 0x1C00934E0 (GdiThreadCallout.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 IsUmfdIsCurrentProcessUmfdHostNoLockSupported()
{
  if ( qword_1C029B3F0 )
    return qword_1C029B3F0();
  else
    return 3221225659LL;
}
