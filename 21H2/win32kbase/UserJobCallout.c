/*
 * XREFs of UserJobCallout @ 0x1C004EC24
 * Callers:
 *     xxxUserProcessCallout @ 0x1C003BE30 (xxxUserProcessCallout.c)
 *     W32CalloutDispatch @ 0x1C004DFB0 (W32CalloutDispatch.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 UserJobCallout()
{
  if ( qword_1C0256DE8 )
    return qword_1C0256DE8();
  else
    return 3221225659LL;
}
