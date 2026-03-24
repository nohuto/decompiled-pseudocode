/*
 * XREFs of IsDwmAsyncNotifyDisplayModeChangeSupported @ 0x1C0015228
 * Callers:
 *     UserNotifyDisplayChange @ 0x1C00150E0 (UserNotifyDisplayChange.c)
 *     xxxResetDisplayDevice @ 0x1C0075F20 (xxxResetDisplayDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 IsDwmAsyncNotifyDisplayModeChangeSupported()
{
  if ( qword_1C0257E90 )
    return qword_1C0257E90();
  else
    return 3221225659LL;
}
