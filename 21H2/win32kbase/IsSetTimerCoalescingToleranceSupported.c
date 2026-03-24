/*
 * XREFs of IsSetTimerCoalescingToleranceSupported @ 0x1C0077520
 * Callers:
 *     PostWinlogonMessage @ 0x1C0074CD0 (PostWinlogonMessage.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0076B30 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 IsSetTimerCoalescingToleranceSupported()
{
  if ( qword_1C0257500 )
    return qword_1C0257500();
  else
    return 3221225659LL;
}
