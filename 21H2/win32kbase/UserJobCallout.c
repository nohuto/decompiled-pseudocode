/*
 * XREFs of UserJobCallout @ 0x1C00B8BD0
 * Callers:
 *     xxxUserProcessCallout @ 0x1C00369B0 (xxxUserProcessCallout.c)
 *     W32CalloutDispatch @ 0x1C00E4D10 (W32CalloutDispatch.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 UserJobCallout()
{
  if ( qword_1C029BB38 )
    return qword_1C029BB38();
  else
    return 3221225659LL;
}
