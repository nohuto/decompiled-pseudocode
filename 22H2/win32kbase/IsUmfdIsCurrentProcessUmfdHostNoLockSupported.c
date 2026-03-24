/*
 * XREFs of IsUmfdIsCurrentProcessUmfdHostNoLockSupported @ 0x1C0074260
 * Callers:
 *     GdiProcessCallout @ 0x1C0073730 (GdiProcessCallout.c)
 *     GdiThreadCallout @ 0x1C0074060 (GdiThreadCallout.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 IsUmfdIsCurrentProcessUmfdHostNoLockSupported()
{
  if ( qword_1C0255670 )
    return qword_1C0255670();
  else
    return 3221225659LL;
}
