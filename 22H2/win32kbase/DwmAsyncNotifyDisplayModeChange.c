/*
 * XREFs of DwmAsyncNotifyDisplayModeChange @ 0x1C00165B8
 * Callers:
 *     UserNotifyDisplayChange @ 0x1C0016550 (UserNotifyDisplayChange.c)
 *     xxxResetDisplayDevice @ 0x1C0077600 (xxxResetDisplayDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 DwmAsyncNotifyDisplayModeChange()
{
  if ( qword_1C0256E98 )
    return qword_1C0256E98();
  else
    return 3221225659LL;
}
