/*
 * XREFs of IsUmfdIsCurrentProcessUmfdHostNoLockSupported @ 0x1C00828D0
 * Callers:
 *     GdiThreadCallout @ 0x1C00826D0 (GdiThreadCallout.c)
 *     GdiProcessCallout @ 0x1C014D030 (GdiProcessCallout.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 IsUmfdIsCurrentProcessUmfdHostNoLockSupported()
{
  if ( qword_1C0256670 )
    return qword_1C0256670();
  else
    return 3221225659LL;
}
