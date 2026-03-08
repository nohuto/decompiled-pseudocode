/*
 * XREFs of UserJobCallout @ 0x1C00BD268
 * Callers:
 *     xxxUserProcessCallout @ 0x1C0074450 (xxxUserProcessCallout.c)
 *     W32CalloutDispatch @ 0x1C00ED390 (W32CalloutDispatch.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 UserJobCallout()
{
  if ( qword_1C02D63F0 )
    return qword_1C02D63F0();
  else
    return 3221225659LL;
}
