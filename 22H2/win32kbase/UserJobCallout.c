/*
 * XREFs of UserJobCallout @ 0x1C004FC24
 * Callers:
 *     xxxUserProcessCallout @ 0x1C003D2A0 (xxxUserProcessCallout.c)
 *     W32CalloutDispatch @ 0x1C004EFB0 (W32CalloutDispatch.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 UserJobCallout()
{
  if ( qword_1C0255DE8 )
    return qword_1C0255DE8();
  else
    return 3221225659LL;
}
