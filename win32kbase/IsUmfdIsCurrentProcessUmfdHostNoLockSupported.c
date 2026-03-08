/*
 * XREFs of IsUmfdIsCurrentProcessUmfdHostNoLockSupported @ 0x1C00D1208
 * Callers:
 *     GdiProcessCallout @ 0x1C006FD60 (GdiProcessCallout.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 IsUmfdIsCurrentProcessUmfdHostNoLockSupported()
{
  if ( qword_1C02D5BF8 )
    return qword_1C02D5BF8();
  else
    return 3221225659LL;
}
