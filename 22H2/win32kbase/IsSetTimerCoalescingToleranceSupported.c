/*
 * XREFs of IsSetTimerCoalescingToleranceSupported @ 0x1C00C3CC0
 * Callers:
 *     PostWinlogonMessage @ 0x1C0086360 (PostWinlogonMessage.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C009F448 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 IsSetTimerCoalescingToleranceSupported()
{
  if ( qword_1C0295920 )
    return qword_1C0295920();
  else
    return 3221225659LL;
}
