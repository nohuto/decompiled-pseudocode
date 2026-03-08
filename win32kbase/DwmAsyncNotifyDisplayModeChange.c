/*
 * XREFs of DwmAsyncNotifyDisplayModeChange @ 0x1C0016D48
 * Callers:
 *     xxxResetDisplayDevice @ 0x1C0016410 (xxxResetDisplayDevice.c)
 *     UserNotifyDisplayChange @ 0x1C0016710 (UserNotifyDisplayChange.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 DwmAsyncNotifyDisplayModeChange()
{
  if ( qword_1C02D72F0 )
    return qword_1C02D72F0();
  else
    return 3221225659LL;
}
